#include <iostream>

class Woman
{
public:
    std::string fullname;
    int age;

    static int numberOfWoman; // tu khoa static duoc khoi tao o bien giong nhu mot bien toan cuc thong thuong va static thuong gan lien voi class
                              // bien static se khong phu thuoc vao mot object nao duoc khoi tao o duoi ham main
    static void what() {
        std::cout << "Woman is to be loved!\n";
        std::cout << "There are " << numberOfWoman << " womans in program now.\n";
    }


    Woman()
    {
        fullname = "Unknown";
        age = 0;
    }

    Woman(std::string fn, int a)
    {
        fullname = fn;
        age = a;
        numberOfWoman++;
    }

    void introduce()
    {
        std::cout << "My name is " << fullname << ".\n";
        std::cout << "Now I am " << age << " years old.\n";
    }
};

int Woman::numberOfWoman = 0; // khi su dung static o trong class thi phai khoi tao bien ra ngoai va pham vi bien la global
                              // bien Woman::numberOfWoman giong mot bien thong thuong            

int main()
{
    Woman* hariwon = new Woman("Hariwon", 35);
    std::cout << Woman::numberOfWoman << "\n";

    Woman::what(); // goi ham static what() trong class

}

