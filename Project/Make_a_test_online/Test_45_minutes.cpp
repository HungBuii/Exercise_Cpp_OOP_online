#include<iostream>
#include "Test.h"
#include "Test_45_minutes.h"

void Test_45_minutes::show_time() {
    setTime(45);
    std::cout << "\nThis test has a duration of " << getTime() << " minutes!\n";
}

void Test_45_minutes::questions() {
    Test_30_minutes::questions();

    std::cout << "4. How many clubs competed in the first English Premier League season?\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "5. Which three players share the Golden Shoe award in 2018/19?\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "6. The fastest goal in Premier League history was scored at 7.69 seconds. Who made it?\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
}

void Test_45_minutes::answers() {
    Test_30_minutes::answers();

    std::cout << "4. How many clubs competed in the first English Premier League season?\n";
    std::cout << "Answer: 22\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "5. Which three players share the Golden Shoe award in 2018/19?\n";
    std::cout << "Answer: Pierre-Emerick Aubameyang, Mohamed Salah and Sadio Mane\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "6. The fastest goal in Premier League history was scored at 7.69 seconds. Who made it?\n";
    std::cout << "Answer: Shane Long (in Southampton vs Watford season 2018/19)\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
}