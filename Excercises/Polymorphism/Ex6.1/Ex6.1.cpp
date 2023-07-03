#include <iostream>
#include <string>
#include <vector>

class Employee
{
public:

	Employee() {
		name = "Unknown";
		salary = 1000;
		expYears = 0;
	}

	Employee(std::string _name, int _expYears) {
		name = _name;
		salary = 1000;
		expYears = _expYears;
	}

	void setName(std::string _name) {
		name = _name;
	}

	std::string getName() {
		return name;
	}

	void setSalary(double _salary) {
		salary = _salary;
	}

	double getSalary() {
		return salary;
	}

	void setExpYears(int _expYears) {
		expYears = _expYears;
	}

	int getExpYears() {
		return expYears;
	}

	virtual void inputData() {
		std::cin.ignore();
		std::cout << "Enter name: ";
		std::getline(std::cin, name);

		std::cout << "Enter number of experience years: ";
		std::cin >> expYears;
	}

	virtual void printInfo() {
		std::cout << "Name: " << name << "\n";
		std::cout << "Salary: " << salary << "\n";
		std::cout << "Number of experience years: " << expYears << "\n";
	}

private:
	std::string name;
	double salary;
	int expYears;
};

class HR_staff : public Employee
{
public:
	HR_staff() {

	}

	HR_staff(std::string _name, int _expYears) : Employee(_name, _expYears) {

	}

private:

};

class Programmer : public Employee
{
public:

	Programmer() {

	}

	Programmer(std::string _name, int _expYears) : Employee(_name, _expYears) {

	}

	void printInfo() override {
		std::cout << "Name: " << getName() << "\n";
		std::cout << "Salary: " << (getSalary() + (getSalary() * 15 / 100)) << "\n";
		std::cout << "Number of experience years: " << getExpYears() << "\n";
	}

private:

};

class BusinessMan : public Employee
{
public:

	BusinessMan() {

	}

	BusinessMan(std::string _name, int _expYears, int _contracts) : Employee(_name, _expYears) {
		contracts = _contracts;
	}

	void inputData() override {
		std::cin.ignore();
		std::cout << "Enter name: "; std::string name;
		std::getline(std::cin, name); setName(name);

		std::cout << "Enter number of experience years: "; int expYears;
		std::cin >> expYears; setExpYears(expYears);

		std::cout << "Enter number of contracts completed in this month: ";
		std::cin >> contracts;
	}

	void printInfo() override {
		std::cout << "Name: " << getName() << "\n";
		std::cout << "Number of experience years: " << getExpYears() << "\n";
		std::cout << "Number of contracts completed in this month: " << contracts << "\n";
		std::cout << "Salary: " << (getSalary() + (getSalary() * contracts / 100)) << "\n";
	}

private:
	int contracts;
};

int main()
{
	/*  HR_staff* hr = new HR_staff("Hung", 3);
		hr->printInfo();
		Programmer* coder = new Programmer("Ha", 2);
		coder->printInfo();
		BusinessMan* bm = new BusinessMan("Chung", 2, 3);
		bm->printInfo();    */

//	Cach 1

	/*int numsEmp = 0;
	Employee* employee_list[100];

	do {
		int choice = 0;
		std::cout << "-----------------------------";
		std::cout << "\nEnter your choice in here: ";
		std::cin >> choice;


		switch (choice) {
		case 1:
			std::cout << "\nAdd a employee ?\n";
			std::cout << "1. HR staff  2. Programmer  3. Business Man\n";
			std::cout << "Enter no u want to add: ";
			int choiceCase1;
			std::cin >> choiceCase1;
			std::cout << "\n";
			if (choiceCase1 == 1) {
				HR_staff* hr = new HR_staff();
				hr->inputData();
				employee_list[numsEmp++] = hr;
			}
			else if (choiceCase1 == 2) {
				Programmer* coder = new Programmer();
				coder->inputData();
				employee_list[numsEmp++] = coder;
			}
			else if (choiceCase1 == 3) {
				BusinessMan* bm = new BusinessMan();
				bm->inputData();
				employee_list[numsEmp++] = bm;
			}
			break;
		case 2:
			std::cout << "\nEnter no u want to update: "; int choiceCase2;
			std::cin >> choiceCase2;
			employee_list[choiceCase2]->inputData();
			break;
		case 3: 
			std::cout << "\nEnter no u want to remove: "; int choiceCase3;
			std::cin >> choiceCase3;
			for (int i = choiceCase3; i < numsEmp; i++) {
				employee_list[i] = employee_list[i + 1];
			}
			numsEmp--;
			break;
		case 4:
			for (int i = 0; i < numsEmp; i++) {
				std::cout << "\nNo " << i << ": \n";
				employee_list[i]->printInfo();
			}
			std::cout << "\n";
			break;
		case 0:
			std::cout << "Exit program!\n";
			return 0;
			break;
		}
		
	} while (true);*/


//	cach 2
	int numsEmp = 0;
	std::vector<Employee*> employee_list;

	do {
		int choice = 0;
		std::cout << "-----------------------------";
		std::cout << "\nEnter your choice in here: ";
		std::cin >> choice;


		switch (choice) {
		case 1:
			std::cout << "\nAdd a employee ?\n";
			std::cout << "1. HR staff  2. Programmer  3. Business Man\n";
			std::cout << "Enter no u want to add: ";
			int choiceCase1;
			std::cin >> choiceCase1;
			std::cout << "\n";
			if (choiceCase1 == 1) {
				HR_staff* hr = new HR_staff();
				hr->inputData();
				employee_list.push_back(hr);
				numsEmp++;
			}
			else if (choiceCase1 == 2) {
				Programmer* coder = new Programmer();
				coder->inputData();
				employee_list.push_back(coder);
				numsEmp++;
			}
			else if (choiceCase1 == 3) {
				BusinessMan* bm = new BusinessMan();
				bm->inputData();
				employee_list.push_back(bm);
				numsEmp++;
			}
			break;
		case 2:
			std::cout << "\nEnter no u want to update: "; int choiceCase2;
			std::cin >> choiceCase2;
			employee_list[choiceCase2]->inputData();
			break;
		case 3:
			std::cout << "\nEnter no u want to remove: "; int choiceCase3;
			std::cin >> choiceCase3;
			employee_list.erase(employee_list.begin() + choiceCase3);
			numsEmp--;
			break;
		case 4:
			for (int i = 0; i < numsEmp; i++) {
				std::cout << "\nNo " << i << ": \n";
				employee_list[i]->printInfo();
			}
			std::cout << "\n";
			break;
		case 0:
			std::cout << "Exit program!\n";
			return 0;
			break;
		}

	} while (true);
}

