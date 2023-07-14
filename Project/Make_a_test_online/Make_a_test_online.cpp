#include <iostream>
#include <string>
#include "Test.h"
#include "Test_15_minutes.h"
#include "Test_30_minutes.h"
#include "Test_45_minutes.h"

Test* createTest(int t)
{
    if (t == 15) {
        Test* test_15 = new Test_15_minutes;
        return test_15;
    }
    else if (t == 30) {
        Test* test_30 = new Test_30_minutes;
        return test_30;
    }
    else if (t == 45) {
        Test* test_45 = new Test_45_minutes;
        return test_45;
    }
}

int main()
{
    do
    {
        int t = 0;
        std::cout << "\nTime test score(15 minutes, 30 minutes, 45 minutes or 0->exit): ";
        std::cin >> t;
        if (t == 15) {
            Test* test = createTest(t);
            test->show_time_and_score();
            test->questions();

            bool select = 0;
            std::cout << "\nDo you want to display the results of this test " << t << " minutes?(0. No | 1. Yes) \n";
            std::cin >> select;
            if (select == 1) {
                test->answers();
            }
            else continue; // exit the loop with t = 15;
            delete test;
        }
        else if (t == 30) {
            Test* test = createTest(t);
            test->show_time_and_score();
            test->questions();

            bool select = 0;
            std::cout << "\nDo you want to display the results of this test " << t << " minutes?(0. No | 1. Yes) \n";
            std::cin >> select;
            if (select == 1) {
                test->answers();
            }
            else continue;
            delete test;
        }
        else if (t == 45) {
            Test* test = createTest(t);
            test->show_time_and_score();
            test->questions();

            bool select;
            std::cout << "\nDo you want to display the results of this test " << t << " minutes?(0. No | 1. Yes) \n";
            std::cin >> select;
            if (select == 1) {
                test->answers();
            }
            else continue;
            delete test;
        }
        else if (t == 0) {
            return 0;
        }
        else {
            std::cout << "\nThere is no such test. Try re-entering\n";
        }
    } while (true);



    return 0;
}

