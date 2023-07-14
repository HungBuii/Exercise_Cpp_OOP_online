#include <iostream>
#include "Test.h"
#include "Test_15_minutes.h"


    void Test_15_minutes::show_time_and_score() {
        setTime(15);
        setScore(5);
        std::cout << "\nThis test has a duration of " << getTime() << " minutes and highest score is "<< getScore() << "!\n";
    }

    void Test_15_minutes::questions() {

        std::cout << "\n* Part 1: Multiple-choice questions\n";
        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "1. In the top 20 most expensive transfers of all time, how many are Real Madrid involved in (both buying and selling)?\n";
        std::cout << "A. 5 \t B. 6 \t C. 7 \t D. 8 \n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "2. What is the most expensive player sale Real Madrid has ever made?\n";
        std::cout << "A. Robinho \t B. Angle Di Maria \t C. Mesult Ozil \t D. Gonzalo Higuain \n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "3. Which of the 4 options below is NOT included in the top 20 most expensive player purchases of Real Madrid?\n";
        std::cout << "A. Ronaldo de Lima \t B. Asier Illarramendi \t C. Mateo Kovacic \t D. Mahamadou Diarra \n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "4. How many players has Real Madrid bought during their career with Ballon d'Or?\n";
        std::cout << "A. 6 \t B. 7 \t C. 8 \t D. 9 \n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "5. After Luis Figo, who is the most expensive player bought by Real Madrid directly from Barcelona?\n";
        std::cout << "A. Javier Saviola \t B. Michael Laudrup \t C. Bernd Schuster \t D. Luis Enrique \n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
    }

    void Test_15_minutes::answers() {
        std::cout << "\n* Part 1: Multiple-choice questions\n";
        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "1. In the top 20 most expensive transfers of all time, how many are Real Madrid involved in (both buying and selling)?\n";
        std::cout << "Correct answer: C. 7 \n";
        std::cout << "7 cases (Gareth Bale, Cristiano Ronaldo, James Rodriguez, Mesut Ozil, Kaka, Zinedine Zidane, Angel Di Maria).\n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "2. What is the most expensive player sale Real Madrid has ever made?\n";
        std::cout << "Correct answer: B. Angle Di Maria \n";
        std::cout << "Angel Di Maria, who was sold by Real Madrid for 59.7 million euro to Manchester United.\n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "3. Which of the 4 options below is NOT included in the top 20 most expensive player purchases of Real Madrid?\n";
        std::cout << "Correct answer: A. Ronaldo de Lima \n";
        std::cout << "Ronaldo of Brazil joined Real Madrid from Inter Milan for euro20m in 2002. The man in 20th place is Angel Di Maria (21m euro, from Benfica).\n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "4. How many players has Real Madrid bought during their career with Ballon d'Or?\n";
        std::cout << "Correct answer: D. 9 \n";
        std::cout << "9 players (Alfredo Di Stefano, Raymond Kopa, Ronaldo of Brazil, Zinedine Zidane, Luis Figo, Michael Owen, Fabio Cannavaro, Kaka, Cristiano Ronaldo).\n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";

        std::cout << "5. After Luis Figo, who is the most expensive player bought by Real Madrid directly from Barcelona?\n";
        std::cout << "Correct answer: B. Michael Laudrup \n";
        std::cout << "Michael Laudrup joined Real Madrid directly from Barcelona in 1995 for 8.16 million euro.\n";

        std::cout << "----------------------------------------------------------------------------------------------------------------------\n";
    }