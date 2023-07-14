#include <iostream>
#include <string>
#include "Test.h"
#include "Test_15_minutes.h"
#include "Test_30_minutes.h"
#include "Test_45_minutes.h"

int main()
{
    do
    {
        int t = 0;
        std::cout << "\nTime test score(15 minutes, 30 minutes, 45 minutes or 0->exit): ";
        std::cin >> t;
        if (t == 15) {
            Test_15_minutes* test_15 = new Test_15_minutes;
            test_15->show_time_and_score();
            test_15->questions();

            bool select;
            std::cout << "\nDo you want to display the results of this test " << t << "?(0. No | 1. Yes) \n";
            std::cin >> select;
            if (select == 1) {
                test_15->answers();
            }
            else continue; // exit the loop with t = 15;
        }
        else if (t == 30) {
            Test_30_minutes* test_30 = new Test_30_minutes;
            test_30->show_time_and_score();
            test_30->questions();

            bool select;
            std::cout << "\nDo you want to display the results of this test " << t << "?(0. No | 1. Yes) \n";
            std::cin >> select;
            if (select == 1) {
                test_30->answers();
            }
            else continue;
        }
        else if (t == 45) {
            Test_45_minutes* test_45 = new Test_45_minutes;
            test_45->show_time_and_score();
            test_45->questions();

            bool select;
            std::cout << "\nDo you want to display the results of this test " << t << "?(0. No | 1. Yes) \n";
            std::cin >> select;
            if (select == 1) {
                test_45->answers();
            }
            else continue;
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

