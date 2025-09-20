// prakt_2_3SP_isomatov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
struct Contact
{
	char Name[36];
	char Phone[13];
	Contact(char name[36], char phone[13])
	{
		strcpy_s(Name, name);
		strcpy_s(Phone, phone);
	}
	Contact() = default;
};
void ShowAll(Contact con[], int size)
{
	if (size == 0)
	{
		std::cout << "\nEmpty contacts list, please add\n" << std::endl;
		return;
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout  << i << ". Name:" << con[i].Name << " Phone:" << con[i].Phone << std::endl;
	}
	std::cout << std::endl;
}
int main()
{
	Contact contacts[100];
	int count = 0;
	while (true) {
		std::cout << std::endl;
		std::cout << "1. Add contact\n2. Delete contact\n3. Edit contact\n4. Show all contacts" << std::endl;
		int choice;
		std::cin >> choice;
		switch (choice)
		{
		case 1: {
			char n[36];
			char p[13];
			std::cout << std::endl;
			std::cout << "Write Name(wihout spaces):\n";
			std::cin >> n;
			std::cout << "Write phone number(wihout spaces):\n";
			std::cin >> p;
			Contact newContact = {n, p};
			contacts[count] = newContact;
			count++;
			break;
		}
		case 2: {
			std::cout << std::endl;
			std::cout << "Choose contact for delete:" << std::endl;
			ShowAll(contacts,count);
			int choice;
			std::cin >> choice;
			contacts[choice] = contacts[count];
			count--;
			std::cout << "Contact was deleted" << std::endl;
			break;
		}
		case 3: {
			std::cout << std::endl;
			char n[36];
			char p[13];
			std::cout << "Choose contact for edit:" << std::endl;
			ShowAll(contacts, count);
			int choice;
			std::cin >> choice;
			std::cout << "Write NEW name(wihout spaces) Old: "<<contacts[choice].Name<<" New: ";
			std::cin >> n;
			std::cout << "Write NEW phone number(wihout spaces) Old:" << contacts[choice].Phone <<" New: ";
			std::cin >> p;
			Contact newContact = { n, p };
			contacts[choice] = newContact;
			break;
		}
		case 4: {
			std::cout << std::endl;
			ShowAll(contacts, count);
			break;
		}
		}
	}
}

