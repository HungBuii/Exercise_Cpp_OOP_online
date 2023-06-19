#include <iostream>
#include <vector>

struct BodySize
{
    std::vector<int> size3ring;
    float weight;
};

class Woman
{
public:
    std::string fullname;
    BodySize bodySize;

    void makeUp() {

    }

    void introduce() {
        std::cout << "Hi!\n";
    }
private:
    int age;
};

int main()
{
    Woman* hariwon = new Woman; 
    hariwon->fullname = "Hariwon";
    hariwon->bodySize.weight = 50;
//  (cap phat dong ->) (cap phat tinh .)



}

