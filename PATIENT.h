#pragma once
#include"PERSON.h"
#include<iostream>
using namespace std;
template<typename s>
class PATIENT :public PERSON<s>
{
	int PATIENT_id;
	void copy_arrays(s*, s*);// helping function
	int get_length(char* arr);// helping function
public:
	PATIENT();
	PATIENT(char*, char*, int, char*, char*, char*, int);

	char* get_fname();
	char* get_lname();
	int get_age();
	char* get_blood_group();
	char* get_category();
	char* get_address();
	int get_id();

	void set_fname(char*);
	void set_lname(char*);
	void set_age(int);
	void set_blood_group(char*);
	void set_category(char*);
	void set_address(char*);
	void set_id(int);

	void display();
	~PATIENT();

};
template<typename s>
int PATIENT<s>::get_length(char* arr)// function calculating the length of different pointers arrays
{
	int count = 0;
	for (; arr[count] != '\0'; count++);
	return count;
}
template<typename s>
void PATIENT<s>::copy_arrays(s*arr1, s* arr2)
{
	if (arr1 != nullptr)
	{
		int count = 0;
		for (; arr1[count] != '\0'; count++)
		{
			arr2[count] = arr1[count];
		}
		arr2[count] = '\0';
	}
	else
	{
		arr2[0] = '\0';
	}
}
template<typename s>
PATIENT<s>::PATIENT() :PERSON()
{
	PATIENT_id = 0;
}
template<typename s>
PATIENT<s>::PATIENT(char*fn = nullptr, char*ln = nullptr, int age_ = 0, char* blood = nullptr, char* categ = nullptr, char* adres = nullptr, int id = 0) : PERSON(fn, ln, age_, blood, categ, adres)
{
	PATIENT_id = id;
}
template<typename s>
PATIENT<s>::~PATIENT()
{
}

template<typename s>
char* PATIENT<s>::get_fname()
{
	return PERSON::get_fname();
}
template<typename s>
char* PATIENT<s>::get_lname()
{
	return PERSON::get_lname();
}
template<typename s>
int PATIENT<s>::get_age()
{
	return PERSON::get_age();
}
template<typename s>
char* PATIENT<s>::get_blood_group()
{
	return PERSON::get_blood_group();
}
template<typename s>
char* PATIENT<s>::get_category()
{
	return PERSON::get_category();
}
template<typename s>
char* PATIENT<s>::get_address()
{
	return PERSON::get_address();
}
template<typename s>
int PATIENT<s>::get_id()
{
	return PATIENT_id;
}
template<typename s>

void PATIENT<s>::set_fname(char* other)
{
	PERSON::set_fname(other);
}
template<typename s>
void PATIENT<s>::set_lname(char*other)
{
	PERSON::set_lname(other);
}
template<typename s>
void PATIENT<s>::set_age(int ag)
{
	PERSON::set_age(ag);
}
template<typename s>
void PATIENT<s>::set_blood_group(char* other)
{
	PERSON::set_blood_group(other);
}
template<typename s>
void PATIENT<s>::set_category(char*other)
{
	PERSON::set_category(other);
}
template<typename s>
void PATIENT<s>::set_address(char* other)
{
	PERSON::set_address(other);
}
template<typename s>
void PATIENT<s>::set_id(int id_)
{
	PATIENT_id = id_;
}
template<typename s>
void PATIENT<s>::display()
{
	PERSON::display();
	cout << "PATIENT_ID: " << PATIENT_id << endl;
}