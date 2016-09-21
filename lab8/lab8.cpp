#include <iostream>  //James Johnson
using namespace std; //lab8 pounds to kilos, kilos to pounds

double ToKilo( double pounds){ 
    
   double kilograms = pounds * (1/2.2046226218);  //does the equation needed to find kilograms
    return kilograms;  //gives you how many kilograms are in the pounds
    
}

double ToPounds(double kilos){
    
    double lbs = kilos * 2.2046226218; //does equation neeeded to find pounds
    return lbs; //will give pounds
    
}

int main(){
    double totalPounds;
    double totalKilos;
    
    cout << "How many pounds are you converting into kilograms?" << endl;
    cin >> totalPounds;
    
    cout << "That many pounds turns into " << ToKilo(totalPounds) << " kilograms." << endl;
    cout << endl;
    cout << "How many kilograms are you converting into pounds?" << endl;
    cin >> totalKilos;
    
    cout << "That many kilograms turns into " << ToPounds(totalKilos) << " pounds." << endl;;
}