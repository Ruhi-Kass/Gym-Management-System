#pragma once
#include <msclr/marshal_cppstd.h>

#include"Entities.h"
#include"DataBaseFunctions.h"
#include"GUI_Functions.h"
#include"Functions.h"



using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Gymmanagment {

	/// <summary>
	/// Summary for Delete_UserControl
	/// </summary>
	public ref class Delete_UserControl : public System::Windows::Forms::UserControl
	{
		EmployeeList* employee_list = new EmployeeList();
		MemberList* member_list = new MemberList();
	public:
		Delete_UserControl(void)
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
		~Delete_UserControl()
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
	private: System::Windows::Forms::ComboBox^ empnames;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ mbrcbx;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;

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
			this->empnames = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->mbrcbx = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(706, 536);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->empnames);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 33);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(698, 499);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Delete Employee";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(248, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 46);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Delete Employee";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Delete_UserControl::button2_Click);
			// 
			// empnames
			// 
			this->empnames->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->empnames->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->empnames->FormattingEnabled = true;
			this->empnames->Location = System::Drawing::Point(200, 135);
			this->empnames->Name = L"empnames";
			this->empnames->Size = System::Drawing::Size(307, 32);
			this->empnames->TabIndex = 1;
			this->empnames->Text = L"Choose Employee ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(125, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->mbrcbx);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 33);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(698, 499);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Delete Member";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(253, 189);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 46);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Delete Member";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Delete_UserControl::button1_Click);
			// 
			// mbrcbx
			// 
			this->mbrcbx->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mbrcbx->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mbrcbx->FormattingEnabled = true;
			this->mbrcbx->Location = System::Drawing::Point(191, 127);
			this->mbrcbx->Name = L"mbrcbx";
			this->mbrcbx->Size = System::Drawing::Size(307, 32);
			this->mbrcbx->TabIndex = 2;
			this->mbrcbx->Text = L"Choose Member";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(111, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name:";
			// 
			// Delete_UserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->tabControl1);
			this->Name = L"Delete_UserControl";
			this->Size = System::Drawing::Size(706, 536);
			this->Load += gcnew System::EventHandler(this, &Delete_UserControl::Delete_UserControl_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Delete_UserControl_Load(System::Object^ sender, System::EventArgs^ e)
	{

		DataBaseFunctions^ db = gcnew DataBaseFunctions();
		db->FetchNodeData(this->employee_list);
		db->FetchMemberNodeData(member_list);
		employee_list->fetchEmployeeNames(empnames);
		member_list->fetchMemberNames(mbrcbx);

	}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//// Display a message box for deletion confirmation
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this Employee?", "Confirmation", MessageBoxButtons::OKCancel);

		if (result == System::Windows::Forms::DialogResult::OK)
		{
			employee_list->deleteEmployee(empnames->SelectedItem->ToString());
			DataBaseFunctions^ db = gcnew DataBaseFunctions();
			db->DeleteEmployee((empnames->SelectedItem)->ToString());
			MessageBox::Show("Employee Deleted Succefully");
		}
		else
		{
			return;
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this Member?", "Confirmation", MessageBoxButtons::OKCancel);

		if (result == System::Windows::Forms::DialogResult::OK)
		{
			member_list->deleteMember(mbrcbx->SelectedItem->ToString());
			DataBaseFunctions^ db = gcnew DataBaseFunctions();
			db->DeleteMember((mbrcbx->SelectedItem)->ToString());
			MessageBox::Show("Member Deleted Succefully");
		}
		else
		{
			return;
		}
	}



	/*public:
		string ConvertToString(String^ str) {
			return msclr::interop::marshal_as<std::string>(str);
		}*/
	};
}