#include <iostream>
#include <string>

class Patient
{
public: 
    Patient(int _ID, std::string _fullname, std::string _Datetime, std::string _code, float _money) {
        ID = _ID;
        fullname = _fullname;
        Datetime = _Datetime;
        code = _code;
        money = _money;
    }

    void setID(int _ID) {
        ID = _ID;
    }

    int getID() {
        return ID;
    }

    void setFullname(std::string _fullname) {
        fullname = _fullname;
    }

    std::string getFullname() {
        return fullname;
    }

private:
    int ID;
    std::string fullname;
    std::string Datetime;
    std::string code;
    float money;
};

int main()
{
    Patient* patient_1 = new Patient(1, "Nguyen Van A", "1/1/2000", "ABC123", 500.000);
    patient_1->setID(0);
    std::cout << patient_1->getID() << "\n";
    patient_1->setFullname("Nguyen Van B");
    std::cout << patient_1->getFullname() << "\n";
}

