#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee
{
public:
    static int numEmp;

    Employee() 
    {
        basic_salary = 1000;
        experiences = 0;
    }

    std::string getName() { return name; }
    void setName(std::string _name) {
        name = _name;
    }

    double getSalary() { return basic_salary; }
    void setSalary(double _basic_salary) {
        basic_salary = _basic_salary;
    }

    int getExp() { return experiences; }
    void setExp(int _experiences) {
        experiences = _experiences;
    }

    virtual void inputInfo() {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);

        std::cout << "Enter number of experience years: ";
        std::cin >> experiences;

        std::cin.ignore();
    }

    virtual void printInfo() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Experiences: " << experiences << "\n";
    }

    virtual void printSalary() {
        std::cout << "Basic salary: " << basic_salary << "\n";
    }

protected:
    std::string name;
    double basic_salary;
    int experiences;
};

class HR : public Employee
{
public:

    HR() { numEmp++; }


private:


};

class IT : public Employee
{
public:
    IT() { numEmp++; }

    void printSalary() override {
        std::cout << "Basic salary: " << basic_salary + basic_salary * 15 / 100 << "\n";
    }

private:


};

class Business : public Employee
{
public:
    Business() 
    {
        numEmp++;
        contact = 0;
    }

    int getContact() { return contact; }
    void setContact(int _contact) {
        contact = _contact;
    }

    void inputInfo() override {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);

        std::cout << "Enter number of experience years: ";
        std::cin >> experiences;

        std::cout << "Enter number of contact: ";
        std::cin >> contact;

        std::cin.ignore();
    }

    void printInfo() override {
        std::cout << "Name: " << name << "\n";
        std::cout << "Number of experience years: " << experiences << "\n";
    }

    void printSalary() override {
        std::cout << "Number of contact " << contact << "\n";
        std::cout << "Basic salary: " << basic_salary + basic_salary * contact / 100 << "\n";
    }

private:
    int contact;

};

bool checkInputCharacters(std::string& _inputFirstChoice) {
    for (int i = 0; i < _inputFirstChoice.length(); i++) {
        if (!isdigit(_inputFirstChoice[i])) {
            return false;
            break;
        }
    }
    return true;
}

void reInputCharacters(std::string& _inputFirstChoice) {
    std::cout << "Re-enter your choice in here: ";
    std::getline(std::cin, _inputFirstChoice);
}

void check_reInputCharacters(bool _c, int& _choice, std::string _inputChoice) {
    while (!_c) {
        reInputCharacters(_inputChoice);
        _c = checkInputCharacters(_inputChoice);
        if (_c) {
            _choice = std::stoi(_inputChoice);
            if (_choice < 0 || _choice > 5) {
                reInputCharacters(_inputChoice);
                _c = checkInputCharacters(_inputChoice);
            }
            break;
        }
    }
}

int Employee::numEmp = 0;

int main()
{
    // có thể sử dụng nhập int để đưa ra lựa chọn luôn không cần thông qua string. Đây check validation về số nhập vào để biết thêm nên sẽ hơi rườm rà
    std::vector<Employee*> listEmployee;
    do {
        int choice = 0;
        std::string inputChoice;
        std::cout << "\nEnter your choice in here: ";
        std::getline(std::cin, inputChoice);
        bool c = checkInputCharacters(inputChoice);
        if (c) {
            choice = std::stoi(inputChoice);
        }
        else {
            check_reInputCharacters(c, choice, inputChoice);
        }

        switch (choice)
        {
            case 1:
            {
                int first_choice = 0;
                std::string inputFirstChoice;
                std::cout << "\nAdd a employee ?\n";
                std::cout << "1. HR staff  2. Programmer  3. Business Man\n";
                std::cout << "Enter no employee u want to add: ";
                std::getline(std::cin, inputFirstChoice);
                bool c1 = checkInputCharacters(inputFirstChoice);
                if (c1) {
                    first_choice = std::stoi(inputFirstChoice);
                }
                else {
                    check_reInputCharacters(c1, first_choice, inputFirstChoice);
                }
                if (first_choice == 1) {
                    HR* hr = new HR();
                    hr->inputInfo();
                    listEmployee.push_back(hr);
                }
                else if (first_choice == 2) {
                    IT* iter = new IT();
                    iter->inputInfo();
                    listEmployee.push_back(iter);
                }
                else if (first_choice == 3) {
                    Business* bm = new Business();
                    bm->inputInfo();
                    listEmployee.push_back(bm);
                }
                else {
                    std::cout << "Invalid choice!\n";
                }
                break;
            }
            case 2:
            {
                std::cout << "\nEnter no u want to update: ";
                int second_choice = 0;
                std::string inputSecondChoice;
                std::getline(std::cin, inputSecondChoice);
                bool c2 = checkInputCharacters(inputSecondChoice);
                if (c2) {
                    second_choice = std::stoi(inputSecondChoice);
                } else {
                    reInputCharacters(inputSecondChoice);
                }

                if (second_choice < Employee::numEmp) {
                    listEmployee[second_choice]->inputInfo();
                }
                
                break;
            }
            case 3:
            {
                std::cout << "\nEnter no u want to remove: ";
                int third_choice = 0;
                std::string inputThirdChoice;
                std::getline(std::cin, inputThirdChoice);
                bool c3 = checkInputCharacters(inputThirdChoice);
                if (c3) {
                    third_choice = std::stoi(inputThirdChoice);
                }
                else {
                    reInputCharacters(inputThirdChoice);
                }
                listEmployee.erase(listEmployee.begin() + third_choice);
                Employee::numEmp--;
                break;
            }
            case 4: 
            {
                for (int i = 0; i < Employee::numEmp; i++) {
                    std::cout << "\nNo " << i << ": \n";
                    listEmployee[i]->printInfo();
                    listEmployee[i]->printSalary();
                }
                std::cout << "\n";
                break;
            }
            case 0:
            {
                std::cout << "Exit program!\n";
                return 0;
                break;
            }
        }

    } while (true);

    return 0;
}
