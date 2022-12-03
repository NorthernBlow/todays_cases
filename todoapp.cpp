#include <iostream>
#include <string>


using namespace std;


void Menu()
{
	setlocale(LC_ALL, "ru");

	link:

	int choice;
	{
		cout << "0. Добавить\n1. Текущие\n 2. Выполненные\n3. Выход\n\n";
		cin >> choice;
		switch (choice)
		{
			case 0:
				cout << "Введите описание дела: \n";
				break;
			case 1:
				cout << "Текущие дела: \n";
				break;
			case 2:
				cout << "Выполненные дела: \n";
				break;

			case 3:
				cout << "Здесь не на что смотреть, мотивируй себя сам \n";
				break;
		}
	}

    if (choice >3)
		goto link;

}


int main()
{
Menu();


	
}
