/*James Johnson
* 09/28/16
* Will convert distances into each other
*/

#include <iostream>
using namespace std;

class distanceConverter{
    
    private:
     double miles_;
     double meters_;
     double yards_;
     double inches_;
     
    public:
     distanceConverter(){
         
         miles_ = 0;
         meters_ = 0;
         yards_ = 0;
         inches_ = 0;
     }
     
     distanceConverter(double x){
         
         miles_ = x;
         meters_ = x;
         yards_ = x;
         inches_ = x;
         
     }
    
    void setDistanceFromMiles(double y){
        
        miles_ = y;
        
    }
    double getDistanceFromMiles(){
        return miles_;
    }
    void setDistanceAsFeet(double feet){
        miles_ = feet/5280;
    }
    double getDistanceAsFeet(){
        double feet = miles_ * 5280;
        return feet;
    }
    void setDistanceAsInches(double inch){
        miles_ = inch/63360;
    }   
    double getDistanceAsInches(){
        double inch = miles_ * 63360;
        return inch;
    }
    
    void setDistanceAsMeters(double meters){
        miles_ = meters/1609.344;
    }
    double getDistanceAsMeters(){
        double meters = miles_ * 1609.344;
        return meters;
    }
    void setMetersToMiles(double miles){
        meters_ = miles * 1609.344;
    }
    double getMetersToMiles(){
        double miles = meters_ / 1609.344;
        return miles;
    }
    void setYardsToFeet(double feet){
        yards_ = feet * 3;    
    }
    double getYardsToFeet(){
        double feet = yards_/3;
        return feet;
    }
    void setInchesToMeters(double meters){
        inches_ = meters * 39.37;
    }
    double getInchesToMeters(){
        double meters = inches_ / 39.37;
        return meters;
        
    }
    
    void printMilesConverter(){
        cout << miles_  << " mile(s) is equal to " <<  getDistanceAsFeet() << " feet and " << getDistanceAsInches() << " inches and " << getDistanceAsMeters() << " meters."<< endl;
    }
    void printMetersToMiles(){
        cout << meters_ << " meter(s) is " << getMetersToMiles() << " miles." << endl;
    }
    
    void printYardsToFeet(){
        cout << yards_ << " yard(s) is " << getYardsToFeet() << " feet." << endl;
    }
    
    void printInchesToMeters(){
        cout << meters_ << " inches is " << getInchesToMeters() << " meters" << endl;
    }
};


int main(){
    distanceConverter distance1;  //testing default constructor
    distanceConverter distance2(1); //converting 1 mile into other distances
    distanceConverter distance3(16); //converting 16 meters to miles
    distanceConverter distance4(20); //converting 20 yards to feet
    distanceConverter distance5(100); //converting 100 inches to meters
    distanceConverter distance6(1);  //converting 1 meter to miles
    
    distance1.printMilesConverter();
    distance2.printMilesConverter();
    distance3.printMetersToMiles();
    distance4.printYardsToFeet();
    distance5.printInchesToMeters();
    distance6.printMetersToMiles();
}