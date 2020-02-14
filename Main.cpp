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
				FunctionsMenu();
				system("pause");
				break;
			}
			case POINTERS:
			{
				PointersMenu();
				system("pause");
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