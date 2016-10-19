/* James Johnson
* 10/12/16
* loop lab
*/

#include <iostream>
using namespace std;

int main(){
    
    int x = 0;
    while(x < 10){
        cout << "1:" << "0" << x << " pm" << endl;
        x = x +1;
    }
    while(x < 60 ){
        cout << "1:" << x << " pm" << endl;
        x = x +1;
    }
    x = 0;
    while(x < 10){
        cout << "2:" << "0" << x << " pm" << endl;
        x = x + 1;
    }
    while(x < 60){
        cout << "2:" << x << " pm" << endl;
        x = x+1;
    }
    
    int startHour = 0;
    int endHour = 0;
    
    cout << "Please enter a starting hour in military time. Such as 1, 2, 3, etc." << endl;
    cin >> startHour;
    cout << "Please enter an end hour in military time. Such as 1, 2, 3, etc." << endl;
    cin >> endHour;
    
    int i = 1;
    int y = 0;
    
    
    while (i<endHour){
        
        if (startHour < 13){
        
          cout << startHour << ":" << "0" << y << " am" <<  endl;
        
        
          while(y<45){
              y = y + 15;
              cout << startHour << ":" << y << " am" << endl;
              
          }
        
        i++;
        startHour = startHour + 1;
        y = 0;
        
        }
        else{
            cout << startHour << ":" << "0" << y << " pm" <<  endl;
        
        
        while(y<45){
            y = y + 15;
            cout << startHour << ":" << y << " pm" << endl;
        }
        
        startHour = startHour + 1;
        y = 0;
        i++;
        }
    }//end while
        
        
    
        
        
}//end main