#pragma once
#include <msclr/marshal_cppstd.h>
#include"Entities.h"
#include"DataBaseFunctions.h"
#include"GUI_Functions.h"
#include"Functions.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Gymmanagment {

	/// <summary>
	/// Summary for Update_UserControl
	/// </summary>
	public ref class Update_UserControl : public System::Windows::Forms::UserControl
	{
		EmployeeList* employee_list = new EmployeeList();
		MemberList* member_list = new MemberList();
	private: System::Windows::Forms::ComboBox^ cbxEAttribute;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtEnval;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtMnval;


	private: System::Windows::Forms::ComboBox^ cbxMattribute;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	public:
		Update_UserControl(void)
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
		~Update_UserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::ComboBox^ empcbx;
	public: System::Windows::Forms::ComboBox^ Mbrcbx;
	private: System::Windows::Forms::Label^ label2;


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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtEnval = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbxEAttribute = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->empcbx = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtMnval = (gcnew System::Windows::Forms::TextBox());
			this->cbxMattribute = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Mbrcbx = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.22642F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(4, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(699, 533);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->txtEnval);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->cbxEAttribute);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->empcbx);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(691, 495);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Update Employee";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Update_UserControl::tabPage1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(226, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(202, 49);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Update_UserControl::button2_Click);
			// 
			// txtEnval
			// 
			this->txtEnval->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEnval->Location = System::Drawing::Point(226, 180);
			this->txtEnval->Name = L"txtEnval";
			this->txtEnval->Size = System::Drawing::Size(314, 30);
			this->txtEnval->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(106, 180);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 24);
			this->label5->TabIndex = 4;
			this->label5->Text = L"New value:";
			// 
			// cbxEAttribute
			// 
			this->cbxEAttribute->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxEAttribute->FormattingEnabled = true;
			this->cbxEAttribute->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"full_name", L"age ", L"address ", L"email",
					L"phone_number", L"position", L"monthly_salary"
			});
			this->cbxEAttribute->Location = System::Drawing::Point(225, 123);
			this->cbxEAttribute->Name = L"cbxEAttribute";
			this->cbxEAttribute->Size = System::Drawing::Size(315, 32);
			this->cbxEAttribute->TabIndex = 3;
			this->cbxEAttribute->Text = L"Choose Attribute to update";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Attribute to update:";
			// 
			// empcbx
			// 
			this->empcbx->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->empcbx->FormattingEnabled = true;
			this->empcbx->Location = System::Drawing::Point(174, 73);
			this->empcbx->Name = L"empcbx";
			this->empcbx->Size = System::Drawing::Size(366, 32);
			this->empcbx->TabIndex = 1;
			this->empcbx->Text = L"Choose Employee";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(98, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->txtMnval);
			this->tabPage2->Controls->Add(this->cbxMattribute);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->Mbrcbx);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(691, 495);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Update Member";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Update_UserControl::tabPage2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(201, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 49);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Update_UserControl::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(82, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 24);
			this->label6->TabIndex = 5;
			this->label6->Text = L"New value:";
			// 
			// txtMnval
			// 
			this->txtMnval->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMnval->Location = System::Drawing::Point(201, 167);
			this->txtMnval->Name = L"txtMnval";
			this->txtMnval->Size = System::Drawing::Size(299, 30);
			this->txtMnval->TabIndex = 4;
			// 
			// cbxMattribute
			// 
			this->cbxMattribute->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxMattribute->FormattingEnabled = true;
			this->cbxMattribute->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"full_name", L"age ", L"address ", L"email ",
					L"subscription", L"phone_number", L"duration"
			});
			this->cbxMattribute->Location = System::Drawing::Point(201, 111);
			this->cbxMattribute->Name = L"cbxMattribute";
			this->cbxMattribute->Size = System::Drawing::Size(299, 32);
			this->cbxMattribute->TabIndex = 3;
			this->cbxMattribute->Text = L"Choose Attribute to update";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 24);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Attribute to update:";
			// 
			// Mbrcbx
			// 
			this->Mbrcbx->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mbrcbx->FormattingEnabled = true;
			this->Mbrcbx->Location = System::Drawing::Point(171, 58);
			this->Mbrcbx->Name = L"Mbrcbx";
			this->Mbrcbx->Size = System::Drawing::Size(329, 32);
			this->Mbrcbx->TabIndex = 1;
			this->Mbrcbx->Text = L"Choose Member";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(95, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Name:";
			// 
			// Update_UserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->tabControl1);
			this->Name = L"Update_UserControl";
			this->Size = System::Drawing::Size(706, 536);
			this->Load += gcnew System::EventHandler(this, &Update_UserControl::Update_UserControl_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Update_UserControl_Load(System::Object^ sender, System::EventArgs^ e)
	{
		DataBaseFunctions^ db = gcnew DataBaseFunctions();

		db->FetchNodeData(this->employee_list);
		db->FetchMemberNodeData(member_list);
		employee_list->fetchEmployeeNames(empcbx);
		member_list->fetchMemberNames(Mbrcbx);
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ name = (empcbx->SelectedItem->ToString());
		String^ attribute = (cbxEAttribute->SelectedItem->ToString());
		string newValue = ConvertToString(txtEnval->Text);

		DataBaseFunctions^ db = gcnew DataBaseFunctions();
		employee_list->updateEmployee(ConvertToString(name), ConvertToString(attribute), newValue);
		string q = "update employees set " + ConvertToString(attribute) + "=" + "'" + newValue + "'" + " where full_name=" + "'" + ConvertToString(name) + "'";
		String^ query = gcnew String(q.c_str());
		db->update(query);
		MessageBox::Show("Employee Record updated Succesfully.");
	}
	public:
		string ConvertToString(String^ str) {
			return msclr::interop::marshal_as<std::string>(str);
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ name = (Mbrcbx->SelectedItem->ToString());
		String^ attribute = (cbxMattribute->SelectedItem->ToString());
		string newValue = ConvertToString(txtMnval->Text);

		DataBaseFunctions^ db = gcnew DataBaseFunctions();
		member_list->updateMember(ConvertToString(name), ConvertToString(attribute), newValue);
		string q = "update members set " + ConvertToString(attribute) + "=" + "'" + newValue + "'" + " where full_name=" + "'" + ConvertToString(name) + "'";
		String^ query = gcnew String(q.c_str());
		db->update(query);
		MessageBox::Show("Member Record updated Succesfully.");
	}
	};
}
