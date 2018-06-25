#include"PERSON.h"
#include"MEMBER.h"
#include"PATIENT.h"
#include"JZT.h"
#include<Windows.h>
#include<iostream>
using namespace std;
int main()
{

	int user;
	JZT UCP;
	while (true)
	{
		cout << "\t\t\t\tJIHAD FOR ZERO THALASSEMIA\n";
		cout << "1.  ADMIN\n2.  OTHER_USER\n";
		cout << "ENTER YOUR CHOICE: ";
		cin >> user;
		if (user == 1)
		{
			system("cls");
			cout << "1.   serch_member_by_name\n";
			cout << "2.   serch_patinet_by_name\n";
			cout << "3.   search_member_by_id\n";
			cout << "4.   search_patinet_by_id\n";
			cout << "5.   search_member_by_blood_group\n";
			cout << "6.   search_patinet_by_blood_group\n";
			cout << "7.   show_all_members\n";
			cout << "8.   show_all_patinets\n";
			cout << "9.   show_all_minor_patinets\n";
			cout << "10.  show_all_major_patinets\n";
			cout << "11.  add_new_member\n";
			cout << "12.  add_new_patient\n";
			int user1_choice;
			cout << "ENTER YOUR CHOICE: ";
			cin >> user1_choice;
			if (user1_choice == 1)
			{
				char name[10];
				cout << "ENTER THE NAME: ";
				cin >> name;				
				UCP.serch_member_by_name(name);
				system("pause");
			}
			else if (user1_choice == 2)
			{
				char name[10];
				cout << "ENTER THE NAME: ";
				cin >> name;
				UCP.serch_patinet_by_name(name);
				system("pause");
			}
			else if (user1_choice == 3)
			{
				int id_;
				cout << "ENTER THE ID: ";
				cin >> id_;
				UCP.search_member_by_id(id_);
				system("pause");
			}
			else if (user1_choice == 4)
			{
				int id_;
				cout << "ENTER THE ID: ";
				cin >> id_;
				UCP.search_patinet_by_id(id_);
				system("pause");
			}
			else if (user1_choice == 5)
			{
				while (true)
				{
					int bg;
					cout << "\t1.   AB+\n";
					cout << "\t2.   AB-\n";
					cout << "\t3.   A+\n";
					cout << "\t4.   A-\n";
					cout << "\t5.   B+\n";
					cout << "\t6.   B-\n";
					cout << "\t7.   O+\n";
					cout << "\t8.   O-\n";
					cout << "CHOOSE BLOOD GROUP: ";
					cin >> bg;
					if (bg == 1)
					{
						UCP.search_member_by_blood_group("ab+");
						break;
					}
					else if (bg == 2)
					{
						UCP.search_member_by_blood_group("ab-");
						break;
					}
					else if (bg == 3)
					{
						UCP.search_member_by_blood_group("a+");
						break;
					}
					else if (bg == 4)
					{
						UCP.search_member_by_blood_group("a-");
						break;
					}
					else if (bg == 5)
					{
						UCP.search_member_by_blood_group("b+");
						break;
					}
					else if (bg == 6)
					{
						UCP.search_member_by_blood_group("b-");
						break;
					}
					else if (bg == 7)
					{
						UCP.search_member_by_blood_group("o+");
						break;
					}
					else if (bg == 8)
					{
						UCP.search_member_by_blood_group("o-");
						break;
					}
					else
					{
						cout << "ENTER THE CORRECT CHOICE\n";
						system("pause");
					}
					system("cls");
				}
				system("pause");
			}
			else if (user1_choice == 6)
			{
				while (true)
				{
					int bg;
					cout << "\t1.   AB+\n";
					cout << "\t2.   AB-\n";
					cout << "\t3.   A+\n";
					cout << "\t4.   A-\n";
					cout << "\t5.   B+\n";
					cout << "\t6.   B-\n";
					cout << "\t7.   O+\n";
					cout << "\t8.   O-\n";
					cout << "CHOOSE BLOOD GROUP: ";
					cin >> bg;
					if (bg == 1)
					{
						UCP.search_patinet_by_blood_group("ab+");
						break;
					}
					else if (bg == 2)
					{
						UCP.search_patinet_by_blood_group("ab-");
						break;
					}
					else if (bg == 3)
					{
						UCP.search_patinet_by_blood_group("a+");
						break;
					}
					else if (bg == 4)
					{
						UCP.search_patinet_by_blood_group("a-");
						break;
					}
					else if (bg == 5)
					{
						UCP.search_patinet_by_blood_group("b+");
						break;
					}
					else if (bg == 6)
					{
						UCP.search_patinet_by_blood_group("b-");
						break;
					}
					else if (bg == 7)
					{
						UCP.search_patinet_by_blood_group("o+");
						break;
					}
					else if (bg == 8)
					{
						UCP.search_patinet_by_blood_group("o-");
						break;
					}
					else
					{
						cout << "ENTER THE CORRECT CHOICE\n";
						system("pause");
					}
					system("cls");
				}
				system("pause");
				system("pause");
			}
			else if (user1_choice == 7)
			{
				UCP.show_all_members();
				system("pause");
			}
			else if (user1_choice == 8)
			{
				UCP.show_all_patinets();
				system("pause");
			}
			else if (user1_choice == 9)
			{
				UCP.show_all_minor_patinets();
				system("pause");
			}
			else if (user1_choice == 10)
			{
				UCP.show_all_major_patinets();
				system("pause");
			}
			else if (user1_choice == 11)
			{

				system("pause");
			}
			else if (user1_choice == 12)
			{
				system("pause");
			}
			system("cls");
		}
		else if (user == 2)
		{
			system("cls");
			cout << "1.   serch_member_by_name\n";
			cout << "2.   serch_patinet_by_name\n";
			cout << "3.   search_member_by_id\n";
			cout << "4.   search_patinet_by_id\n";
			cout << "5.   search_member_by_blood_group\n";
			cout << "6.   search_patinet_by_blood_group\n";
			cout << "7.   show_all_members\n";
			cout << "8.   show_all_patinets\n";
			cout << "9.   show_all_minor_patinets\n";
			cout << "10.  show_all_major_patinets\n";
			int user1_choice;
			cout << "ENTER YOUR CHOICE: ";
			cin >> user1_choice;
			if (user1_choice == 1)
			{
				char name[10];
				cout << "ENTER THE NAME: ";
				cin >> name;
				UCP.serch_member_by_name(name);
				system("pause");
			}
			else if (user1_choice == 2)
			{
				char name[10];
				cout << "ENTER THE NAME: ";
				cin >> name;
				UCP.serch_patinet_by_name(name);
				system("pause");
			}
			else if (user1_choice == 3)
			{
				int id_;
				cout << "ENTER THE ID: ";
				cin >> id_;
				UCP.search_member_by_id(id_);
				system("pause");
			}
			else if (user1_choice == 4)
			{
				int id_;
				cout << "ENTER THE ID: ";
				cin >> id_;
				UCP.search_patinet_by_id(id_);
				system("pause");
			}
			else if (user1_choice == 5)
			{
				while (true)
				{
					int bg;
					cout << "\t1.   AB+\n";
					cout << "\t2.   AB-\n";
					cout << "\t3.   A+\n";
					cout << "\t4.   A-\n";
					cout << "\t5.   B+\n";
					cout << "\t6.   B-\n";
					cout << "\t7.   O+\n";
					cout << "\t8.   O-\n";
					cout << "CHOOSE BLOOD GROUP: ";
					cin >> bg;
					if (bg == 1)
					{
						UCP.search_member_by_blood_group("ab+");
						break;
					}
					else if (bg == 2)
					{
						UCP.search_member_by_blood_group("ab-");
						break;
					}
					else if (bg == 3)
					{
						UCP.search_member_by_blood_group("a+");
						break;
					}
					else if (bg == 4)
					{
						UCP.search_member_by_blood_group("a-");
						break;
					}
					else if (bg == 5)
					{
						UCP.search_member_by_blood_group("b+");
						break;
					}
					else if (bg == 6)
					{
						UCP.search_member_by_blood_group("b-");
						break;
					}
					else if (bg == 7)
					{
						UCP.search_member_by_blood_group("o+");
						break;
					}
					else if (bg == 8)
					{
						UCP.search_member_by_blood_group("o-");
						break;
					}
					else
					{
						cout << "ENTER THE CORRECT CHOICE\n";
						system("pause");
					}
					system("cls");
				}
				system("pause");
			}
			else if (user1_choice == 6)
			{
				while (true)
				{
					int bg;
					cout << "\t1.   AB+\n";
					cout << "\t2.   AB-\n";
					cout << "\t3.   A+\n";
					cout << "\t4.   A-\n";
					cout << "\t5.   B+\n";
					cout << "\t6.   B-\n";
					cout << "\t7.   O+\n";
					cout << "\t8.   O-\n";
					cout << "CHOOSE BLOOD GROUP: ";
					cin >> bg;
					if (bg == 1)
					{
						UCP.search_patinet_by_blood_group("ab+");
						break;
					}
					else if (bg == 2)
					{
						UCP.search_patinet_by_blood_group("ab-");
						break;
					}
					else if (bg == 3)
					{
						UCP.search_patinet_by_blood_group("a+");
						break;
					}
					else if (bg == 4)
					{
						UCP.search_patinet_by_blood_group("a-");
						break;
					}
					else if (bg == 5)
					{
						UCP.search_patinet_by_blood_group("b+");
						break;
					}
					else if (bg == 6)
					{
						UCP.search_patinet_by_blood_group("b-");
						break;
					}
					else if (bg == 7)
					{
						UCP.search_patinet_by_blood_group("o+");
						break;
					}
					else if (bg == 8)
					{
						UCP.search_patinet_by_blood_group("o-");
						break;
					}
					else
					{
						cout << "ENTER THE CORRECT CHOICE\n";
						system("pause");
					}
					system("cls");
				}
				system("pause");
				system("pause");
			}
			else if (user1_choice == 7)
			{
				UCP.show_all_members();
				system("pause");
			}
			else if (user1_choice == 8)
			{
				UCP.show_all_patinets();
				system("pause");
			}
			else if (user1_choice == 9)
			{
				UCP.show_all_minor_patinets();
				system("pause");
			}
			else if (user1_choice == 10)
			{
				UCP.show_all_major_patinets();
				system("pause");
			}
			system("cls");
		}
	}
	int stop_visual_studio;// DECLARED TO STOP THE VISUAL STUDIO
	MEMBER<char>B("abc", "cde", 9, "a+", "minor", "18 dha",10);
	B.set_category("MAJOR");
	B.set_address("19 DHA");
	B.set_lname("ABC");
	B.set_fname("CDE");
	B.display();

	PATIENT<char>C("abc", "cde", 9, "a+", "minor", "18 dha", 10);

	C.display();
	cin >> stop_visual_studio;
	system("pause");
	return 0;
}