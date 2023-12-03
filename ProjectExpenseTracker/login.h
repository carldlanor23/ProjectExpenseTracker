#pragma once
#include "User.h"
#include "Signup1.h"


namespace ProjectExpenseTracker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ loginButton;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ userText;
	private: System::Windows::Forms::TextBox^ passText;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ closeBtn;




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
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->userText = (gcnew System::Windows::Forms::TextBox());
			this->passText = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// loginButton
			// 
			this->loginButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->loginButton->Location = System::Drawing::Point(518, 336);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(252, 146);
			this->loginButton->TabIndex = 0;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &login::loginButton_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(370, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(376, 260);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password:";
			// 
			// userText
			// 
			this->userText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->userText->Location = System::Drawing::Point(564, 175);
			this->userText->Name = L"userText";
			this->userText->Size = System::Drawing::Size(297, 44);
			this->userText->TabIndex = 3;
			// 
			// passText
			// 
			this->passText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->passText->Location = System::Drawing::Point(564, 253);
			this->passText->Name = L"passText";
			this->passText->Size = System::Drawing::Size(294, 44);
			this->passText->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(644, 512);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 37);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Sign up";
			this->label3->Click += gcnew System::EventHandler(this, &login::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->Font = (gcnew System::Drawing::Font(L"Stencil", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(271, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(888, 98);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Expense Tracker";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(572, 577);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(278, 37);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Forgot Password\?";
			// 
			// closeBtn
			// 
			this->closeBtn->Location = System::Drawing::Point(875, 336);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(222, 146);
			this->closeBtn->TabIndex = 8;
			this->closeBtn->Text = L"Close";
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &login::closeBtn_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1395, 715);
			this->Controls->Add(this->closeBtn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->passText);
			this->Controls->Add(this->userText);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->loginButton);
			this->Name = L"login";
			this->Text = L"login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	public: User^ account = nullptr;
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ user = this->userText->Text;
		String^ pass = this->passText->Text;
		
		if (user->Length == 0 || pass->Length == 0)
		{
			MessageBox::Show("Please enter user and password", "User or password is empty", MessageBoxButtons::OK);
			
				return;
		}
		try {
			
			String^ connString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\carla\\Documents\\Accounts.mdf;Integrated Security=True;Connect Timeout=5";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "SELECT * FROM \"User\" WHERE username=@user AND password=@pwd";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("user", user);
			command.Parameters->AddWithValue("pwd", pass);
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				account = gcnew User;
				account->id = reader->GetInt32(0);
				account->user = reader->GetString(1);
				account->pass = reader->GetString(2);
				account->name = reader->GetString(3);
				this->Close();
			}
			else
			{
				MessageBox::Show("Email or password is incorrect", "Email or password Error", MessageBoxButtons::OK);

			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to connect to database", "Error Connection to database", MessageBoxButtons::OK);
		}
	}
#pragma endregion
		   public: bool switchToSignup = false;
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToSignup = true;
	this->Close();
	
}

private: System::Void closeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
