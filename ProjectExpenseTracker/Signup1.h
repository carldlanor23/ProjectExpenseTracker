#pragma once
#include "login.h"
#include "User.h"


namespace ProjectExpenseTracker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ signupBtn;
	protected:

	private: System::Windows::Forms::Button^ loginForm;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ userText;
	private: System::Windows::Forms::TextBox^ passText;
	private: System::Windows::Forms::TextBox^ confirmText;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ nameText;
	private: System::Windows::Forms::TextBox^ emailText;
	private: System::Windows::Forms::Label^ label6;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->signupBtn = (gcnew System::Windows::Forms::Button());
			this->loginForm = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->userText = (gcnew System::Windows::Forms::TextBox());
			this->passText = (gcnew System::Windows::Forms::TextBox());
			this->confirmText = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nameText = (gcnew System::Windows::Forms::TextBox());
			this->emailText = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// signupBtn
			// 
			this->signupBtn->Location = System::Drawing::Point(297, 505);
			this->signupBtn->Name = L"signupBtn";
			this->signupBtn->Size = System::Drawing::Size(227, 160);
			this->signupBtn->TabIndex = 0;
			this->signupBtn->Text = L"Sign up";
			this->signupBtn->UseVisualStyleBackColor = true;
			this->signupBtn->Click += gcnew System::EventHandler(this, &Signup::signupBtn_Click);
			// 
			// loginForm
			// 
			this->loginForm->Location = System::Drawing::Point(632, 505);
			this->loginForm->Name = L"loginForm";
			this->loginForm->Size = System::Drawing::Size(227, 160);
			this->loginForm->TabIndex = 1;
			this->loginForm->Text = L"Login";
			this->loginForm->UseVisualStyleBackColor = true;
			this->loginForm->Click += gcnew System::EventHandler(this, &Signup::loginForm_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(261, 272);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(267, 335);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(145, 407);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(289, 37);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Confirm Password:";
			// 
			// userText
			// 
			this->userText->Location = System::Drawing::Point(459, 265);
			this->userText->Name = L"userText";
			this->userText->Size = System::Drawing::Size(328, 44);
			this->userText->TabIndex = 5;
			// 
			// passText
			// 
			this->passText->Location = System::Drawing::Point(459, 328);
			this->passText->Name = L"passText";
			this->passText->Size = System::Drawing::Size(328, 44);
			this->passText->TabIndex = 6;
			// 
			// confirmText
			// 
			this->confirmText->Location = System::Drawing::Point(459, 400);
			this->confirmText->Name = L"confirmText";
			this->confirmText->Size = System::Drawing::Size(328, 44);
			this->confirmText->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(328, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 37);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Email:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(322, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 37);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Name:";
			// 
			// nameText
			// 
			this->nameText->Location = System::Drawing::Point(459, 129);
			this->nameText->Name = L"nameText";
			this->nameText->Size = System::Drawing::Size(328, 44);
			this->nameText->TabIndex = 10;
			// 
			// emailText
			// 
			this->emailText->Location = System::Drawing::Point(459, 195);
			this->emailText->Name = L"emailText";
			this->emailText->Size = System::Drawing::Size(328, 44);
			this->emailText->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Stencil", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(347, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(411, 95);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Welcome";
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1129, 740);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->emailText);
			this->Controls->Add(this->nameText);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->confirmText);
			this->Controls->Add(this->passText);
			this->Controls->Add(this->userText);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->loginForm);
			this->Controls->Add(this->signupBtn);
			this->Name = L"Signup";
			this->Text = L"Signup";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: bool switchToLogin = false;
	private: System::Void loginForm_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	public: User^ user = nullptr;
private: System::Void signupBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = nameText->Text;
	String^ email = emailText->Text;
	String^ username = userText->Text;
	String^ password = passText->Text;
	String^ confirmPass = confirmText->Text;

	if (name->Length == 0 || email->Length == 0 || username->Length == 0 || password->Length == 0)
	{
		MessageBox::Show("Please enter all the fields","One or more fields is empty.", MessageBoxButtons::OK);
		return;
	}
	if (password != confirmPass)
	{
		MessageBox::Show("Password and Confirm password do not match", "Password Error", MessageBoxButtons::OK);
		return;
	}

	try
	{
		String^ connString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\carla\\Documents\\Accounts.mdf;Integrated Security=True;Connect Timeout=5";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "INSERT into \"User\" " + "(name, email, username, password) VALUES " + "(@name, @email, @username, @password);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@password", password);
		command.ExecuteNonQuery();
		user = gcnew User;
		user->name = name;
		user->email = email;
		user->user = username;
		user->pass = password;

		this->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to register new user", "Register Failure", MessageBoxButtons::OK);
	}
}
};
}
