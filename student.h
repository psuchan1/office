#pragma once 

#include <string>
#include <ctime>


enum class Status {active, remove, suspended};

class Student
{
	private:

	std::sting name;
	std::sting surname;

	unsigned int index;
	unsigned int semester;
	std::sting birth_date;
	Status status;
	unsigned int ects;
	int balance;
	
		


};
