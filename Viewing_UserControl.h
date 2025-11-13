#pragma once
#include <msclr/marshal_cppstd.h>
#include"Entities.h"
#include"DataBaseFunctions.h"
#include"GUI_Functions.h"
#include"Functions.h"

namespace Gymmanagment {
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



	/// <summary>
	/// Summary for Viewing_UserControl
	/// </summary>
	public ref class Viewing_UserControl : public System::Windows::Forms::UserControl
	{
		EmployeeList* employee_list = new EmployeeList();
	private: System::Windows::Forms::Button^ btmMbr;
	private: System::Windows::Forms::Button^ btnEmp;
	private: System::Windows::Forms::ComboBox^ cbxEmp;



	private: System::Windows::Forms::ComboBox^ cbxMbr;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblPremium;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblBasic;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblTtl;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pckgs;



		   MemberList* member_list = new MemberList();
	public:
		Viewing_UserControl(void)
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
		~Viewing_UserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Panel^ viewPanel;
	private: System::Windows::Forms::FlowLayoutPanel^ viewLayout;
	private: System::Windows::Forms::Button^ button1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->viewPanel = (gcnew System::Windows::Forms::Panel());
			this->viewLayout = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btmMbr = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnEmp = (gcnew System::Windows::Forms::Button());
			this->cbxEmp = (gcnew System::Windows::Forms::ComboBox());
			this->cbxMbr = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pckgs = (gcnew System::Windows::Forms::Panel());
			this->lblPremium = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblBasic = (gcnew System::Windows::Forms::Label());
			this->lblTtl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->viewPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pckgs->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(222, 455);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(314, 35);
			this->button2->TabIndex = 36;
			this->button2->Text = L"View Employees";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Viewing_UserControl::button2_Click);
			// 
			// viewPanel
			// 
			this->viewPanel->AccessibleName = L"viewPanel";
			this->viewPanel->AutoScroll = true;
			this->viewPanel->AutoSize = true;
			this->viewPanel->BackColor = System::Drawing::Color::LightSlateGray;
			this->viewPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->viewPanel->Controls->Add(this->viewLayout);
			this->viewPanel->Location = System::Drawing::Point(17, 58);
			this->viewPanel->Name = L"viewPanel";
			this->viewPanel->Size = System::Drawing::Size(697, 393);
			this->viewPanel->TabIndex = 35;
			// 
			// viewLayout
			// 
			this->viewLayout->AutoScroll = true;
			this->viewLayout->BackColor = System::Drawing::Color::Transparent;
			this->viewLayout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->viewLayout->Dock = System::Windows::Forms::DockStyle::Fill;
			this->viewLayout->Location = System::Drawing::Point(0, 0);
			this->viewLayout->Name = L"viewLayout";
			this->viewLayout->Size = System::Drawing::Size(693, 389);
			this->viewLayout->TabIndex = 0;
			// 
			// btmMbr
			// 
			this->btmMbr->BackColor = System::Drawing::Color::Gainsboro;
			this->btmMbr->Font = (gcnew System::Drawing::Font(L"MV Boli", 12.22642F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btmMbr->Location = System::Drawing::Point(607, 12);
			this->btmMbr->Name = L"btmMbr";
			this->btmMbr->Size = System::Drawing::Size(75, 31);
			this->btmMbr->TabIndex = 38;
			this->btmMbr->Text = L"Sort";
			this->btmMbr->UseVisualStyleBackColor = false;
			this->btmMbr->Visible = false;
			this->btmMbr->Click += gcnew System::EventHandler(this, &Viewing_UserControl::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(222, 503);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(314, 35);
			this->button1->TabIndex = 37;
			this->button1->Text = L"View Members";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Viewing_UserControl::button1_Click);
			// 
			// btnEmp
			// 
			this->btnEmp->BackColor = System::Drawing::Color::Gainsboro;
			this->btnEmp->Font = (gcnew System::Drawing::Font(L"MV Boli", 12.22642F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmp->Location = System::Drawing::Point(607, 11);
			this->btnEmp->Name = L"btnEmp";
			this->btnEmp->Size = System::Drawing::Size(75, 31);
			this->btnEmp->TabIndex = 39;
			this->btnEmp->Text = L"Sort";
			this->btnEmp->UseVisualStyleBackColor = false;
			this->btnEmp->Visible = false;
			this->btnEmp->Click += gcnew System::EventHandler(this, &Viewing_UserControl::btnEmp_Click);
			// 
			// cbxEmp
			// 
			this->cbxEmp->BackColor = System::Drawing::SystemColors::Menu;
			this->cbxEmp->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxEmp->FormattingEnabled = true;
			this->cbxEmp->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"full_name", L"age", L"monthly_salary", L"position" });
			this->cbxEmp->Location = System::Drawing::Point(480, 13);
			this->cbxEmp->Name = L"cbxEmp";
			this->cbxEmp->Size = System::Drawing::Size(121, 29);
			this->cbxEmp->TabIndex = 40;
			this->cbxEmp->Text = L"sort by";
			this->cbxEmp->Visible = false;
			// 
			// cbxMbr
			// 
			this->cbxMbr->BackColor = System::Drawing::SystemColors::MenuBar;
			this->cbxMbr->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxMbr->FormattingEnabled = true;
			this->cbxMbr->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"full_name", L"age", L"subscription", L"duration" });
			this->cbxMbr->Location = System::Drawing::Point(480, 14);
			this->cbxMbr->Name = L"cbxMbr";
			this->cbxMbr->Size = System::Drawing::Size(121, 29);
			this->cbxMbr->TabIndex = 41;
			this->cbxMbr->Text = L"sort by";
			this->cbxMbr->Visible = false;
			this->cbxMbr->SelectedIndexChanged += gcnew System::EventHandler(this, &Viewing_UserControl::comboBox2_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Beige;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->pckgs);
			this->panel1->Controls->Add(this->lblTtl);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(17, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(457, 35);
			this->panel1->TabIndex = 42;
			// 
			// pckgs
			// 
			this->pckgs->Controls->Add(this->lblPremium);
			this->pckgs->Controls->Add(this->label3);
			this->pckgs->Controls->Add(this->label5);
			this->pckgs->Controls->Add(this->lblBasic);
			this->pckgs->Location = System::Drawing::Point(183, 3);
			this->pckgs->Name = L"pckgs";
			this->pckgs->Size = System::Drawing::Size(267, 22);
			this->pckgs->TabIndex = 43;
			this->pckgs->Visible = false;
			// 
			// lblPremium
			// 
			this->lblPremium->AutoSize = true;
			this->lblPremium->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPremium->Location = System::Drawing::Point(246, 0);
			this->lblPremium->Name = L"lblPremium";
			this->lblPremium->Size = System::Drawing::Size(19, 21);
			this->lblPremium->TabIndex = 51;
			this->lblPremium->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 21);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Normal:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(149, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 21);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Premium:";
			// 
			// lblBasic
			// 
			this->lblBasic->AutoSize = true;
			this->lblBasic->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBasic->Location = System::Drawing::Point(98, 1);
			this->lblBasic->Name = L"lblBasic";
			this->lblBasic->Size = System::Drawing::Size(19, 21);
			this->lblBasic->TabIndex = 49;
			this->lblBasic->Text = L"0";
			// 
			// lblTtl
			// 
			this->lblTtl->AutoSize = true;
			this->lblTtl->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTtl->Location = System::Drawing::Point(83, 4);
			this->lblTtl->Name = L"lblTtl";
			this->lblTtl->Size = System::Drawing::Size(19, 21);
			this->lblTtl->TabIndex = 47;
			this->lblTtl->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12.22641F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 21);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Total  : ";
			// 
			// Viewing_UserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btmMbr);
			this->Controls->Add(this->cbxMbr);
			this->Controls->Add(this->cbxEmp);
			this->Controls->Add(this->btnEmp);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->viewPanel);
			this->Name = L"Viewing_UserControl";
			this->Size = System::Drawing::Size(727, 536);
			this->Load += gcnew System::EventHandler(this, &Viewing_UserControl::Viewing_UserControl_Load);
			this->viewPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pckgs->ResumeLayout(false);
			this->pckgs->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Viewing_UserControl_Load(System::Object^ sender, System::EventArgs^ e)
	{
		employee_list->EmptyEmployeeList();
		DataBaseFunctions^ db = gcnew DataBaseFunctions();
		db->FetchNodeData(employee_list);//fecthes the data in the db and stores in the list.
		db->FetchMemberNodeData(member_list);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pckgs->Visible = false;
		lblTtl->Text = employee_list->countEmployeeNodes().ToString()+" employees";
		cbxMbr->Visible = false;
		btmMbr->Visible = false;
		cbxEmp->Visible = true;
		btnEmp->Visible = true;
		viewLayout->Controls->Clear();
		
		employee_list->ViewEmployeeList(viewLayout);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pckgs->Visible = true;
		lblTtl->Text = member_list->countMemberNodes().ToString() + " members";
		lblBasic->Text = member_list->countBasicPackage().ToString();
		lblPremium->Text = member_list->countPremiumPackage().ToString();
		cbxEmp->Visible = false;
		btnEmp->Visible = false;
		cbxMbr->Visible = true;
		btmMbr->Visible = true;
		viewLayout->Controls->Clear();
		member_list->ViewMemberList(viewLayout);

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		if (cbxMbr->SelectedItem == "subscription") {
			viewLayout->Controls->Clear();
			member_list->sortBySubscription();
		}
		else if (cbxMbr->SelectedItem == "full_name") {
			viewLayout->Controls->Clear();
			member_list->sortByName();
		}
		else if (cbxMbr->SelectedItem == "age") {
			viewLayout->Controls->Clear();
			member_list->sortByAge();
		}else if (cbxMbr->SelectedItem == "duration") {
			viewLayout->Controls->Clear();
			member_list->sortByDuration();
		}
		  member_list->ViewMemberList(viewLayout);


	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEmp_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (cbxEmp->SelectedItem == "position") {
		viewLayout->Controls->Clear();
		employee_list->sortByPosition();
	}
	else if (cbxEmp->SelectedItem == "full_name") {
		viewLayout->Controls->Clear();
		employee_list->sortByName();
	}
	else if (cbxEmp->SelectedItem == "age") {
		viewLayout->Controls->Clear();
		employee_list->sortByAge();
	}
	else if (cbxEmp->SelectedItem == "monthly_salary") {
		viewLayout->Controls->Clear();
		employee_list->sortBySalary();
	}
	employee_list->ViewEmployeeList(viewLayout);
}
};
}
