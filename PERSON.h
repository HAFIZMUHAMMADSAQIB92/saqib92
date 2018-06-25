#pragma once
#include<iostream>
using namespace std;
template<typename s>
class PERSON
{
	char* fName;
	char* lName;
	int age;
	char *blood_group;// a+,b+ etc
	char *category;// major or minor
	char* address;
	void copy_arrays(s*,s*);// helping function
	void array_print(char *);//helping function
	int get_length(char* arr);// helping function
public:
	PERSON();
	PERSON(char*, char*, int, char*, char*, char*);

	char* get_fname();
	char* get_lname();
	int get_age();
	char* get_blood_group();
	char* get_category();
	char* get_address();

	void set_fname(char*);
	void set_lname(char*);
	void set_age(int);
	void set_blood_group(char*);
	void set_category(char*);
	void set_address(char*);
	
	virtual void display();
	
	~PERSON();
};
template<typename s>
int PERSON<s>::get_length(char* arr)// function calculating the length of different pointers arrays
{
	int count = 0;
	for (; arr[count] != '\0'; count++);
	return count;
}
template<typename s>
void PERSON<s>::copy_arrays(s*arr1, s* arr2)
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
PERSON<s>::PERSON()
{
	fName = new char[1];
	fName= '\0';
	age = 0;
	blood_group = new char[2];
	blood_group= "UN";//UNKNOWN
	category = new char[4];
	category= "NULL";//UNKNOWN
	address = new char[1];
	address= '\0';
}
template<typename s>
PERSON<s>::PERSON(char*fn = nullptr, char*ln = nullptr, int age_ = 0, char* blood = nullptr, char* categ = nullptr, char* adres = nullptr)
{
	if (fn == nullptr)
	{
		fName = new char[2];
		fName[0] = '\0';
	}
		
	else
	{
		int size = get_length(fn) + 1;
		fName = new char[size];
		copy_arrays(fn, fName);
	}
	if (ln == nullptr)
	{
		lName = new char[1];
		lName[0] = '\0';
	}
	else
	{
		int size = get_length(ln) + 1;
		lName = new char[size];
		copy_arrays(ln, lName);
	}
	if (adres == nullptr)
	{
		address = new char[1];
		address[0] = '\0';
	}

	else
	{
		int size = get_length(adres) + 1;
		address = new char[size];
		copy_arrays(adres, address);
	}
	if (blood == nullptr)
		
	{
		blood_group = new char[2];//UNKNOWN
		blood_group= "UN";
	}
	else
	{
		blood_group = new char[2];
		int count = 0;
		for (; count < 2; count++)
			blood_group[count] = blood[count];
		blood_group[count] = '\0';
	}
	if (categ == nullptr)
	{
		category = new char[4];
		category = "NULL";
	}
	else
	{
		category = new char[4];
		int count = 0;
		for (; count < 5; count++)
			category[count] = categ[count];
		category[count] = '\0';
	}
	age = age_;
}
template<typename s>
PERSON<s>::~PERSON()
{
	delete[]fName;
	delete[]lName;
	delete[]address;
	delete[]blood_group;
	delete[]category;
}
template<typename s>
char* PERSON<s>::get_fname()
{
	char*temp = new char[get_length(fName) + 1];
	copy_arrays(fName, temp);
	return temp;
}
template<typename s>
char* PERSON<s>::get_lname()
{
	char*temp = new char[get_length(lName) + 1];
	copy_arrays(lName, temp);
	return temp;
}
template<typename s>
int PERSON<s>::get_age()
{
	return age;
}
template<typename s>
char* PERSON<s>::get_blood_group()
{
	char*temp = new char[get_length(blood_group) + 1];
	copy_arrays(blood_group, temp);
	return temp;
}
template<typename s>
char* PERSON<s>::get_category()
{
	char*temp = new char[get_length(category) + 1];
	copy_arrays(category, temp);
	return temp;
}
template<typename s>
char* PERSON<s>::get_address()
{
	char*temp = new char[get_length(address) + 1];
	copy_arrays(address, temp);
	return temp;
}
template<typename s>
void PERSON<s>::set_fname(char* fn)
{
	fName = nullptr;
	fName = new char[get_length(fn) + 1];
	copy_arrays(fn, fName);
}
template<typename s>
void PERSON<s>::set_lname(char* ln)
{
	lName = nullptr;
	lName = new char[get_length(ln) + 1];
	copy_arrays(ln, lName);
}
template<typename s>
void PERSON<s>::set_age(int age_)
{
	age = age_;
}
template<typename s>
void PERSON<s>::set_blood_group(char*bg)
{
	blood_group = nullptr;
	blood_group = new char[get_length(bg) + 1];
	copy_arrays(bg, blood_group);
}
template<typename s>
void PERSON<s>::set_category(char* cat)
{
	category=nullptr;
	category = new char[get_length(cat) + 1];
	copy_arrays(cat, category);
}
template<typename s>
void PERSON<s>::set_address(char* ad)
{
	address = nullptr;
	address = new char[get_length(ad) + 1];
	copy_arrays(ad, address);
}
template<typename s>
void PERSON<s>::display()
{
	cout << "FIRST NAME: ";
	array_print(fName);
	cout << "LAST NAME: ";
	array_print(lName);
	cout << "AGE: "<<age<<endl;
	cout << "CATEGORY: ";
	array_print(category);
	cout << "BLOOD GROUP: ";
	array_print(blood_group);
	cout << "ADDRESS: ";
	array_print(address);
}
template<typename s>
void PERSON<s>::array_print(char * arr)
{
	if (arr != nullptr)
	{
		for (int count = 0; arr[count] != '\0'; count++)
		{
			cout << arr[count];
		}
	}
	cout << endl;
}