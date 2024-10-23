#include <iostream>
#include <thread>
#include <cmath> // for calculations like avg, exponents, ect...

void askUserGrade();
void errorMessage(const std::string& message);

int main() {
    // variables
    int numberOfInputs {};
    double gradeInputs {};
    double sumGrade {};
    double avgGrade {};
    char complete {};
    bool inputsComplete {};


    while (not inputsComplete) {
        askUserGrade();
        std::cin >> gradeInputs;
        // a if then statement to make sure the number given is between 0 - 100
        if (gradeInputs >= 0 && gradeInputs <= 100) {
            ++ numberOfInputs;
            sumGrade = gradeInputs + sumGrade;
            avgGrade = (sumGrade / numberOfInputs);

            std::cout << "Are you finished? (y/n)" << '\n';
            std::cin >> complete;

        } else {
            // this is just a message to send to the person if the number they gave is not between 0 - 100
            errorMessage("Please enter a number between 0 and 100");
        }


        if (complete == 'y' || complete == 'Y') {

            if (numberOfInputs == 1) {
                errorMessage("Please enter more than one grade");

            } else {
                inputsComplete = true;
            }

        }
    }
        std::cout << "You're Average Grade Is: " << avgGrade;


    return 0;
}
