/* James Johnson
* 10/19/16
* Debugging lab Checking Letter Case
*/

#include <iostream>
using namespace std;

//This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase latter, or neither

int main(){
    //Read a character in
    char ch;
    cout<<"Please enter a character:";
    cin >> ch;
    // check--is it a letter??
    if(ch >= 'A'){
        if(ch <= 'Z'){
            cout<<"Yes, that is an uppercase letter." << endl;
            
        }
        
        else if(ch >= 'a'){
            if(ch <= 'z'){
                cout << "Yes, that is a lowercase letter" << endl;
                
            }
        }
        else{
            cout<<"Not a letter"<< endl;
        }
    }
    
     else{
            cout<<"Not a letter"<< endl;
        }
    return 0;
}//end main