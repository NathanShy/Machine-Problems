#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include "payslip.h"

using namespace std;

int main(){
    Payslip p;
    string name;
    double basicSalary;
    int OT_Hours;

    cout << "Enter Name: ";
    getline(cin,name);
    cout << "\n";
    cout << "Please Enter Your Basic Salary: ";
    cin >> basicSalary;
    cout << "\n";
    if (basicSalary < 10000){
        cout << "Salary Can't Be Less Than Php10,000";
        cout << "\n\n";
        basicSalary = 0;
    }
    cout << "Please Enter Your Amount of Overtime (In Hours): ";
    cin >> OT_Hours;
    cout << "\n";
    if (OT_Hours < 1){
        cout << "Minimum Overtime is 1 Hour";
        cout << "\n\n";
        OT_Hours = 0;
        
    }
    cout << "\n";

    p.setPayslip(name, basicSalary, OT_Hours);
    p.setDeterminePayGradeAndTaxRate();
    p.setComputePay();
    p.getPaySlip();



    system("pause");
    return EXIT_SUCCESS;
}