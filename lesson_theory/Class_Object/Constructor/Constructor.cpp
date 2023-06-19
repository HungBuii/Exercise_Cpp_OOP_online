#include <iostream>

class Woman
{
public: 
    std::string fullname;
    int age;

    Woman()
    {
        fullname = "Unknown";
        age = 0;
    }

    Woman(std::string fn, int a)
    {
        fullname = fn;
        age = a;
    }

    void introduce()
    {
        std::cout << "My name is " << fullname << ".\n";
        std::cout << "Now I am " << age << " years old.\n";
    }
};

int main()
{
    Woman* hariwon = new Woman("Hariwon", 35);
    hariwon->introduce();

    std::cout << "\n";

    Woman* ngoctrinh = new Woman("Ngoc Trinh", 25);
    ngoctrinh->introduce();
}

