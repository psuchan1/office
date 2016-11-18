#pragma once 

#include <string>
#include <ctime>


enum class Status {active, remove, suspended};

class Student
{
	private:

	std::string name;
	std::string surname;

	unsigned int index {0};
	unsigned int semester {1};
	std::string birth_date {"11-11-1111"};
	Status status {Status::active};
	unsigned int ects {0};
	int balance {0};
	
	public:
	Student(std::string name, std::string surname, std::string birth_date)
	: name(name), surname(surname)
	{};		
};
