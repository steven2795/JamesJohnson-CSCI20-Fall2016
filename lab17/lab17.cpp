/* James Johnson
* 11/2/16
* will take full name and change into username'
*/

#include <iostream>
using namespace std;

int main(){
    
    
    char firstName[11] = {'0'};
    char lastName[21] = {'0'};
    int i;
    int n;
    int choice;
    
    cout << "Please enter your first name." << endl;
    cin >> firstName;
    for( i = 0; firstName[i] != '\0'; i++){
        cout << firstName[i];
    }
    cout << endl;
   
    cout << "Please enter your last name" << endl;
    cin >> lastName;
    for( n = 0; lastName[n] != '\0'; n++){
        cout << lastName[n];
    }
    cout << endl;
    
    
    while(i > 10){
    if(i > 10){
        cout << "Your first name is too large. Please shorten it." << endl;
        cin >> firstName;
        for( i = 0; firstName[i] != '\0'; i++){
        cout << firstName[i];
    }//end for loop
    cout << endl;
     }//end if
    }//end while
    
   
    while(n > 20){
    if(n > 20){
       cout << "Your last name is too large. Please shorten it." << endl;
       cin >> lastName; 
    for( n = 0; lastName[n] != '\0'; n++){
        cout << lastName[n];
    }//end for loop
    cout << endl;
     }//end if
     }//end while
     

     if(firstName[0] == lastName[0] && firstName[1] == lastName[1] && firstName[2] == lastName[2] && firstName[3] == lastName[3] && firstName[4] == lastName[4] && firstName[5] == lastName[5] &&
        firstName[6] == lastName[6] && firstName[7] == lastName[7] && firstName[8] == lastName[8] && firstName[9] == lastName[9] && firstName[10] == lastName[10] && firstName[11] == lastName[11] ){
        cout << "Warning your names match. Please re-enter first name." << endl;
        cin >> firstName;
        cout << "Now last name." << endl;
        cin >> lastName;
     }
     
    
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Which of these three usernames would you like? 1,2, or 3." << endl;
    cout << "1 " << firstName[0] << firstName[1] << lastName << endl;
    cout << "2 " << firstName << lastName << endl;
    cout << "3 " << firstName[0]  << lastName << endl;
    
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