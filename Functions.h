#pragma once
#include <msclr/marshal_cppstd.h>
#include<string>
#include "Entities.h"
#include "EmployeeCard.h"
#include "MemberCard.h"


using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;



namespace Gymmanagment {

	public class EmployeeList
	{
	private:
		EmployeeNode* head, * tail;

	public:
		EmployeeList()
		{
			head = nullptr;
			tail = nullptr;
		}
		void AddEmployeeToList(Employee x)//Adds employee to the list.
		{
			EmployeeNode* employee = new EmployeeNode(x);

			if (head == nullptr)//if list is empty it'll make it the first node.
			{
				employee->next = employee->prev = nullptr;
				head = tail = employee;
			}
			else//if list is already populated add employee to the beggining of the list(because order doesnt matter,we can sort them later in the app).
			{
				employee->next = head;
				head->prev = employee;
				employee->prev = nullptr;
				head = employee;
			}
		}
	public:
		void ViewEmployeeList(FlowLayoutPanel^ panel)//function that shows relevant employee info ona gui card control.
		{
			EmployeeNode* current = head;

			while (current != nullptr)
			{
				// assign the current employee information to the gui elements.

				EmployeeCard^ ecard = gcnew EmployeeCard();//GUI cardcontrol for displaying employee information.
				string name = current->data.full_name;
				int age = current->data.age;
				int salary = current->data.monthly_salary;
				string hiredate = current->data.hire_date;
				string phoneno = current->data.phone_number;
				string position = current->data.position;
				string address = current->data.address;
				string email = current->data.email;


				ecard->setName(name);
				ecard->setImage(RetriveImage(gcnew String(name.c_str())));
				ecard->setAge(age);
				ecard->setSalary(salary);
				ecard->setHiredate(hiredate);
				ecard->setPhoneno(phoneno);
				ecard->setPosition(position);
				ecard->setAddress(address);
				ecard->setEmail(email);

				panel->Controls->Add(ecard);

				// Move to the next employee node
				current = current->next;
			}
		}
	public:
		void EmptyEmployeeList()//used when gui controls load for repopulating the list.
		{
			EmployeeNode* current = head;
			if (current != nullptr) {
				while (current != nullptr)
				{
					EmployeeNode* next = current->next;
					delete current;
					current = next;
				}
				head = nullptr;
				tail = nullptr;
			}
			else
				return;
		}
	public:
		void deleteEmployee(String^ name)//Deletes node from Employee based on employee_name
		{
			EmployeeNode* current = head;
			string Name = ConvertToString(name);

			while (current != NULL)  //Iterates through every node in the list
			{
				if (current->data.full_name == Name)//Checks if node data of name is equal to the name given in the parameter
				{
					if (current == head)//Checks if the position of the node is at the head of the list. If true...
					{
						head = current->next;   //it assigns the head to the next node, else...
						if (head != NULL)
							head->prev = NULL;
					}
					else
					{
						current->prev->next = current->next;    //it assigns the previous node of the node that is being deleted to the one that is next
						if (current->next != NULL)
							current->next->prev = current->prev;
					}

					delete current;// Remove the node from memory

					return;
				}

				current = current->next;//if conditions dont apply it continues to the next node
			}
		}
	public:
		void sortBySalary() {
			// Check if there are at least two nodes in the linked list
			if (head == nullptr || head->next == nullptr) {
				return;  // No need to sort if there are 0 or 1 nodes
			}

			bool swapped;
			do {
				swapped = false;
				EmployeeNode* current = head;
				EmployeeNode* previous = nullptr;
				while (current->next != nullptr) {
					if (current->data.monthly_salary > current->next->data.monthly_salary) {
						// Swap the nodes if they are out of order
						if (previous != nullptr) {
							previous->next = current->next;
						}
						else {
							head = current->next;
						}
						EmployeeNode* nextNode = current->next;
						current->next = nextNode->next;
						nextNode->next = current;
						previous = nextNode;
						swapped = true;
					}
					else {
						previous = current;
						current = current->next;
					}
				}
			} while (swapped);
		}
	public:
		void sortByPosition() {
			// Check if there are at least two nodes in the linked list
			if (head == nullptr || head->next == nullptr) {
				return;  // No need to sort if there are 0 or 1 nodes
			}

			bool swapped;
			do {
				swapped = false;
				EmployeeNode* current = head;
				EmployeeNode* previous = nullptr;
				while (current->next != nullptr) {
					if (current->data.position > current->next->data.position) {
						// Swap the nodes if they are out of order
						if (previous != nullptr) {
							previous->next = current->next;
						}
						else {
							head = current->next;
						}
						EmployeeNode* nextNode = current->next;
						current->next = nextNode->next;
						nextNode->next = current;
						previous = nextNode;
						swapped = true;
					}
					else {
						previous = current;
						current = current->next;
					}
				}
			} while (swapped);
		}

	public:
		void fetchEmployeeNames(ComboBox^ cbx)//function for fetching the employee names and puting them in a combobox. 
		{
			cbx->Items->Clear();
			EmployeeNode* current = head;
			if (head != nullptr)
				while (current != nullptr)
				{
					{
						cbx->Items->Add(gcnew String(current->data.full_name.c_str()));
						current = current->next;
					}
				}
		}
	public:
		// Search function for Employee nodes
		EmployeeNode* searchEmployee(string name) {
			EmployeeNode* current = head;
			while (current != nullptr) {
				if (current->data.full_name == name) {
					return current;
				}
				current = current->next;
			}
			return nullptr;
		}
	public:
		void sortByName() {
			// Check if there are at least two nodes in the linked list
			if (head == nullptr || head->next == nullptr) {
				return;  // No need to sort if there are 0 or 1 nodes
			}

			bool swapped;
			do {
				swapped = false;
				EmployeeNode* current = head;
				EmployeeNode* previous = nullptr;
				while (current->next != nullptr) {
					if (current->data.full_name > current->next->data.full_name) {
						// Swap the nodes if they are out of order
						if (previous != nullptr) {
							previous->next = current->next;
						}
						else {
							head = current->next;
						}
						EmployeeNode* nextNode = current->next;
						current->next = nextNode->next;
						nextNode->next = current;
						previous = nextNode;
						swapped = true;
					}
					else {
						previous = current;
						current = current->next;
					}
				}
			} while (swapped);
		}

	public:
		void sortByAge() {
			// Check if there are at least two nodes in the linked list
			if (head == nullptr || head->next == nullptr) {
				return;  // No need to sort if there are 0 or 1 nodes
			}

			bool swapped;
			do {
				swapped = false;
				EmployeeNode* current = head;
				EmployeeNode* previous = nullptr;
				while (current->next != nullptr) {
					if (current->data.age > current->next->data.age) {
						// Swap the nodes if they are out of order
						if (previous != nullptr) {
							previous->next = current->next;
						}
						else {
							head = current->next;
						}
						EmployeeNode* nextNode = current->next;
						current->next = nextNode->next;
						nextNode->next = current;
						previous = nextNode;
						swapped = true;
					}
					else {
						previous = current;
						current = current->next;
					}
				}
			} while (swapped);
		}

	public:
		void updateEmployee(string name, string attribute, string newValue)//this function updates an employee's selected data.
		{
			EmployeeNode* current = head;

			while (current != nullptr)
			{
				if (current->data.full_name == name)
				{
					update(current, attribute, newValue);//update the selected data value.
					break;
				}
				else return;
			}

		}
		void update(EmployeeNode* current, string attribute, string value)//function for updating choosen attributte of employee.
		{
			if (attribute == "full_name")
				current->data.full_name = value;
			else if (attribute == "age")
				current->data.age = stoi(value);//convert to integer.
			else if (attribute == "address")
				current->data.address = (value);
			else if (attribute == "email")
				current->data.email = (value);
			else if (attribute == "phone_number")
				current->data.phone_number = (value);
			else if (attribute == "monthly_salary")
				current->data.monthly_salary = stod(value);
		}
		public:
			int countEmployeeNodes()// Method to count the number of nodes in the Employee doubly linked list
			{
				int count = 0;
				EmployeeNode* current = head;

				while (current != NULL)//Iterates through every node until the node becomes empty (which is the end of the list)
				{
					count++;//count increases throughout eadch node
					current = current->next;//current points to the next node 
				}

				return count;
			}

	public:
		Image^ RetriveImage(String^ name)//function to  retrive employee image from the DataBase.
		{
			SqlConnection^ connection = gcnew SqlConnection("Data Source=tsede;Initial Catalog=Gym;Integrated Security=True;");

			connection->Open();
			SqlCommand^ cmd = gcnew SqlCommand("SELECT IMG FROM employees where full_name=@name", connection);
			cmd->Parameters->AddWithValue("@name", name);
			cli::array<Byte>^ imageData = (cli::array<Byte>^)cmd->ExecuteScalar();
			Image^ image;
			MemoryStream^ ms = gcnew MemoryStream(imageData);

			image = Image::FromStream(ms);

			return image;
		}

	public:
		string ConvertToString(String^ str) {
			return msclr::interop::marshal_as<std::string>(str);
		}
	};

	public  class MemberList
	{
	private:
		MemberNode* head, * tail;

	public:
		MemberList()
		{
			head = nullptr;
			tail = nullptr;
		}
		void AddMemberToList(Member x)//adds member to the list.
		{
			MemberNode* member = new MemberNode(x);

			if (head == nullptr)
			{
				member->next = member->prev = nullptr;
				head = tail = member;
			}
			else
			{
				member->next = head;
				head->prev = member;
				member->prev = nullptr;
				head = member;
			}
		}
	public:
		void deleteMember(String^ Name)//Deletes node from Member based name given
		{
			string name = ConvertToString(Name);
			MemberNode* current = head;

			while (current != NULL)//Iterates through every node in the list
			{
				if (current->data.full_name == name)//Checks if node data of name is equal to the id given in the parameter
				{
					if (current == head)//Checks if the position of the node is at the head of the list. If true...
					{
						head = current->next;//it assigns the head to the next node, else...
						if (head != NULL)
							head->prev = NULL;
					}
					else
					{
						current->prev->next = current->next;//it assigns the previous node of the node that is being deleted to the one that is next
						if (current->next != NULL)
							current->next->prev = current->prev;
					}

					delete current;// Remove the node from memory
					return;
				}

				current = current->next;//if conditions dont apply it continues to the next node
			}
		}
	public:
		void ViewMemberList(FlowLayoutPanel^ panel)//displays relevant member info using gui card control.
		{
			MemberNode* current = head;

			while (current != nullptr)
			{
				// assign the current employee information to the gui elements.

				MemberCard^ mcard = gcnew MemberCard();//GUI cardcontrol for displaying employee information.
				string name = current->data.full_name;
				int age = current->data.age;
				int duration = current->data.duration;
				string regdate = current->data.registration_date;
				string subscription = current->data.subscription;
				string address = current->data.address;
				string email = current->data.email;
				string phoneno = current->data.phone_number;


				mcard->setName(name);
				mcard->setImage(RetriveImage(gcnew String(name.c_str())));
				mcard->setAge(age);
				mcard->setDuration(duration);
				mcard->setRegistrationdate(regdate);
				mcard->setPhoneno(phoneno);
				mcard->setSubscription(subscription);
				mcard->setAddress(address);
				mcard->setEmail(email);

				panel->Controls->Add(mcard);

				// Move to the next employee node
				current = current->next;
			}
		}

	public:
		void fetchMemberNames(ComboBox^ cbx)//function for fetching the employye names and puting them in a combobox. 
		{
			cbx->Items->Clear();
			MemberNode* current = head;
			if (head != nullptr)
				while (current != nullptr)
				{
					{
						cbx->Items->Add(gcnew String(current->data.full_name.c_str()));
						current = current->next;
					}
				}
		}
	public:
		MemberNode* searchMember(string name) {
			MemberNode* current = head;
			while (current != nullptr) {
				if (current->data.full_name == name) {
					return current;
				}
				current = current->next;
			}
			return nullptr;
		}

	public:
		void updateMember(string name, string attribute, string newValue)
		{
			MemberNode* current = head;

			while (current != nullptr)
			{
				if (current->data.full_name == name)
				{
					update(current, attribute, newValue);//update the selected data value.
					break;
				}
				else return;
			}

		}
		void update(MemberNode* current, string attribute, string value)//function for updating choosen attributte of employee.
		{
			if (attribute == "full_name")
				current->data.full_name = value;
			else if (attribute == "age")
				current->data.age = stoi(value);//convert to integer.
			else if (attribute == "address")
				current->data.address = (value);
			else if (attribute == "email")
				current->data.email = (value);
			else if (attribute == "phone_number")
				current->data.phone_number = (value);
			else if (attribute == "duration")
				current->data.duration = stod(value);
			else if (attribute == "subscription")
				current->data.subscription = (value);

		}
		public: 
			int countMemberNodes()      // Method to count the number of nodes in the Member doubly linked list
			{
				int count = 0;
				MemberNode* current = head;

				while (current != NULL)//Iterates through every node until the node becomes empty (which is the end of the list)
				{
					count++;//count increases throughout eadch node
					current = current->next;//current points to the next node 
				}

				return count;
			}
			public:
				int countBasicPackage() {
					int count = 0;
					MemberNode* current = head;

					while (current != NULL)//Iterates through every node until the node becomes empty (which is the end of the list)
					{
						if (current->data.subscription == "Basic Package") {//Checks the subscription_type
							count++;//count increases throughout each node
						}
						current = current->next;//current points to the next node 
					}

					return count;
				}

				int countPremiumPackage() {
					int count = 0;
					MemberNode* current = head;

					while (current != NULL)      //Iterates through every node until the node becomes empty (which is the end of the list)
					{
						if (current->data.subscription == "Premium Package") {       //Checks the subscription_type
							count++;    //count increases throughout each node
						}
						current = current->next;    //current points to the next node 
					}

					return count;
				}
	public:
		void sortByName() {
			// Check if there are at least two nodes in the linked list
			if (head == nullptr || head->next == nullptr) {
				return;  // No need to sort if there are 0 or 1 nodes
			}

			bool swapped;
			do {
				swapped = false;
				MemberNode* current = head;
				MemberNode* previous = nullptr;
				while (current->next != nullptr) {
					if (current->data.full_name > current->next->data.full_name) {
						// Swap the nodes if they are out of order
						if (previous != nullptr) {
							previous->next = current->next;
						}
						else {
							head = current->next;
						}
						MemberNode* nextNode = current->next;
						current->next = nextNode->next;
						nextNode->next = current;
						previous = nextNode;
						swapped = true;
					}
					else {
						previous = current;
						current = current->next;
					}
				}
			} while (swapped);
		}

	public:
		void sortByAge() {
			// Check if there are at least two nodes in the linked list
			if (head == nullptr || head->next == nullptr) {
				return;  // No need to sort if there are 0 or 1 nodes
			}

			bool swapped;
			do {
				swapped = false;
				MemberNode* current = head;
				MemberNode* previous = nullptr;
				while (current->next != nullptr) {
					if (current->data.age > current->next->data.age) {
						// Swap the nodes if they are out of order
						if (previous != nullptr) {
							previous->next = current->next;
						}
						else {
							head = current->next;
						}
						MemberNode* nextNode = current->next;
						current->next = nextNode->next;
						nextNode->next = current;
						previous = nextNode;
						swapped = true;
					}
					else {
						previous = current;
						current = current->next;
					}
				}
			} while (swapped);
		}
	public:
		void sortBySubscription() {
			// Check if there are at least two nodes in the linked list
			if (head == nullptr || head->next == nullptr) {
				return;  // No need to sort if there are 0 or 1 nodes
			}

			bool swapped;
			do {
				swapped = false;
				MemberNode* current = head;
				MemberNode* previous = nullptr;
				while (current->next != nullptr) {
					if (current->data.subscription > current->next->data.subscription) {
						// Swap the nodes if they are out of order
						if (previous != nullptr) {
							previous->next = current->next;
						}
						else {
							head = current->next;
						}
						MemberNode* nextNode = current->next;
						current->next = nextNode->next;
						nextNode->next = current;
						previous = nextNode;
						swapped = true;
					}
					else {
						previous = current;
						current = current->next;
					}
				}
			} while (swapped);
		}
	public:
		void sortByDuration() {
			// Check if there are at least two nodes in the linked list
			if (head == nullptr || head->next == nullptr) {
				return;  // No need to sort if there are 0 or 1 nodes
			}

			bool swapped;
			do {
				swapped = false;
				MemberNode* current = head;
				MemberNode* previous = nullptr;
				while (current->next != nullptr) {
					if (current->data.duration > current->next->data.duration) {
						// Swap the nodes if they are out of order
						if (previous != nullptr) {
							previous->next = current->next;
						}
						else {
							head = current->next;
						}
						MemberNode* nextNode = current->next;
						current->next = nextNode->next;
						nextNode->next = current;
						previous = nextNode;
						swapped = true;
					}
					else {
						previous = current;
						current = current->next;
					}
				}
			} while (swapped);
		}


	public:
		Image^ RetriveImage(String^ name)//function to  retrieve employee image from db.since its not stored as an attribute in the nodes(for simplicities sake).
		{
			SqlConnection^ connection = gcnew SqlConnection("Data Source=tsede;Initial Catalog=Gym;Integrated Security=True;");

			connection->Open();
			SqlCommand^ cmd = gcnew SqlCommand("SELECT IMG FROM members where full_name=@name", connection);
			cmd->Parameters->AddWithValue("@name", name);
			cli::array<Byte>^ imageData = (cli::array<Byte>^)cmd->ExecuteScalar();
			Image^ image;
			MemoryStream^ ms = gcnew MemoryStream(imageData);

			image = Image::FromStream(ms);

			return image;
		}
	public:
		string ConvertToString(String^ str) {//function for converting string^ text from gui components into normal std::string.
			return msclr::interop::marshal_as<std::string>(str);
		}

	};
}