#pragma once
#include "User.h"
namespace SOFTBOSS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginFrom
	/// </summary>
	public ref class LoginFrom : public System::Windows::Forms::Form
	{
	public:
		LoginFrom(void)
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
		~LoginFrom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ lblError;
	private: System::Windows::Forms::TextBox^ txtPassword;
	public: System::Windows::Forms::TextBox^ txtLoginID;
	private:
	private: System::Windows::Forms::Label^ label2;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnCLose;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnReg;

	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtLoginID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnReg = (gcnew System::Windows::Forms::Button());
			this->btnCLose = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblError);
			this->groupBox1->Controls->Add(this->txtPassword);
			this->groupBox1->Controls->Add(this->txtLoginID);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(23, 54);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->groupBox1->Size = System::Drawing::Size(468, 115);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(158, 28);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(0, 25);
			this->lblError->TabIndex = 5;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(124, 59);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(279, 31);
			this->txtPassword->TabIndex = 3;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// txtLoginID
			// 
			this->txtLoginID->Location = System::Drawing::Point(124, 28);
			this->txtLoginID->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtLoginID->Name = L"txtLoginID";
			this->txtLoginID->Size = System::Drawing::Size(279, 31);
			this->txtLoginID->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Name";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(22, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(469, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Login";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnReg);
			this->groupBox2->Controls->Add(this->btnCLose);
			this->groupBox2->Controls->Add(this->btnLogin);
			this->groupBox2->Location = System::Drawing::Point(23, 160);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(466, 58);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// btnReg
			// 
			this->btnReg->BackColor = System::Drawing::Color::LightCyan;
			this->btnReg->Location = System::Drawing::Point(256, 17);
			this->btnReg->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnReg->Name = L"btnReg";
			this->btnReg->Size = System::Drawing::Size(99, 32);
			this->btnReg->TabIndex = 5;
			this->btnReg->Text = L"&Reg";
			this->btnReg->UseVisualStyleBackColor = false;
			// 
			// btnCLose
			// 
			this->btnCLose->BackColor = System::Drawing::Color::LightCyan;
			this->btnCLose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCLose->Location = System::Drawing::Point(361, 17);
			this->btnCLose->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnCLose->Name = L"btnCLose";
			this->btnCLose->Size = System::Drawing::Size(99, 32);
			this->btnCLose->TabIndex = 5;
			this->btnCLose->Text = L"&Close";
			this->btnCLose->UseVisualStyleBackColor = false;
			this->btnCLose->Click += gcnew System::EventHandler(this, &LoginFrom::btnClose_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::LightCyan;
			this->btnLogin->Location = System::Drawing::Point(151, 17);
			this->btnLogin->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(99, 32);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"&LogIn";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginFrom::btnLogin_Click);
			// 
			// LoginFrom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(508, 252);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginFrom";
			this->Text = L"LoginFrom";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

		   public: User^ user = nullptr;
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->txtLoginID->Text;
	String^ password = this->txtPassword->Text;

	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter email and password", "Email or Password Empty", MessageBoxButtons::OK);
		return;
	}

	try
	{


		String^ connString = "Server=DESKTOP-C5IM34Q\\SQLEXPRESS;Database=RHMCSRM;Integrated Security=True; TrustServerCertificate=True;";

		//String^ connString = "Data Source=DESKTOP-C5IM34Q\SQLEXPRESS;Initial Catalog=RHMCSRM;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ query = "select * from Users where UserName = @email and PasswordHash = @password;";

		SqlCommand command(query, % sqlConn);
		command.Parameters->AddWithValue("email", email);
		command.Parameters->AddWithValue("PasswordHash", password);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {

			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->name = reader->GetString(1);
			user->email = reader->GetString(2);
			user->phone = reader->GetString(3);
			user->address = reader->GetString(4);
			user->password = reader->GetString(5);
			this->Close();
		}
		else
		{
			MessageBox::Show("Email or Password is Incorrect", "Email or Password Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to database: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	}

};
}
