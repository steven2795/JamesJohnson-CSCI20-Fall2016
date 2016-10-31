/* James Johnson
* 10/31/16
* a menu you can choose with inventory and prices included
*/


#include <iostream>
using namespace std;

int main(){
   
    float totalCost = 0.0; 
    string food[100];
    int i = 0;
    float price[10];
    int inventory[10];
    
    price[0] = 2.50;
    price[1] = 3.00;
    price[2] = 2.00;
    price[3] = 2.50;
    price[4] = 5.00;
    price[5] = 4.50;
    price[6] = 1.00;
    price[7] = 3.50;
    price[8] = 6.00;
    price[9] = 2.00;
    
    inventory[0] = 9;
    inventory[1] = 8;
    inventory[2] = 6;
    inventory[3] = 15;
    inventory[4] = 11;
    inventory[5] = 18;
    inventory[6] = 6;
    inventory[7] = 7;
    inventory[8] = 8;
    inventory[9] = 12;
    
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
   
    while(choice != "Done"){
    
   
    
    getline(cin,choice);
    
    if(choice == "Number 1"){
       
       if(inventory[0] > 0){
          cout << "You've chosen a Hamburger" << endl;
          food[i] = menu[0];
          totalCost += price[0];
          inventory[0] -= 1;
          cout << "That will be " << price[0] << "0$ and we now have " << inventory[0] << " Hamburgers left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice == "Number 2"){
        
        if(inventory[1] > 0){
          cout << "You've chosen a Cheeseburger" << endl;
          food[i] = menu[1];
          totalCost += price[1];
          inventory[1] -= 1;
          cout << "That will be " << price[1] << ".00$ and we now have " << inventory[1] << " Cheeseburgers left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice == "Number 3"){
        
        if(inventory[2] > 0){
          cout << "You've chosen a Hot Dog" << endl;
          food[i] = menu[2];
          totalCost += price[2];
          inventory[2] -= 1;
          cout << "That will be " << price[2] << ".00$ and we now have " << inventory[2] << " Hot Dogs left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice == "Number 4"){
        
        if(inventory[3] > 0){
          cout << "You've chosen a Chili Dog" << endl;
          food[i] = menu[3];
          totalCost += price[3];
          inventory[3] -= 1;
          cout << "That will be " << price[3] << "0$ and we now have " << inventory[3] << " Chili Dogs left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice == "Number 5"){
        
        if(inventory[4] > 0){
          cout << "You've chosen a Burrito" << endl;
          food[i] = menu[4];
          totalCost += price[4];
          inventory[4] -= 1;
          cout << "That will be " << price[4] << ".00$ and we now have " << inventory[4] << " Burritos left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice == "Number 6"){
        
        if(inventory[5] > 0){
          cout << "You've chosen a Quesadilla" << endl;
          food[i] = menu[5];
          totalCost += price[5];
          inventory[5] -= 1;
          cout << "That will be " << price[5] << "0$ and we now have " << inventory[5] << " Quesadillas left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice == "Number 7"){
        
        if(inventory[6] > 0){
          cout << "You've chosen a Taco" << endl;
          food[i] = menu[6];
          totalCost += price[6];
          inventory[6] -= 1;
          cout << "That will be " << price[6] << ".00$ and we now have " << inventory[6] << " Tacos left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice == "Number 8"){
        
        if(inventory[7] > 0){
          cout << "You've chosen a Tamale" << endl;
          food[i] = menu[7];
          totalCost += price[7];
          inventory[7] -= 1;
          cout << "That will be " << price[7] << "0$ and we now have " << inventory[7] << " Tamales left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice == "Number 9"){
        
        if(inventory[8] > 0){
          cout << "You've chosen a Ice Cream" << endl;
          food[i] = menu[8];
          totalCost += price[8];
          inventory[8] -= 1;
          cout << "That will be " << price[8] << ".00$ and we now have " << inventory[8] << " Ice Creams left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice == "Number 10"){
        
        if(inventory[9] > 0){
          cout << "You've chosen a Donut" << endl;
          food[i] = menu[9];
          totalCost += price[9];
          inventory[9] -= 1;
          cout << "That will be " << price[9] << ".00$ and we now have " << inventory[9] << " Donuts left." << endl;
        }
        else{
            cout << "Sorry we are out of those. Please choose something else." << endl;
        }
    }
    else if(choice != "Done"){
        cout << "Try again." << endl;
        i = i -1;
    }
    
    i++;
    }//end while
    
    cout << "Your order is: " << endl;
    
   for(int c = 0; c <= i; c++){
       
       cout << food[c] << endl;
       
   }
      
       cout << "Which comes out to " << totalCost << "$." << endl;     
            
}//end main