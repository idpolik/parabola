#include "functions.hpp"
#include "variables.hpp"
#include <iostream>
#include <Windows.h>

void main()
{
	std::cout << "Coefficient of quadratic X?\n";
	std::cin >> vars::cinA;
	system("cls");
	std::cout << "Coefficient of linear X?\n";
	std::cin >> vars::cinB;
	system("cls");
	std::cout << "What is the constant?\n";
	std::cin >> vars::cinC;

	system("cls");


	std::cout << funcs::getVertex(vars::cinA, vars::cinB, vars::cinC) + "\n"
				+ funcs::getDirection(vars::cinA) + "\n"
				+ funcs::getWidthPara(vars::cinA) + 
				"\nAxis of Symmetry: x=" + 
				std::to_string(funcs::getAxisOfSym(vars::cinA, vars::cinB, vars::cinC)) + 
				"\n" + funcs::getRoots(vars::cinA, vars::cinB, vars::cinC)
				+ "\n\n";
	
	system("pause");
}