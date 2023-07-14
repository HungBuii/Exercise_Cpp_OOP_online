#include <iostream>
#include "Test.h"
#include "Test_30_minutes.h"


void Test_30_minutes::show_time() {
    setTime(30);
    std::cout << "\nThis test has a duration of " << getTime() << " minutes!\n";
}

void Test_30_minutes::questions() {
    Test_15_minutes::questions();

    std::cout << "\n* Part 2: Essay questions\n";
    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "1. Who is the fastest hat-trick player in Premier League history?\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "2. What year was the first English Premier League season since the name change from First Division?\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "3. Which team won the English Premier League first?\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
}

void Test_30_minutes::answers() {
    Test_15_minutes::answers();
    std::cout << "\n* Part 2: Essay questions\n";
    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "1. Who is the fastest hat-trick player in Premier League history?\n";
    std::cout << "Answer: Sadio Mane (2 minutes 56 seconds in the match between Southampton and Aston Villa in 2015)\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "2. What year was the first English Premier League season since the name change from First Division?\n";
    std::cout << "Answer: 1992-1993\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

    std::cout << "3. Which team won the English Premier League first?\n";
    std::cout << "Answer: Manchester United\n";

    std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
}