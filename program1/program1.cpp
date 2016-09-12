//James Johnson
//program 1
//program used to calculate a persons weekly pay
//09/12/16
#include <iostream>
using namespace std;

int main(){
    double hours;           //all the variables needed
    double hourlySalary;
    double taxes = .17;
    string name;
    double grossPay;
    double netPay;
    
    cout << "Please enter your name." << endl;   //all output and input needed
    getline(cin, name);
    cout << "How many hours do you work a week?" << endl;
    cin >> hours;
    cout << "What is your hourly salary?" << endl;
    cin >> hourlySalary;
    
    netPay = (hours * hourlySalary) - ((hours * hourlySalary)* taxes); //equations needed to get all variables
    grossPay = hours * hourlySalary;
    
    cout << "Name: " << name << ", Hours: " << hours << ", Rate: "     //slip that is required
         << hourlySalary << ", Gross pay: " << grossPay << ", Net pay: "
         << netPay;
}