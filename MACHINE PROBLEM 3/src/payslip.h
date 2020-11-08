#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Payslip{
    private:
    string pName, pPayGrade;
    double pBasicSalary, pTaxRate, pOT_Pay, pGrossPay, pNetPay, pWithholdingTax;
    int pOT_Hours;
    double sss = 500;
    double pagIbig = 200;
    double philHealth = 100;
    
    public:
    void setPayslip(string name, double basicSalary , int OT_Hours){
        pName = name;
        pBasicSalary = basicSalary;
        pOT_Hours = OT_Hours;
    }

    void setDeterminePayGradeAndTaxRate(){
        if (pBasicSalary < 15000){
            pPayGrade = "Pay Grade A";
            pTaxRate = .1;
        }
        else if (pBasicSalary < 20000){
            pPayGrade = "Pay Grade B";
            pTaxRate = .1;
        }
        else if (pBasicSalary < 25000){
            pPayGrade = "Pay Grade A";
            pTaxRate = .15;
        }
        else if (pBasicSalary < 30000){ 
            pPayGrade = "Pay Grade B";
            pTaxRate = .15;
        }
        else if (pBasicSalary < 35000){ //ERROR lots of numbers
            pPayGrade = "Pay Grade A";
            pTaxRate = .2;
        }
        else if (pBasicSalary < 40000){
            pPayGrade = "Pay Grade B";
            pTaxRate = .2;
        }
        else if (pBasicSalary < 45000){
            pPayGrade = "Pay Grade A";
            pTaxRate = .25;
        }
        else if (pBasicSalary < 50000){
            pPayGrade = "Pay Grade B";
            pTaxRate = .25;
        }
        else if (pBasicSalary < 55000){
            pPayGrade = "Pay Grade A";
            pTaxRate = .3;
        }
        else if (pBasicSalary > 54999){
            pPayGrade = "Pay Grade B";
            pTaxRate = .3;
        }
        else if(pBasicSalary = 0){
            pPayGrade = "Invalid Pay Grade";
            pTaxRate = 0;
        
        }
        
    }

    void setComputePay(){
        
        pOT_Pay = pOT_Hours * (pBasicSalary * 1);
        pGrossPay = pBasicSalary + pOT_Pay;
        pWithholdingTax = pGrossPay * pTaxRate;
        pNetPay = pGrossPay - pWithholdingTax - (sss + pagIbig + philHealth);
    }
    
    string moneyFormat(double value){
        ostringstream format;
        format << fixed << setprecision(2) << showpoint << value;
        string str = format.str();

        int n = str.size();
        for (int i = n - 6; i > 0; i -=3) str.insert(i, 1, ',');
        str.insert (0, "Php");
        return str;

    }

    void getPaySlip(){
        cout << "Employee Name   : " << pName << "\n";
        cout << "Basic Salary    : " << moneyFormat (pBasicSalary) << "\n";
        cout << "Pay Grade       : " << pPayGrade << "\n";
        cout << "No. of OT Hours : " << pOT_Hours << "\n";
        cout << "OT Pay          : " << moneyFormat(pOT_Pay) << "\n";
        cout << "Gross Pay       : " << moneyFormat(pGrossPay) << "\n";
        cout << "Withholding Tax : " << moneyFormat(pWithholdingTax) << "\n";
        cout << "Net Pay         : " << moneyFormat(pNetPay) << "\n";

    }

};
