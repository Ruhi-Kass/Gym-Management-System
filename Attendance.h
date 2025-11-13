#pragma once
#include <msclr/marshal_cppstd.h>
#include"Functions.h"
#include"DataBaseFunctions.h"
#include"GUI_Functions.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Gymmanagment {

	/// <summary>
	/// Summary for Attendance
	/// </summary>
	public ref class Attendance : public System::Windows::Forms::UserControl
	{
	public:
		GUI_Functions^ gui = gcnew GUI_Functions();
		DataBaseFunctions^ db = gcnew DataBaseFunctions();
		EmployeeList* employee_list = new EmployeeList();
		String^ name ;

	private: System::Windows::Forms::ImageList^ imageList1;

	private: System::Windows::Forms::DataGridView^ dgvMAttendance;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ MbrLayout;
	private: System::Windows::Forms::ComboBox^ cbxmbr;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ rbtnEmployee;
	private: System::Windows::Forms::RadioButton^ rbtnMember;
















	public:

	public:
		MemberList* member_list = new MemberList();
	public:
		Attendance(void)
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
		~Attendance()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::ComponentModel::IContainer^ components;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Attendance::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->dgvMAttendance = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MbrLayout = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->cbxmbr = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->rbtnEmployee = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMember = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMAttendance))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// dgvMAttendance
			// 
			this->dgvMAttendance->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dgvMAttendance->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dgvMAttendance->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMAttendance->Location = System::Drawing::Point(89, 372);
			this->dgvMAttendance->Name = L"dgvMAttendance";
			this->dgvMAttendance->RowHeadersWidth = 45;
			this->dgvMAttendance->Size = System::Drawing::Size(552, 152);
			this->dgvMAttendance->TabIndex = 20;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(29, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(132, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// MbrLayout
			// 
			this->MbrLayout->AutoScroll = true;
			this->MbrLayout->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->MbrLayout->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MbrLayout->Location = System::Drawing::Point(22, 127);
			this->MbrLayout->Name = L"MbrLayout";
			this->MbrLayout->Size = System::Drawing::Size(683, 239);
			this->MbrLayout->TabIndex = 18;
			// 
			// cbxmbr
			// 
			this->cbxmbr->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->cbxmbr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbxmbr->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.26415F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxmbr->FormattingEnabled = true;
			this->cbxmbr->Location = System::Drawing::Point(167, 80);
			this->cbxmbr->Name = L"cbxmbr";
			this->cbxmbr->Size = System::Drawing::Size(444, 32);
			this->cbxmbr->TabIndex = 19;
			this->cbxmbr->Text = L"                   Pick Person to check in";
			this->cbxmbr->SelectedIndexChanged += gcnew System::EventHandler(this, &Attendance::cbxmbr_SelectedIndexChanged_2);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Info;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->rbtnEmployee);
			this->panel1->Controls->Add(this->rbtnMember);
			this->panel1->Location = System::Drawing::Point(185, 7);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(330, 38);
			this->panel1->TabIndex = 23;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Attendance::panel1_Paint);
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
			this->rbtnEmployee->CheckedChanged += gcnew System::EventHandler(this, &Attendance::rbtnEmployee_CheckedChanged);
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
			this->rbtnMember->CheckedChanged += gcnew System::EventHandler(this, &Attendance::rbtnMember_CheckedChanged);
			// 
			// Attendance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dgvMAttendance);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->MbrLayout);
			this->Controls->Add(this->cbxmbr);
			this->Name = L"Attendance";
			this->Size = System::Drawing::Size(727, 536);
			this->Load += gcnew System::EventHandler(this, &Attendance::Attendance_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMAttendance))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Attendance_Load(System::Object^ sender, System::EventArgs^ e)
	{
		db->FetchMemberNodeData(member_list);
		db->FetchNodeData(employee_list);	
	}
	private: System::Void dgvMember_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{

	}
		 
	public:
		string ConvertToString(String^ str) {
			return msclr::interop::marshal_as<std::string>(str);
		}
	private: System::Void errorMsg_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void cbxmbr_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
	private: System::Void cbxmbr_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
		

}
private: System::Void cbxmbr_SelectedIndexChanged_2(System::Object^ sender, System::EventArgs^ e) 
{
	MbrLayout->Controls->Clear();
	String^ name = cbxmbr->SelectedItem->ToString();
	string nm = ConvertToString(name);
	if (rbtnMember->Checked) 
	{
		gui->showMember(member_list->searchMember(nm)->data, MbrLayout);
		dgvMAttendance->Controls->Clear();
		db->TickMemberAttendance(name);
		db->ShowMemberAttendance(dgvMAttendance);
		
	}
	else if (rbtnEmployee->Checked) 
	{
		gui->showEmployee(employee_list->searchEmployee(nm)->data, MbrLayout);
		dgvMAttendance->Controls->Clear();
		db->TickEmployeeAttendance(name);
		db->ShowEmployeeAttendance(dgvMAttendance);
		
	}
	dgvMAttendance->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
	
	MessageBox::Show("Check In successfull");
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
{
	
}
private: System::Void rbtnEmployee_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{	
	cbxmbr->Items->Clear();
	employee_list->fetchEmployeeNames(cbxmbr);
	dgvMAttendance->Controls->Clear();
	db->ShowEmployeeAttendance(dgvMAttendance);
}
private: System::Void rbtnMember_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	cbxmbr->Items->Clear();
	member_list->fetchMemberNames(cbxmbr);
	
}
};
}
