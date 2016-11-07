/* James Johnson
* 11/2/16
* will take full name and change into username
*/

#include <iostream>
using namespace std;

int main(){
    
    
    string firstName;
    string lastName;
    int choice;
    
    cout << "Please enter your first name." << endl;
    cin >> firstName;
    
    cout << "Please enter your last name" << endl;
    cin >> lastName;
    
    while(firstName.length() > 10){
    if(firstName.length() > 10){
        cout << "Your first name is too long please shorten it." << endl;
        cin >> firstName;
    }//end if 
    }//end while
    
    while(lastName.length() > 20){
    if(lastName.length() > 20){
        cout << "Your last name is too long please shorten it." << endl;
        cin >> lastName;
    }// end if
    }// end while
  
    while(firstName == lastName){  
    if(firstName == lastName){
        cout << "Warning your names match. Please re-enter first name." << endl;
        cin >> firstName;
        cout << "Now last name." << endl;
        cin >> lastName;
    }//end if
    }//end while

     
     
    
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Which of these three usernames would you like? 1,2, or 3." << endl;
    cout << "1 " << firstName.at(0) << firstName.at(1) << lastName << endl;
    cout << "2 " << firstName << lastName << endl;
    cout << "3 " << firstName.at(0)  << lastName << endl;
    
   while(true){
    cin >> choice;
    
    if(choice == 1){
       cout << "1 " << firstName[0] << firstName[1] << lastName << endl; 
       break;
    }
    else if(choice == 2){
        cout << "2 " << firstName << lastName << endl;
        break;
    }
    else if(choice == 3){
       cout << "3 " << firstName[0]  << lastName << endl; 
       break;
    }
    else{
        cout << "You did not make a valid choice. Try again." << endl;
    }
   }
}