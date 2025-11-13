#pragma once
#include <msclr/marshal_cppstd.h>
#include<string>
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
using namespace std;


namespace Gymmanagment {

	/// <summary>
	/// Summary for Search_UserControl
	/// </summary>
	public ref class Search_UserControl : public System::Windows::Forms::UserControl
	{
		EmployeeList* employee_list = new EmployeeList();
		MemberList* member_list = new MemberList();


	private: System::Windows::Forms::FlowLayoutPanel^ viewLayout;
	private: System::Windows::Forms::Panel^ errorMsg;
	private: System::Windows::Forms::Label^ errorMessage;
	private: System::Windows::Forms::Panel^ panel1;



	private: System::Windows::Forms::TextBox^ txtSearch;

	public:
		Search_UserControl(void)
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
		~Search_UserControl()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ImageList^ imageList1;

	private: System::Windows::Forms::RadioButton^ rbtnMember;
	private: System::Windows::Forms::RadioButton^ rbtnEmployee;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Search_UserControl::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->rbtnMember = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnEmployee = (gcnew System::Windows::Forms::RadioButton());
			this->viewLayout = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->errorMsg = (gcnew System::Windows::Forms::Panel());
			this->errorMessage = (gcnew System::Windows::Forms::Label());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->viewLayout->SuspendLayout();
			this->errorMsg->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(131, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 24);
			this->label1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.69811F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(102, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(483, 31);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Select What you would like to search";
			this->label2->Click += gcnew System::EventHandler(this, &Search_UserControl::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(105, 156);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(53, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"istockphoto-1471573150-612x612.jpg");
			// 
			// rbtnMember
			// 
			this->rbtnMember->AutoSize = true;
			this->rbtnMember->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnMember->Location = System::Drawing::Point(208, 3);
			this->rbtnMember->Name = L"rbtnMember";
			this->rbtnMember->Size = System::Drawing::Size(102, 28);
			this->rbtnMember->TabIndex = 1;
			this->rbtnMember->TabStop = true;
			this->rbtnMember->Text = L"Member";
			this->rbtnMember->UseVisualStyleBackColor = true;
			// 
			// rbtnEmployee
			// 
			this->rbtnEmployee->AutoSize = true;
			this->rbtnEmployee->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbtnEmployee->Location = System::Drawing::Point(24, 3);
			this->rbtnEmployee->Name = L"rbtnEmployee";
			this->rbtnEmployee->Size = System::Drawing::Size(118, 28);
			this->rbtnEmployee->TabIndex = 0;
			this->rbtnEmployee->TabStop = true;
			this->rbtnEmployee->Text = L"Employee";
			this->rbtnEmployee->UseVisualStyleBackColor = true;
			// 
			// viewLayout
			// 
			this->viewLayout->AutoScroll = true;
			this->viewLayout->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->viewLayout->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->viewLayout->Controls->Add(this->errorMsg);
			this->viewLayout->Location = System::Drawing::Point(27, 199);
			this->viewLayout->Name = L"viewLayout";
			this->viewLayout->Size = System::Drawing::Size(657, 255);
			this->viewLayout->TabIndex = 8;
			// 
			// errorMsg
			// 
			this->errorMsg->BackColor = System::Drawing::Color::Transparent;
			this->errorMsg->Controls->Add(this->errorMessage);
			this->errorMsg->Location = System::Drawing::Point(3, 3);
			this->errorMsg->Name = L"errorMsg";
			this->errorMsg->Size = System::Drawing::Size(652, 205);
			this->errorMsg->TabIndex = 0;
			// 
			// errorMessage
			// 
			this->errorMessage->AutoSize = true;
			this->errorMessage->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.30189F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->errorMessage->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->errorMessage->Location = System::Drawing::Point(206, 89);
			this->errorMessage->Name = L"errorMessage";
			this->errorMessage->Size = System::Drawing::Size(249, 26);
			this->errorMessage->TabIndex = 1;
			this->errorMessage->Text = L"No Results Found......";
			// 
			// txtSearch
			// 
			this->txtSearch->BackColor = System::Drawing::SystemColors::ControlLight;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.30189F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->txtSearch->Location = System::Drawing::Point(164, 157);
			this->txtSearch->Multiline = true;
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(388, 36);
			this->txtSearch->TabIndex = 9;
			this->txtSearch->Text = L"Search by name....";
			this->txtSearch->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Search_UserControl::txtSearch_MouseClick);
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &Search_UserControl::txtSearch_TextChanged);
			this->txtSearch->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Search_UserControl::txtSearch_MouseDown);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Info;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->rbtnEmployee);
			this->panel1->Controls->Add(this->rbtnMember);
			this->panel1->Location = System::Drawing::Point(175, 99);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(330, 38);
			this->panel1->TabIndex = 10;
			// 
			// Search_UserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->viewLayout);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Search_UserControl";
			this->Size = System::Drawing::Size(702, 532);
			this->Load += gcnew System::EventHandler(this, &Search_UserControl::Search_UserControl_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->viewLayout->ResumeLayout(false);
			this->errorMsg->ResumeLayout(false);
			this->errorMsg->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Search_UserControl_Load(System::Object^ sender, System::EventArgs^ e)
	{
		DataBaseFunctions^ db = gcnew DataBaseFunctions();
		db->FetchNodeData(this->employee_list);
		db->FetchMemberNodeData(this->member_list);
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{


	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}


		bool isfirstselection = true;
	private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

		if (isfirstselection) {
			txtSearch->SelectAll();
			isfirstselection = false;
		}
		
		viewLayout->Controls->Clear();
		errorMessage->Visible = true;
		GUI_Functions gui;
		string searchName = employee_list->ConvertToString(txtSearch->Text);
		

		if (rbtnEmployee->Checked)
		{
			errorMessage->Visible = true;

			if (employee_list->searchEmployee(searchName) != nullptr)
			{
				errorMessage->Visible = false;
				gui.showEmployee(employee_list->searchEmployee(searchName)->data, viewLayout);

			}
		}
		else if (rbtnMember->Checked)
		{
			errorMessage->Visible = true;
			if (member_list->searchMember(searchName) != nullptr)
			{
				errorMessage->Visible = false;
				gui.showMember(member_list->searchMember(searchName)->data, viewLayout);
			}
			
		}
		
	}
	private: System::Void txtSearch_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	}
private: System::Void txtSearch_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//txtSearch->Text = " ";
}
};

}

