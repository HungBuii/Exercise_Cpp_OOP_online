#include <iostream>
#include <string>

class Woman
{
public:
    

    Woman(std::string fn, int a)
    {
        fullname = fn;
        age = a;
    }

    void setAge(int a) // ghi du lieu
    {
        age = a;
    }

    int getAge() // doc du lieu
    {
        return age;
    }

    
private: // tat ca nhung du lieu nen duoc de thanh private (tinh chat cua encapsulation)
    std::string fullname;
    int age;
};

int main()
{
    Woman* hariwon = new Woman("Hariwon", 35);
    hariwon->setAge(36);
    std::cout << hariwon->getAge();

    return 0;
}