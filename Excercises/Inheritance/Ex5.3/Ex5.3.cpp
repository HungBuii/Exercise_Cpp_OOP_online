#include <iostream>
#include <string>

class Ticket
{
public:

    Ticket() {
        flight_name = "Unknown";
        departure_day = "No data";
        cost = 0;
    }

    Ticket(std::string _flight_name, std::string _departure_day, double _cost) {
        flight_name = _flight_name;
        departure_day = _departure_day;
        cost = _cost;
    }

    void inputData() {
        std::cin.ignore();
        std::cout << "Enter flight name: "; 
        std::getline(std::cin, flight_name);

        std::cout << "Enter flight departure day: ";
        std::getline(std::cin, departure_day);

        if (flight_name == "Singapore") {
            cost = 100;
        }
        else if (flight_name == "Thailand") {
            cost = 30;
        }
        else {
            cost = 50;
        }
    }

    void showData(int _numsTicket) {
        std::cout << "Flight name: " << flight_name << "\n";
        std::cout << "Flight departure day: " << departure_day << "\n";
        std::cout << "Cost: " << cost * _numsTicket << "$\n";
    }

private:
    std::string flight_name;
    std::string departure_day;
    double cost;
};

class Person
{
public:

    Person() { 
        name = "Unknown";
        gender = "Unknown";
        age = 0;
    }

    Person(std::string _name, std::string _gender, int _age) {
        name = _name;
        gender = _gender;
        age = _age;
    }

    void setName(std::string _name) {
        name = _name;
    }

    std::string getName() {
        return name;
    }

    void setGender(std::string _gender) {
        gender = _gender;
    }

    std::string getGender() {
        return gender;
    }

    void setAge(int _age) {
        age = _age;
    }

    int getAge() {
        return age;
    }

private:
    std::string name;
    std::string gender;
    int age;
};

class Customer : public Person
{
public: 

    Customer() : Person() {

    }

    Customer(std::string _name, std::string _gender, int _age, int _nums_ticket) : Person(_name, _gender, _age) {
        nums_ticket = _nums_ticket;
    }


    void inputData() {
        std::cin.ignore();
        std::cout << "Name: "; std::string name; 
        std::getline(std::cin, name); setName(name);

        std::cout << "Gender: "; std::string gender;
        std::getline(std::cin, gender); setGender(gender);

        std::cout << "Age: "; int age;
        std::cin >> age; setAge(age);

        std::cout << "Enter the number of air tickets: ";
        std::cin >> nums_ticket;
        
    }

    void showData() {
        std::cout << "Name: " << getName() << "\n";

        std::cout << "Gender: " << getGender() << "\n";

        std::cout << "Age: " << getAge() << "\n";

        std::cout << "Number of air tickets: " << nums_ticket << "\n";
    }

    int getNumsTicket() {
        return nums_ticket;
    }

private:
    int nums_ticket;
};

int main()
{
    int n = 0;
    std::cout << "Enter number customers: ";
    std::cin >> n;
    Customer* customer = new Customer[n]; // khai bao mang tren vung nho heap
    Ticket* ticket = new Ticket[n];
    for (int i = 0; i < n; i++) {
        std::cout << "\n";
        customer[i].inputData();
        ticket[i].inputData();
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << "\n";
        customer[i].showData();
        ticket[i].showData(customer[i].getNumsTicket());
    }
}

