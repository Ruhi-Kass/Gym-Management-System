#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include"Functions.h"
#include"EmployeeCard.h"
#include"MemberCard.h"

using namespace std;
using namespace System::Windows::Forms;
using namespace System;
using namespace System::IO;
using namespace System::Drawing;
using namespace Gymmanagment;
public ref class GUI_Functions
{
public:
	void SetImage(PictureBox^ pictureBox)//Function for setting images in a Picture Box.
	{
		//class for prompting the user to open file from a directory.
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.gif;*.bmp";

		if (openFileDialog->ShowDialog() == DialogResult::OK)
		{
			// User selected image file
			String^ imagePath = (openFileDialog->FileName);

			// Load the image into a Bitmap object
			Bitmap^ image = gcnew Bitmap(imagePath);


			pictureBox->Image = image;

			pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;

		}
	}
public:
	string ConvertToString(String^ str) {
		return msclr::interop::marshal_as<std::string>(str);
	}
public:
	void showMember(Member m, FlowLayoutPanel^ panel)
	{
		
		MemberCard^ card=gcnew MemberCard();
		card->Size = System::Drawing::Size(647, 223);
		card->AutoSize = false;
		string name = m.full_name;
		int age = m.age;
		int duration = m.duration;
		string regdate = m.registration_date;
		string subscription = m.subscription;
		string address = m.address;
		string email = m.email;
		string phoneno = m.phone_number;

		MemberList list;
		card->setName(name);
		card->setImage(list.RetriveImage(gcnew String(name.c_str())));
		card->setAge(age);
		card->setDuration(duration);
		card->setRegistrationdate(regdate);
		card->setPhoneno(phoneno);
		card->setSubscription(subscription);
		card->setAddress(address);
		card->setEmail(email);

		panel->Controls->Add(card);

	}public:
	void showMember(Member m, Panel^ panel)
	{
		
		MemberCard^ card=gcnew MemberCard();
		card->Size = System::Drawing::Size(647, 223);
		card->AutoSize = false;
		string name = m.full_name;
		int age = m.age;
		int duration = m.duration;
		string regdate = m.registration_date;
		string subscription = m.subscription;
		string address = m.address;
		string email = m.email;
		string phoneno = m.phone_number;

		MemberList list;
		card->setName(name);
		card->setImage(list.RetriveImage(gcnew String(name.c_str())));
		card->setAge(age);
		card->setDuration(duration);
		card->setRegistrationdate(regdate);
		card->setPhoneno(phoneno);
		card->setSubscription(subscription);
		card->setAddress(address);
		card->setEmail(email);

		panel->Controls->Add(card);

	}
	void showEmployee(Employee m, FlowLayoutPanel^ panel)
	{

		EmployeeCard^ card=gcnew EmployeeCard();
		string name = m.full_name;
		int age = m.age;
		int salary = m.monthly_salary;
		string hiredate =m.hire_date;
		string phoneno = m.phone_number;
		string position = m.position;
		string address =m.address;
		string email = m.email;

		EmployeeList list;
		card->setName(name);
		card->setImage(list.RetriveImage(gcnew String(name.c_str())));
		card->setAge(age);
		card->setSalary(salary);
		card->setHiredate(hiredate);
		card->setPhoneno(phoneno);
		card->setPosition(position);
		card->setAddress(address);
		card->setEmail(email);

		panel->Controls->Add(card);

	}




};

