#pragma once
#include "Expenses.h"
#include "ExpensesDetail.h"
#include <string>


namespace ProjectExpenseTracker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for add
	/// </summary>
	public ref class add : public System::Windows::Forms::Form
	{
	public:
		add(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			userID->Text = System::Convert::ToString(user->id);
			updateData();
			
		}
		User^ user = user;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public: 
		void updateData()
		{
			Double^ userid = System::Convert::ToDouble(userID->Text);
			String^ connString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\carla\\Documents\\Accounts.mdf;Integrated Security=True;Connect Timeout=5";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "SELECT * FROM \"Expenses\" WHERE Userid=@userid";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("userid", userid);
			
			
		}

		
	private: System::Windows::Forms::Label^ userID;

	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ categoryText;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ priceText;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->categoryText = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->priceText = (gcnew System::Windows::Forms::TextBox());
			this->userID = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(601, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Expenses";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(309, 296);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Category:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(366, 365);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Price:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(371, 451);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 37);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Date:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(579, 538);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 103);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &add::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(791, 548);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 93);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Go back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &add::button2_Click);
			// 
			// categoryText
			// 
			this->categoryText->FormattingEnabled = true;
			this->categoryText->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Education", L"Food", L"Insurance", L"Medical",
					L"Rent", L"Shopping", L"Travel", L"Utilities"
			});
			this->categoryText->Location = System::Drawing::Point(498, 296);
			this->categoryText->Name = L"categoryText";
			this->categoryText->Size = System::Drawing::Size(545, 45);
			this->categoryText->TabIndex = 6;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(498, 451);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(545, 44);
			this->dateTimePicker1->TabIndex = 7;
			// 
			// priceText
			// 
			this->priceText->Location = System::Drawing::Point(498, 365);
			this->priceText->Name = L"priceText";
			this->priceText->Size = System::Drawing::Size(545, 44);
			this->priceText->TabIndex = 8;
			// 
			// userID
			// 
			this->userID->AutoSize = true;
			this->userID->Location = System::Drawing::Point(666, 699);
			this->userID->Name = L"userID";
			this->userID->Size = System::Drawing::Size(102, 37);
			this->userID->TabIndex = 9;
			this->userID->Text = L"label5";
			this->userID->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1120, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 123;
			this->dataGridView1->RowTemplate->Height = 46;
			this->dataGridView1->Size = System::Drawing::Size(1390, 874);
			this->dataGridView1->TabIndex = 10;
			// 
			// add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(19, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2512, 887);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->userID);
			this->Controls->Add(this->priceText);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->categoryText);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"add";
			this->Text = L"add";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: bool switchToExpenses = false;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		switchToExpenses = true;
		this->Close();

	}
		   public: ExpensesDetail^ expensesDetail = nullptr;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ category = categoryText->Text;
	String^ date = dateTimePicker1->Text;
	if (category->Length == 0 || date->Length == 0)
	{
		MessageBox::Show("All field mus be filled", "Error", MessageBoxButtons::OK);
	}
	try
	{
		Double^ price = System::Convert::ToDouble(priceText->Text);
		Double^ userid = System::Convert::ToDouble(userID->Text);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Double conversion", "Price error", MessageBoxButtons::OK);
	}
	
	Double^ userid = System::Convert::ToDouble(userID->Text);
	Double^ price = System::Convert::ToDouble(priceText->Text);
	
	try
	{
		String^ connString = "Data Source=(LocalDB)\\MSSQLLocalDB;AttachDbFilename=C:\\Users\\carla\\Documents\\Accounts.mdf;Integrated Security=True;Connect Timeout=5";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "INSERT into \"Expenses\" " + "(Userid, Cost, Category, Date) VALUES " + "(@userid, @cost, @category, @date);";
		
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@userid", userid);
		command.Parameters->AddWithValue("@cost", price);
		command.Parameters->AddWithValue("@category", category);
		command.Parameters->AddWithValue("@date", date);
		command.ExecuteNonQuery();
		MessageBox::Show("Adding", "Success adding", MessageBoxButtons::OK);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to register add expenses", "Adding Error", MessageBoxButtons::OK);
	}
	

}
};
}
