#pragma once 
#include<fstream>
#include"MAP.h"
#include"vision2020.h"
#include"MEMBER.h"
#include"PATIENT.h"
class JZT
{
	MEMBER<char>* all_members;
	int number_of_members;
	PATIENT<char>* all_patient;
	int number_of_patients;
	MAP *project1;
	vision2020 <char> *project2;
	int get_length(char*);// helping function calculating the length of different pointers arrays
	bool isWordMatched(char[], char[]);// helping  function for comaparing two arrays

public:
	void serch_member_by_name(char*);
	void serch_patinet_by_name(char*);

	void search_member_by_id(int);
	void search_patinet_by_id(int);

	void search_member_by_blood_group(char*);
	void search_patinet_by_blood_group(char*);

	void show_all_members();
	void show_all_patinets();

	void show_all_minor_patinets();
	void show_all_major_patinets();

	void add_new_member();
	void add_new_patient();


	JZT();
	~JZT();
private:

};

JZT::JZT()
{
	ifstream input("input.txt");
	input >> number_of_members;
	char temp[20];
	int temp1;
	all_members = new MEMBER<char>[number_of_members+10];
	for (int count = 0; count < number_of_members; count++)
	{
		input >> temp;
		all_members[count].set_fname(temp);
		input >> temp;
		all_members[count].set_lname(temp);
		input >> temp;
		all_members[count].set_address(temp);
		input >> temp;
		all_members[count].set_blood_group(temp);
		input >> temp;
		all_members[count].set_category(temp);
		input >> temp1;
		all_members[count].set_id(temp1);
	}
	input >> number_of_patients;
	all_patient = new PATIENT<char>[number_of_patients + 10];
	for (int count = 0; count < number_of_patients; count++)
	{
		input >> temp;
		all_patient[count].set_fname(temp);
		input >> temp;
		all_patient[count].set_lname(temp);
		input >> temp;
		all_patient[count].set_address(temp);
		input >> temp;
		all_patient[count].set_blood_group(temp);
		input >> temp;
		all_patient[count].set_category(temp);
		input >> temp1;
		all_patient[count].set_id(temp1);
	}

}

JZT::~JZT()
{
	ofstream output("output.txt");
	output << number_of_members << endl;
	for (int count = 0; count < number_of_members; count++)
	{
		output << all_members[count].get_fname()<<" ";
		output << all_members[count].get_lname() << " ";
		output << all_members[count].get_address() << " ";
		output << all_members[count].get_blood_group() << " ";
		output << all_members[count].get_category() << " ";
		output << all_members[count].get_id() << "\n";
	}
	output << number_of_patients << endl;
	for (int count = 0; count < number_of_patients; count++)
	{
		output << all_patient[count].get_fname() << " ";
		output << all_patient[count].get_lname() << " ";
		output << all_patient[count].get_address() << " ";
		output << all_patient[count].get_blood_group() << " ";
		output << all_patient[count].get_category() << " ";
		output << all_patient[count].get_id() << "\n";
	}
}
void JZT::serch_member_by_name(char* name_)
{
	bool temp = false;
	for (int count = 0; count < number_of_members; count++)
	{
		if (isWordMatched(all_members[count].get_fname(), name_) || isWordMatched(all_members[count].get_lname(), name_))
		{
			all_members[count].display();
			temp = true;
		}
	}
	if (!temp)
		cout << "NAME NOT FOUND\n";
}
void JZT::serch_patinet_by_name(char* name_)
{
	bool temp = false;
	for (int count = 0; count < number_of_patients; count++)
	{
		if (isWordMatched(all_patient[count].get_fname(), name_) || isWordMatched(all_patient[count].get_lname(), name_))
		{
			all_patient[count].display();
			temp = true;
		}
	}
	if (!temp)
		cout << "NAME NOT FOUND\n";
}

void JZT::search_member_by_id(int id_)
{
	bool temp = false;
	for (int count = 0; count < number_of_members; count++)
	{
		if (all_members[count].get_id()==id_)
		{
			all_members[count].display();
			temp = true;
		}
	}
	if (!temp)
		cout << "ID NOT FOUND\n";
}
void JZT::search_patinet_by_id(int id_)
{
	bool temp = false;
	for (int count = 0; count < number_of_patients; count++)
	{
		if (all_patient[count].get_id() == id_)
		{
			all_patient[count].display();
			temp = true;
		}
	}
	if (!temp)
		cout << "ID NOT FOUND\n";
}

void JZT::search_member_by_blood_group(char* b_g)
{
	bool temp = false;
	for (int count = 0; count < number_of_members; count++)
	{
		if (isWordMatched(all_members[count].get_blood_group(),b_g))
		{
			all_members[count].display();
			temp = true;
		}
	}
	if (!temp)
		cout << "NO MEMBER OF SUCH BLOOD GROUP IS NOT FOUND\n";
}
void JZT::search_patinet_by_blood_group(char* b_g)
{
	bool temp = false;
	for (int count = 0; count < number_of_patients; count++)
	{
		if (isWordMatched(all_patient[count].get_blood_group(), b_g))
		{
			all_patient[count].display();
			temp = true;
		}
	}
	if (!temp)
		cout << "NO PATIENT OF SUCH BLOOD GROUP IS NOT FOUND\n";
}

void JZT::show_all_members()
{
	for (int count = 0; count < number_of_members; count++)
	{
			all_members[count].display();
	}
}
void JZT::show_all_patinets()
{
	for (int count = 0; count < number_of_patients; count++)
	{
			all_patient[count].display();
	}
}

void JZT::show_all_minor_patinets()
{
	for (int count = 0; count < number_of_patients; count++)
	{
		if (isWordMatched(all_patient[count].get_category(), "minor"))
			all_patient[count].display();
	}
}
void JZT::show_all_major_patinets()
{
	for (int count = 0; count < number_of_patients; count++)
	{
		if (isWordMatched(all_patient[count].get_category(),"major"))
			all_patient[count].display();
	}
}

void JZT::add_new_member()
{

}
void JZT::add_new_patient()
{

}
int JZT::get_length(char* arr)// function calculating the length of different pointers arrays
{
	int count = 0;
	for (; arr[count] != '\0'; count++);
	return count;
}
bool JZT::isWordMatched(char arr1[], char arr2[])// function for comaparing two arrays
{
	if (get_length(arr1) == get_length(arr2))
	{
		for (int count = 0; arr1[count] != '\0'; count++)
		{
			if (arr1[count] != arr2[count])
				return false;
		}
	}
	else
		return false;
	return true;
}