#pragma once
#include"Add_UserControl.h"
#include"Delete_UserControl.h"
#include"Update_UserControl.h"
#include"Search_UserControl.h"
#include"Viewing_UserControl.h"
#include"Attendance.h"

namespace Gymmanagment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomePage
	/// </summary>
	public ref class HomePage : public System::Windows::Forms::Form
	{
	public:
		HomePage(void)
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
		~HomePage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnView;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnView = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(-5, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(303, 637);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12.22642F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->ImageIndex = 5;
			this->button1->ImageList = this->imageList1;
			this->button1->Location = System::Drawing::Point(45, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 51);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Attendance";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &HomePage::button1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"images (4).jpg");
			this->imageList1->Images->SetKeyName(1, L"images (1).png");
			this->imageList1->Images->SetKeyName(2, L"download (1).jpg");
			this->imageList1->Images->SetKeyName(3, L"istockphoto-1471573150-612x612.jpg");
			this->imageList1->Images->SetKeyName(4, L"6932409.png");
			this->imageList1->Images->SetKeyName(5, L"southeast-physical-therapy-management-computer-icons-business-diary-appointment-t"
				L"humbnail.jpg");
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::Transparent;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12.22642F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdd->ImageIndex = 0;
			this->btnAdd->ImageList = this->imageList1;
			this->btnAdd->Location = System::Drawing::Point(321, 12);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(116, 51);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &HomePage::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::Transparent;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12.22642F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnUpdate->ImageKey = L"images (1).png";
			this->btnUpdate->ImageList = this->imageList1;
			this->btnUpdate->Location = System::Drawing::Point(443, 12);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(138, 51);
			this->btnUpdate->TabIndex = 2;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &HomePage::btnUpdate_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::Transparent;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12.22642F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSearch->ImageKey = L"istockphoto-1471573150-612x612.jpg";
			this->btnSearch->ImageList = this->imageList1;
			this->btnSearch->Location = System::Drawing::Point(731, 12);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(138, 51);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &HomePage::btnSearch_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::Transparent;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12.22642F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDelete->ImageKey = L"download (1).jpg";
			this->btnDelete->ImageList = this->imageList1;
			this->btnDelete->Location = System::Drawing::Point(587, 12);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(138, 51);
			this->btnDelete->TabIndex = 3;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &HomePage::btnDelete_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Location = System::Drawing::Point(321, 69);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(727, 536);
			this->panel2->TabIndex = 5;
			// 
			// btnView
			// 
			this->btnView->BackColor = System::Drawing::Color::Transparent;
			this->btnView->Font = (gcnew System::Drawing::Font(L"Poor Richard", 12.22642F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnView->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnView->ImageKey = L"6932409.png";
			this->btnView->ImageList = this->imageList1;
			this->btnView->Location = System::Drawing::Point(875, 12);
			this->btnView->Name = L"btnView";
			this->btnView->Size = System::Drawing::Size(138, 51);
			this->btnView->TabIndex = 6;
			this->btnView->Text = L"View";
			this->btnView->UseVisualStyleBackColor = false;
			this->btnView->Click += gcnew System::EventHandler(this, &HomePage::btnView_Click);
			// 
			// HomePage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1060, 617);
			this->Controls->Add(this->btnView);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->panel1);
			this->Name = L"HomePage";
			this->Text = L"Gym App";
			this->Load += gcnew System::EventHandler(this, &HomePage::HomePage_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->panel2->Controls->Clear();
		Add_UserControl^ addingPage = gcnew Add_UserControl();
		this->panel2->Controls->Add(addingPage);
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->panel2->Controls->Clear();
		Delete_UserControl^ DeletingPage = gcnew Delete_UserControl();
		this->panel2->Controls->Add(DeletingPage);
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Update_UserControl^ UpdatingPage = gcnew Update_UserControl();
		this->panel2->Controls->Clear();
		this->panel2->Controls->Add(UpdatingPage);
	}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Search_UserControl^ SearchingPage = gcnew Search_UserControl();
		this->panel2->Controls->Clear();
		this->panel2->Controls->Add(SearchingPage);
	}
	private: System::Void HomePage_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void btnView_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Viewing_UserControl^ viewingPage = gcnew Viewing_UserControl();
		this->panel2->Controls->Clear();
		this->panel2->Controls->Add(viewingPage);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Attendance^ attendance = gcnew Attendance();
		this->panel2->Controls->Clear();
		this->panel2->Controls->Add(attendance);
	}
};
}
