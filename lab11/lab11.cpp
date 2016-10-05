/* James Johnson
* 10/5/16
* if else program 
*/

#include <iostream>
using namespace std;

int main(){
    
    string name;
    double wages;
    double interest;
    double unemployment;
    double withheld;
    string status;
    double taxes;
    double taxOwed;
    
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "married or single?" << endl;
    cin >> status;
    cout << "What are your wages?" << endl;
    cin >> wages;
    cout << "How much money has been withheld?" << endl;
    cin >> withheld;
    
    double agi = wages;
    
    if (status == "single"){
    wages = wages - 10000;
    }
    else{
        wages = wages - 20000;
    }
    if (wages < 0){
        cout << "You owe nothing!";
        return 0;
    }
    if (status == "single") {
       if (wages <= 8925){
        taxes = wages * .10;
       }
       else if (wages <= 36250){
        taxes = 892.5 + ((wages - 8925) * .15);
       }
       else if (wages <= 87850){
         taxes = 4991.25 + ((wages - 36250)*.25);
       }
       else {
        taxes = 17891.25 + ((wages - 87850)*.28);
       }
    }
    else {
        if (wages  <= 17850){
            taxes = wages * .10;
        }
        else if(wages <= 72500){
            taxes = 1785 + ((wages - 17850) * .15);
        }
        else {
            taxes = 9982.5 + ((wages - 72500) * .28);
        }
    }
    
    taxOwed = taxes - withheld;
    
    cout << "Name: " << name << endl;
    cout << "Total Gross Adjusted Income: " << agi << endl;
    cout << "Total tax owed: " << taxOwed << endl;
    if(taxOwed > 0){
        cout << name << " owes " << taxOwed << " in taxes.";
    }
    else{
        cout << name << " is entitled to " << -taxOwed << "$";
    }
    
}