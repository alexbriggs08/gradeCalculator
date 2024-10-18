#include <iostream>
#include <thread>


int main() {
    // variables
    int numberOfInputs = 0;
    int gradeInputs;
    int avgGrade = 0;
    char complete;
    bool inputsComplete = false;

    std::cout << "Enter in you're grade: ";
    std::cin >> gradeInputs; ++ numberOfInputs; // gets the grade input and adds 1 to the number of inputs
    std::cout << numberOfInputs <<std::endl; // displays the number of inputs temp
    avgGrade = (gradeInputs / numberOfInputs);
    // copied ^
    std::cout << "Enter in you're grade: ";
    std::cin >> gradeInputs; ++ numberOfInputs;
    std::cout << numberOfInputs <<std::endl;
    avgGrade = (gradeInputs / numberOfInputs);

    std::cout << "Are you complete?" << std::endl;
    std::cin >> complete;

    if (complete == 'y' || complete == 'Y') {

        inputsComplete = true;

    }


if (inputsComplete) {

    std::cout << avgGrade << std::endl;

} else {

    std::cout << "Enter in you're grade: ";
    std::cin >> gradeInputs; ++ numberOfInputs;
    std::cout << numberOfInputs <<std::endl;
    avgGrade = (gradeInputs / numberOfInputs);
    std::cout << "Are you complete?" << std::endl;

}

    std::cout << "You're Average Grade Is: " << avgGrade;


    return 0;
}
