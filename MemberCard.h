#pragma once
#include<string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

namespace Gymmanagment {

	/// <summary>
	/// Summary for MemberCard
	/// </summary>
	public ref class MemberCard : public System::Windows::Forms::UserControl
	{
	public:
		void setImage(Image^ img)
		{
			MemberPctrBx->SizeMode = PictureBoxSizeMode::StretchImage;
			MemberPctrBx->Image = img;

		}
		void setName(string name)
		{
			String^ Name = gcnew String(name.c_str());
			lblMName->Text = Name;
		}
		void setAge(int age)
		{
			String^ Age = Convert::ToString(age);
			lblMAge->Text = Age;
		}
		void setAddress(string address)
		{
			String^ Address = gcnew String(address.c_str());
			lblMAddress->Text = Address;
		}
		void setEmail(string email)
		{
			String^ Email = gcnew String(email.c_str());
			lblMEmail->Text = Email;
		}
		void setRegistrationdate(string reg)
		{
			String^ Reg = gcnew String(reg.c_str());
			lblRegisrationDate->Text = Reg;
		}
		void setPhoneno(string phone)
		{
			String^ Phone = gcnew String(phone.c_str());
			lblMPhone->Text = Phone;
		}
		void setSubscription(string pos)
		{
			String^ Pos = gcnew String(pos.c_str());
			lblSubscription->Text = Pos;
		}
		void setDuration(int salary)
		{
			String^ Salary = Convert::ToString(salary);
			lblDuration->Text = Salary;
		}
	public:
		MemberCard(void)
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
		~MemberCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ lblDuration;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblMPhone;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblRegisrationDate;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblSubscription;
	private: System::Windows::Forms::Label^ lbl;
	private: System::Windows::Forms::Label^ lblMAddress;
	private: System::Windows::Forms::Label^ lblMEmail;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblMAge;
	private: System::Windows::Forms::Label^ lblMName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ MemberPctrBx;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblDuration = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblMPhone = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblRegisrationDate = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblSubscription = (gcnew System::Windows::Forms::Label());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->lblMAddress = (gcnew System::Windows::Forms::Label());
			this->lblMEmail = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblMAge = (gcnew System::Windows::Forms::Label());
			this->lblMName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MemberPctrBx = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MemberPctrBx))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSlateGray;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->lblDuration);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->lblMPhone);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->lblRegisrationDate);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->lblSubscription);
			this->panel1->Controls->Add(this->lbl);
			this->panel1->Controls->Add(this->lblMAddress);
			this->panel1->Controls->Add(this->lblMEmail);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->lblMAge);
			this->panel1->Controls->Add(this->lblMName);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->MemberPctrBx);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(638, 217);
			this->panel1->TabIndex = 0;
			// 
			// lblDuration
			// 
			this->lblDuration->AutoSize = true;
			this->lblDuration->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDuration->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblDuration->Location = System::Drawing::Point(562, 46);
			this->lblDuration->Name = L"lblDuration";
			this->lblDuration->Size = System::Drawing::Size(60, 21);
			this->lblDuration->TabIndex = 50;
			this->lblDuration->Text = L"label3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label8->Location = System::Drawing::Point(472, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 21);
			this->label8->TabIndex = 49;
			this->label8->Text = L"Duration:";
			// 
			// lblMPhone
			// 
			this->lblMPhone->AutoSize = true;
			this->lblMPhone->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMPhone->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblMPhone->Location = System::Drawing::Point(562, 15);
			this->lblMPhone->Name = L"lblMPhone";
			this->lblMPhone->Size = System::Drawing::Size(60, 21);
			this->lblMPhone->TabIndex = 48;
			this->lblMPhone->Text = L"label3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label7->Location = System::Drawing::Point(472, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 21);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Phone no:";
			// 
			// lblRegisrationDate
			// 
			this->lblRegisrationDate->AutoSize = true;
			this->lblRegisrationDate->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegisrationDate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblRegisrationDate->Location = System::Drawing::Point(408, 174);
			this->lblRegisrationDate->Name = L"lblRegisrationDate";
			this->lblRegisrationDate->Size = System::Drawing::Size(60, 21);
			this->lblRegisrationDate->TabIndex = 46;
			this->lblRegisrationDate->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label4->Location = System::Drawing::Point(242, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 21);
			this->label4->TabIndex = 45;
			this->label4->Text = L"Registration Date:";
			// 
			// lblSubscription
			// 
			this->lblSubscription->AutoSize = true;
			this->lblSubscription->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubscription->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblSubscription->Location = System::Drawing::Point(367, 145);
			this->lblSubscription->Name = L"lblSubscription";
			this->lblSubscription->Size = System::Drawing::Size(60, 21);
			this->lblSubscription->TabIndex = 44;
			this->lblSubscription->Text = L"label3";
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->lbl->Location = System::Drawing::Point(242, 145);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(119, 21);
			this->lbl->TabIndex = 43;
			this->lbl->Text = L"Subscription:";
			// 
			// lblMAddress
			// 
			this->lblMAddress->AutoSize = true;
			this->lblMAddress->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMAddress->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblMAddress->Location = System::Drawing::Point(326, 112);
			this->lblMAddress->Name = L"lblMAddress";
			this->lblMAddress->Size = System::Drawing::Size(60, 21);
			this->lblMAddress->TabIndex = 42;
			this->lblMAddress->Text = L"label3";
			// 
			// lblMEmail
			// 
			this->lblMEmail->AutoSize = true;
			this->lblMEmail->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMEmail->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblMEmail->Location = System::Drawing::Point(314, 81);
			this->lblMEmail->Name = L"lblMEmail";
			this->lblMEmail->Size = System::Drawing::Size(60, 21);
			this->lblMEmail->TabIndex = 41;
			this->lblMEmail->Text = L"label3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label5->Location = System::Drawing::Point(242, 112);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 21);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Address:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label6->Location = System::Drawing::Point(242, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 21);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Email:";
			// 
			// lblMAge
			// 
			this->lblMAge->AutoSize = true;
			this->lblMAge->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMAge->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblMAge->Location = System::Drawing::Point(293, 46);
			this->lblMAge->Name = L"lblMAge";
			this->lblMAge->Size = System::Drawing::Size(60, 21);
			this->lblMAge->TabIndex = 38;
			this->lblMAge->Text = L"label3";
			// 
			// lblMName
			// 
			this->lblMName->AutoSize = true;
			this->lblMName->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMName->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblMName->Location = System::Drawing::Point(309, 15);
			this->lblMName->Name = L"lblMName";
			this->lblMName->Size = System::Drawing::Size(60, 21);
			this->lblMName->TabIndex = 37;
			this->lblMName->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label2->Location = System::Drawing::Point(242, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 21);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Age:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label1->Location = System::Drawing::Point(242, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 21);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Name:";
			// 
			// MemberPctrBx
			// 
			this->MemberPctrBx->BackColor = System::Drawing::Color::Gray;
			this->MemberPctrBx->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MemberPctrBx->Location = System::Drawing::Point(24, 15);
			this->MemberPctrBx->Name = L"MemberPctrBx";
			this->MemberPctrBx->Size = System::Drawing::Size(199, 187);
			this->MemberPctrBx->TabIndex = 34;
			this->MemberPctrBx->TabStop = false;
			// 
			// MemberCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->MaximumSize = System::Drawing::Size(647, 223);
			this->Name = L"MemberCard";
			this->Size = System::Drawing::Size(643, 219);
			this->Load += gcnew System::EventHandler(this, &MemberCard::MemberCard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MemberPctrBx))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MemberCard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lblMName_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
