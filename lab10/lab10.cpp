/* James Johnson
* 10/3/16
* program will do equations
*/

#include <iostream>
using namespace std;

int main(){
    
    int suzyAge = 25;
    int johnAge = 21;
    cout << "The equation Suzy is younger than john is: " << (suzyAge < johnAge) << "." << endl;
    
    int x = 7;
    int y = 7;
    cout << "The equation is x greater than or equal to y is: " << (x>=y) << endl;
    
    int a = 1;
    int b = 9;
    cout << "The equation is a equal to b is: " << (a==b) << endl;
    
    int limit = 20;
    int count = 10;
    cout << "The equation limit times count then divided by 2 is greater than 0 is: " << ((limit*count)/2 > 0) << endl;
    
    int t = -4;
    int z = 0;
    cout << "The equation is t greater than 5 or is z less than 2 is: " << (t>5||z<2) << endl;
    
    int variable = -5;
    cout << "The equation not is variable greater than 0 is: " << (!(variable>0) ) << endl;
    
    int c =16;
    cout << "The equation is a divided by 4 less than 8 and is a greater than or equal to 4 is: " << (a/4<8&&a>=4) << endl;
    
    int d = -2;
    int e =5;
    cout << "The equation is x times y less than 10 or is y times z less than 10 is: " << (x*y<10||y*z<10) << endl;
    
    int j = -2;
    int k = 5;
    int l = 4;
    cout << "The equation not is j times l is less than 10 or is y divided by x times 4 less than y times 2 is: " << (!(j*l<10)||y/x*4<y*2) << endl;
    
    
}