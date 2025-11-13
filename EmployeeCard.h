#pragma once
#include<string>




using namespace System;
using namespace std;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Drawing;
using namespace System::IO;


namespace Gymmanagment {

	/// <summary>
	/// Summary for EmployeeCard
	/// </summary>
	public ref class EmployeeCard : public System::Windows::Forms::UserControl
	{
	public:
		void setImage(Image^ img) 
		{
			empPctrBx->SizeMode = PictureBoxSizeMode::StretchImage;
			empPctrBx->Image = img;

		}
		void setName(string name) 
		{
			String^ Name = gcnew String(name.c_str());
			lblName->Text = Name;
		}
		void setAge(int age)
		{
			String^ Age = Convert::ToString(age);
			lblAge->Text = Age;
		}
		void setAddress(string address)
		{
			String^ Address = gcnew String(address.c_str());
			lblAddress->Text = Address;
		}
		void setEmail(string email)
		{
			String^ Email = gcnew String(email.c_str());
			lblEmail->Text = Email;
		}
		void setHiredate(string hire)
		{
			String^ Hire = gcnew String(hire.c_str());
			lblHireDate->Text = Hire;
		}
		void setPhoneno(string phone)
		{
			String^ Phone = gcnew String(phone.c_str());
			lblPhone->Text = Phone;
		}
		void setPosition(string pos)
		{
			String^ Pos = gcnew String(pos.c_str());
			lblPosition->Text = Pos;
		}
		void setSalary(int salary)
		{
			String^ Salary = Convert::ToString(salary);
			lblSalary->Text = Salary;
		}

	public:
		EmployeeCard(void)
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
		~EmployeeCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ lblSalary;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblHireDate;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblPosition;
	private: System::Windows::Forms::Label^ lbl;
	private: System::Windows::Forms::Label^ lblAddress;
	private: System::Windows::Forms::Label^ lblEmail;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblAge;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ empPctrBx;

	protected:

	protected:




















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblSalary = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblHireDate = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblPosition = (gcnew System::Windows::Forms::Label());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblAge = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->empPctrBx = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->empPctrBx))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSlateGray;
			this->panel1->Controls->Add(this->lblSalary);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->lblPhone);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->lblHireDate);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->lblPosition);
			this->panel1->Controls->Add(this->lbl);
			this->panel1->Controls->Add(this->lblAddress);
			this->panel1->Controls->Add(this->lblEmail);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->lblAge);
			this->panel1->Controls->Add(this->lblName);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->empPctrBx);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(638, 217);
			this->panel1->TabIndex = 0;
			// 
			// lblSalary
			// 
			this->lblSalary->AutoSize = true;
			this->lblSalary->BackColor = System::Drawing::Color::LightSlateGray;
			this->lblSalary->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSalary->ForeColor = System::Drawing::Color::Transparent;
			this->lblSalary->Location = System::Drawing::Point(474, 52);
			this->lblSalary->Name = L"lblSalary";
			this->lblSalary->Size = System::Drawing::Size(60, 21);
			this->lblSalary->TabIndex = 33;
			this->lblSalary->Text = L"label3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::LightSlateGray;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(402, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 21);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Salary:";
			// 
			// lblPhone
			// 
			this->lblPhone->AutoSize = true;
			this->lblPhone->BackColor = System::Drawing::Color::LightSlateGray;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->ForeColor = System::Drawing::Color::Transparent;
			this->lblPhone->Location = System::Drawing::Point(500, 17);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(60, 21);
			this->lblPhone->TabIndex = 31;
			this->lblPhone->Text = L"label3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::LightSlateGray;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(402, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 21);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Phone no:";
			// 
			// lblHireDate
			// 
			this->lblHireDate->AutoSize = true;
			this->lblHireDate->BackColor = System::Drawing::Color::LightSlateGray;
			this->lblHireDate->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHireDate->ForeColor = System::Drawing::Color::Transparent;
			this->lblHireDate->Location = System::Drawing::Point(332, 176);
			this->lblHireDate->Name = L"lblHireDate";
			this->lblHireDate->Size = System::Drawing::Size(60, 21);
			this->lblHireDate->TabIndex = 29;
			this->lblHireDate->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::LightSlateGray;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(235, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 21);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Hire Date:";
			// 
			// lblPosition
			// 
			this->lblPosition->AutoSize = true;
			this->lblPosition->BackColor = System::Drawing::Color::LightSlateGray;
			this->lblPosition->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPosition->ForeColor = System::Drawing::Color::Transparent;
			this->lblPosition->Location = System::Drawing::Point(320, 147);
			this->lblPosition->Name = L"lblPosition";
			this->lblPosition->Size = System::Drawing::Size(60, 21);
			this->lblPosition->TabIndex = 27;
			this->lblPosition->Text = L"label3";
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->BackColor = System::Drawing::Color::LightSlateGray;
			this->lbl->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl->ForeColor = System::Drawing::Color::Black;
			this->lbl->Location = System::Drawing::Point(235, 147);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(85, 21);
			this->lbl->TabIndex = 26;
			this->lbl->Text = L"Position:";
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->BackColor = System::Drawing::Color::LightSlateGray;
			this->lblAddress->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAddress->ForeColor = System::Drawing::Color::Transparent;
			this->lblAddress->Location = System::Drawing::Point(314, 114);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(60, 21);
			this->lblAddress->TabIndex = 25;
			this->lblAddress->Text = L"label3";
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->BackColor = System::Drawing::Color::LightSlateGray;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->ForeColor = System::Drawing::Color::Transparent;
			this->lblEmail->Location = System::Drawing::Point(300, 83);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(60, 21);
			this->lblEmail->TabIndex = 24;
			this->lblEmail->Text = L"label3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::LightSlateGray;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(235, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 21);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::LightSlateGray;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(235, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 21);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Email:";
			// 
			// lblAge
			// 
			this->lblAge->AutoSize = true;
			this->lblAge->BackColor = System::Drawing::Color::LightSlateGray;
			this->lblAge->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAge->ForeColor = System::Drawing::Color::Transparent;
			this->lblAge->Location = System::Drawing::Point(288, 48);
			this->lblAge->Name = L"lblAge";
			this->lblAge->Size = System::Drawing::Size(60, 21);
			this->lblAge->TabIndex = 21;
			this->lblAge->Text = L"label3";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->BackColor = System::Drawing::Color::LightSlateGray;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::Transparent;
			this->lblName->Location = System::Drawing::Point(300, 17);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(60, 21);
			this->lblName->TabIndex = 20;
			this->lblName->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightSlateGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(235, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 21);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Age:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightSlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(235, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 21);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Name:";
			// 
			// empPctrBx
			// 
			this->empPctrBx->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->empPctrBx->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->empPctrBx->Location = System::Drawing::Point(17, 17);
			this->empPctrBx->Name = L"empPctrBx";
			this->empPctrBx->Size = System::Drawing::Size(199, 187);
			this->empPctrBx->TabIndex = 17;
			this->empPctrBx->TabStop = false;
			// 
			// EmployeeCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Controls->Add(this->panel1);
			this->Name = L"EmployeeCard";
			this->Size = System::Drawing::Size(644, 223);
			this->Load += gcnew System::EventHandler(this, &EmployeeCard::EmployeeCard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->empPctrBx))->EndInit();
			this->ResumeLayout(false);

		}
		
#pragma endregion
	private: System::Void EmployeeCard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
