#include "structures.h"
#include <iostream>

void showObj(date& D){
	std::cout << D.day << "." << D.month << "." << D.year << std::endl;
}

void showObj(person& P){
	std::cout << P.name << "\n" <<std::endl;
	std::cout <<"Birthday"<<std::endl;
	showObj(P.birthday);
	std::cout << "Position: " << P.position << std::endl;
	std::cout << "Salary:" << P.salary << std::endl;
}
