#include <iostream>
#include <string>

class Woman
{
public:
    std::string fullname;
    float weight;

    void makeUp() {

    }

    void introduce() {
        age = 34;
        std::cout << "Hi! I'm " << age << " years old.\n";
    }

private:
    int age;
};

int main()
{
//    Woman ngoc_trinh; // cap phat tinh (stack)
    Woman* hariwon = new Woman; // cap phat dong (heap) * recommend (memory heap >> memory stack)
    hariwon->fullname = "Hariwon";
    
    std::cout << hariwon->fullname << "\n";

    hariwon->introduce();

    return 0;
}
