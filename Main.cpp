#include "Main.h"

int main()
{
	setlocale(LC_ALL, "ru");
	int command;
	while (true)
	{
		system("cls");
		std::cin >> command;
		switch (command)
		{
			case ARRAYS:
			{
				ArraysMenu();
				system("pause");
				break;
			}
			case FUNCTIONS:
			{
				Functions1();
				Functions2();
				Functions3();
				break;
			}
			case POINTERS:
			{
				Pointers1();
				Pointers2();
				Pointers3();
				Pointers4();
				Pointers5();
				Pointers6();
				Pointers8();
				break;
			}
			case DYNAMIC_MEMORY:
			{
				DynamicMemory1();
				DynamicMemory2();
				DynamicMemory3();
				DynamicMemory4();
				DynamicMemory5();
				DynamicMemory6();
				DynamicMemory7();
				DynamicMemory8();
				break;
			}
			case EXIT:
			{
				return 0;
			}
		}
	}
}