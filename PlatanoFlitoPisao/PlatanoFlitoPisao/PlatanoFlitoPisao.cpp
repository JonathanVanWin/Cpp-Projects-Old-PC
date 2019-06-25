// PlatanoFlitoPisao.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

int main()
{
	int n1, n2;
	std::cout << "Enter two numbers" << std::endl;

	std::cin>> n1;
	std::cin >> n2;
	std::cout << "The sum of " << n1 << " and " << n2 << " is: " << n1 + n2 << std::endl;
	system("pause");
	return 0;
}

