#pragma once
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
	/// Summary for Expenses
	/// </summary>
	public ref class Expenses : public System::Windows::Forms::Form
	{
	public:
		Expenses(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbUserInfo->Text = "Hello " + user->name + " with user ID#:" + user->id;

		}
		User^ user = nullptr;
		
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Expenses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ logoutBtn;
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Button^ button3;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->logoutBtn = (gcnew System::Windows::Forms::Button());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Location = System::Drawing::Point(125, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(270, 113);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Expenses::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(277, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(778, 95);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Expense Tracker";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->Location = System::Drawing::Point(500, 345);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(265, 120);
			this->button2->TabIndex = 2;
			this->button2->Text = L"View";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// logoutBtn
			// 
			this->logoutBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->logoutBtn->Location = System::Drawing::Point(495, 580);
			this->logoutBtn->Name = L"logoutBtn";
			this->logoutBtn->Size = System::Drawing::Size(270, 113);
			this->logoutBtn->TabIndex = 3;
			this->logoutBtn->Text = L"Logout";
			this->logoutBtn->UseVisualStyleBackColor = true;
			this->logoutBtn->Click += gcnew System::EventHandler(this, &Expenses::logoutBtn_Click);
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Location = System::Drawing::Point(555, 196);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(102, 37);
			this->lbUserInfo->TabIndex = 4;
			this->lbUserInfo->Text = L"label2";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->Location = System::Drawing::Point(897, 345);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(254, 113);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Expenses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1322, 802);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->logoutBtn);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Expenses";
			this->Text = L"Expenses";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void logoutBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   public: bool switchToAdd = false;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToAdd = true;
	this->Close();
}
};
}
