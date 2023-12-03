#include "Expenses.h"
#include "login.h"
#include "User.h"
#include "add.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ account = nullptr;
	while (true)
	{
		ProjectExpenseTracker::login loginForm;
		loginForm.ShowDialog();
		if (loginForm.switchToSignup)
		{
			ProjectExpenseTracker::Signup signupForm;
			signupForm.ShowDialog();
			if (signupForm.switchToLogin)
			{
				continue;
			}
			else
			{
				account = signupForm.user;
				break;
			}
		}
		else {
			account = loginForm.account;
			break;
		}
	}

	if (account != nullptr)
	{
		while (true) {
			ProjectExpenseTracker::Expenses expenses(account);
			Application::Run(% expenses);
			if (expenses.switchToAdd)
			{
				ProjectExpenseTracker::add addForm(account);
				Application::Run(% addForm);
				if (addForm.switchToExpenses)
				{
					continue;
				}
				else
				{
					account = expenses.user;
				}
				
			}
			else {
				account = expenses.user;
				break;
			}
		}
	}
	else
	{
		MessageBox::Show("Authentication cancelled", "login.cpp", MessageBoxButtons::OK);
	}
}