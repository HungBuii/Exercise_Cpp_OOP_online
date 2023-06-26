#include <iostream>
#include <string>

class Woman
{
public:


    Woman(std::string fn, int a, float w, float h)
    {
        fullname = fn;
        age = a;
        weight = w;
        height = h;
    }

    void setAge(int a) 
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }

    float getWeight()
    {
        return weight;
    }

    float getHeight()
    {
        return height;
    }

private: 
    std::string fullname;
    int age;
    float weight;
    float height;
};

class HealChecker
{
public: 
    void check(Woman* woman) {
        weight = woman->getWeight();
        height = woman->getHeight();
        boolPressure = 130;
        heartBeat = 80;
    }

    std::string getResult() {
        float bmi = weight / (height * height);
        if ( bmi >= 18.5 && bmi <= 24.9 && 
            boolPressure >= 120 && boolPressure < 140 && 
            heartBeat >= 60 && heartBeat < 100 ) 
        {
            return "Normal";
        }
        return "Abnormal";
    }

private:
    float weight;
    float height;
    int boolPressure;
    int heartBeat;
};

int main()
{
    Woman* hariwon = new Woman("Hariwon", 35, 60, 1.65);
    
    HealChecker* checker = new HealChecker;
    checker->check(hariwon);
    std::string result = checker->getResult();
    std::cout << result;

    return 0;
}