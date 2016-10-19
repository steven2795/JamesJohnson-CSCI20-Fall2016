/* James Johnson
* 10/12/16
* for loop lab
*/

#include <iostream>
using namespace std;

int main(){
    
    int x = 0;
    int i;
    for(i = 0; i<10; ++i){
        cout << "1:" << "0" << x << " pm" << endl;
        x = x +1;
    }
    for(i = 0; i < 50; ++i ){
        cout << "1:" << x << " pm" << endl;
        x = x +1;
    }
    x = 0;
    for(i = 0; i < 10; ++i){
        cout << "2:" << "0" << x << " pm" << endl;
        x = x + 1;
    }
    for(i = 0; i < 50; ++i){
        cout << "2:" << x << " pm" << endl;
        x = x+1;
    }
    
    int startHour = 0;
    int endHour = 0;
    
    cout << "Please enter a starting hour in military time. Such as 1, 2, 3, etc." << endl;
    cin >> startHour;
    cout << "Please enter an end hour in military time. Such as 1, 2, 3, etc." << endl;
    cin >> endHour;
   
    
    
    for (i=0; i < endHour; ++i){
        
         
        
          for(i = startHour; i<endHour; ++i){
              
             if (startHour < 12){
              
              cout << startHour << ":00 am" << endl;
              cout << startHour << ":" << "15" << " am" << endl;
              cout << startHour << ":" << "30" << " am" << endl;
              cout << startHour << ":" << "45" << " am" << endl;
              startHour = startHour + 1;
             }
             
             else{
                 for(i = startHour; i<endHour; ++i){
              
                  cout << startHour << ":00 pm" << endl;
                  cout << startHour << ":" << "15" << " pm" << endl;
                  cout << startHour << ":" << "30" << " pm" << endl;
                  cout << startHour << ":" << "45" << " pm" << endl;
                  startHour = startHour + 1;
             
             }
              
          }
        
          }
        
       
        
       
       
        
    }//end for loop
        
        
    
        
        
}//end main