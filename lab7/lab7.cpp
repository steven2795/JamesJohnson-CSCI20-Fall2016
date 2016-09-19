#include <iostream>
using namespace std;

void song(){
    
    cout << "A hunting we will go, a hunting we will go" << endl;
    cout << "Heigh ho, the dairy-o, a hunting we will go" << endl;
    cout << "A hunting we will go, a hunting we will go" << endl;
    
}

void chorus(string animal, string action){
    
    cout << "We'll catch a " << animal << " and " << action << endl;
    cout << "And then we'll let him go" << endl;
    
}

int main (){
    
    song();
    chorus("fox" , "put him in a box");
    cout << endl;
    
    song();
    chorus("fish","put him on a dish");
    cout << endl;
   
    song();
    chorus("bear", "cut his hair");
    cout << endl;
    
    song();
    chorus("pig", "dance a little jig");
    cout << endl;
   
    song();
    chorus("giraffe", "make him laugh");
    cout << endl;
    
}