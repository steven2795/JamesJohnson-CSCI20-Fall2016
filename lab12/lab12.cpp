/* James Johnson
* 10/10/16
* nested if and switch case
*/

#include <iostream>
using namespace std;

int main(){
    
    char area;
    string birdColor;
    char eats;
    string water;
   
    cout << "What animal are you?" << endl;
    cout << "Do you like air, land, or water? A for air, L for land and W for water." << endl;
    cin >> area;
    
    switch(area){
        
        case 'A': 
          cout << "Are your feathers black or white?" << endl;
          cin >> birdColor;
          if (birdColor == "black"){
              cout << "You are a crow." << endl;
              return 0;
          }
          else {
              cout << "You are a dove." << endl;
              return 0;
          }
          break;
        
        case 'L':
          cout << "Are you a carnivore, herbivore, or omnivore? C for carnivore, H for herbivore, and O for omnivore." << endl;
          cin >> eats;
          switch(eats){
              case 'C':
               cout << "You are a wolf.";
               return 0;
               break;
              case 'H':
               cout << "You are a deer.";
               return 0;
               break;
              case 'O':
               cout << "You are a monkey.";
               return 0;
               break;
              default:
               cout << "You didnt choose correctly.";
               return 0;
          }
          break;
        
        case 'W':
          cout << "Do you like fresh or salt?" << endl;
          cin >> water;
          if (water == "fresh"){
              cout << "You are a tench.";
              return 0;
          }
          else{
              cout << "You are an angelfish.";
              return 0;
          }
          break;
       
        default:
          cout << "You didnt choose correctly." << endl;
        
    }
    
    return 0;
}