#include <iostream>
#include <thread>
#include <cmath> // for calculations like avg, exponents, ect...


int main() {
    // variables
    double numberOfInputs = 0;
    double gradeInputs =0;
    double sumGrade = 0;
    double avgGrade = 0;
    char complete;
    bool inputsComplete = false;


    while (not inputsComplete) {

        std::cout << "Enter in you're grade: " << std::endl;
        std::cin >> gradeInputs;
        // a if then statement to make sure the number given is between 0 - 100
        if (gradeInputs >= 0 && gradeInputs <= 100) {
            ++ numberOfInputs;
            sumGrade = gradeInputs + sumGrade;
            avgGrade = (sumGrade / numberOfInputs);

        } else {
            // this is just a message to send to the person if the number they gave is not between 0 - 100
            std::cout << "Grade must be between 0 and 100" << std::endl;
        }

        std::cout << "Are you finished? (y/n)" << std::endl;
        std::cin >> complete;

        if (complete == 'y' || complete == 'Y') {

            inputsComplete = true;

        }
    }
        std::cout << "You're Average Grade Is: " << avgGrade;


    return 0;
}
