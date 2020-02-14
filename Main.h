#pragma once
#include "Arrays.h"
#include "Functions.h"
#include "Pointers.h"
#include "DynamicMemory.h"


enum Commands
{
	ARRAYS,
	FUNCTIONS,
	POINTERS,
	DYNAMIC_MEMORY,
	EXIT
};


void PrintMainMenu()
{
	std::cout << "\n\t0) �������\n"
		"\t1) �������\n"
		"\t2) ��������� � ������\n"
		"\t3) ������������ ������\n";
}