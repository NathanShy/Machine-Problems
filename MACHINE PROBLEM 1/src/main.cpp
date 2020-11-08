#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    string studentName, collegeProgram, printSection;
    int yearLevel;
    double unitsEnrolled, tuition, downPayment, balance;

    cout << "Student Name: ";
    getline(cin, studentName);
    cout << "Program/Course: ";
    getline(cin, collegeProgram);
    cout << "Year Level: ";
    cin >> yearLevel;
    cout << "No. of Units: ";
    cin >> unitsEnrolled;
    cout << endl;

    switch (yearLevel){
        case 1:
        printSection = "Freshman";
        break;
        case 2:
        printSection = "Sophomore";
        break;
        case 3:
        printSection = "Junior";
        break;
        case 4:
        printSection = "Senior";
        break;
        case 5:
        printSection = "Senior";
        break;
        default:
        printSection = "Invalid Section";
    }
    if (yearLevel == 1){
        tuition = unitsEnrolled * 1500;
    }else if (yearLevel == 2){
        tuition = unitsEnrolled * 1800;
    }else if (yearLevel == 3){
        tuition = unitsEnrolled * 2000;
    }else if (yearLevel == 4){
        tuition = unitsEnrolled * 2300;
    }else if (yearLevel == 5){
        tuition = unitsEnrolled * 2300;
    }else{
        tuition = 0;
    }

    downPayment = tuition * .3;
    balance = tuition - downPayment;

    cout << "Student Name: " << studentName << endl;
    cout << "Program/ Course: " << collegeProgram << endl;
    cout << "Year Name: " << printSection << endl;
    cout << "No. of Units: " << unitsEnrolled << endl;
    cout << "Tuition Fee: " << tuition << endl;
    cout << "Downpayment: " << downPayment << endl;
    cout << "Balance: "  << balance << endl; 

    system ("pause");
    return EXIT_SUCCESS;

}