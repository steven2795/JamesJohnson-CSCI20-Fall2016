/* James Johnson
* 10/26/16
* a menu you can choose from
*/

#include <iostream>
using namespace std;

int main(){
    
    string food[100];
    int i = 0;
    
    string menu[10];
    menu[0] = "Hamburger";
    menu[1] = "Cheeseburger";
    menu[2] = "Hot Dog";
    menu[3] = "Chili Dog";
    menu[4] = "Burrito";
    menu[5] = "Quesadilla";
    menu[6] = "Tacos";
    menu[7] = "Tamale";
    menu[8] = "Ice Cream";
    menu[9] = "Donut";
    
    string choice;
    
    while(choice != "Done"){
    
    cout << "What would you like? Enter Done when finished." << endl;    
   
    cout << "Number 1: " << menu[0] << endl;
    cout << "Number 2: " << menu[1] << endl;
    cout << "Number 3: " << menu[2] << endl;
    cout << "Number 4: " << menu[3] << endl;
    cout << "Number 5: " << menu[4] << endl;
    cout << "Number 6: " << menu[5] << endl;
    cout << "Number 7: " << menu[6] << endl;
    cout << "Number 8: " << menu[7] << endl;
    cout << "Number 9: " << menu[8] << endl;
    cout << "Number 10: " << menu[9] << endl;
    
    getline(cin,choice);
    
    if(choice == "Number 1"){
        cout << "You've chosen a Hamburger" << endl;
        food[i] = menu[0];
    }
    else if(choice == "Number 2"){
        cout << "You've chosen a Cheeseburger" << endl;
        food[i] = menu[1];
        
    }
    else if(choice == "Number 3"){
        cout << "You've chosen a Hot Dog" << endl;
        food[i] = menu[2];
        
    }
    else if(choice == "Number 4"){
        cout << "You've chosen a Chili Dog" << endl;
        food[i] = menu[3];
        
    }
    else if(choice == "Number 5"){
        cout << "You've chosen a Burrito" << endl;
        food[i] = menu[4];
        
    }
    else if(choice == "Number 6"){
        cout << "You've chosen a Quesadilla" << endl;
        food[i] = menu[5];
        
    }
    else if(choice == "Number 7"){
        cout << "You've chosen a Tacos" << endl;
        food[i] = menu[6];
        
    }
    else if(choice == "Number 8"){
        cout << "You've chosen a Tamale" << endl;
        food[i] = menu[7];
        
    }
    else if(choice == "Number 9"){
        cout << "You've chosen a Ice Cream" << endl;
        food[i] = menu[8];
        
    }
    else if(choice == "Number 10"){
        cout << "You've chosen a Donut" << endl;
        food[i] = menu[9];
        
    }
    else if(choice != "Done"){
        cout << "Try again." << endl;
        i = i -1;
    }
    
    i++;
    }//end while
    
   for(int c = 0; c <= i; c++){
       cout << food[c] << endl;
   }
            
}//end main