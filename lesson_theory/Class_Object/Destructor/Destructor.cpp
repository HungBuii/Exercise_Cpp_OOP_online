#include <iostream>

class Message;

class Woman
{
public:
    std::string fullname;
    int age;
    Message* msg;

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

    ~Woman() // chi dung cho cap phat dong con cap phat tinh se tu dong huy
            // ham huy nen goi khi co nhung bien thanh vien co con tro 
    {
        std::cout << "Deleted a new woman.\n";
        delete msg;
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
    delete hariwon;


}

