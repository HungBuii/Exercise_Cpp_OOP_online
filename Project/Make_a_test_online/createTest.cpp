#include<iostream>
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