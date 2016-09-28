//James Johnson
//09/26/16
//will convert temperature between kelvin fahrenheit and celsius

# include <iostream>
using namespace std;

class TemperatureConverter  {
    
    private: 
      double kelvin_;
    
    public:
      
      TemperatureConverter(){
          kelvin_ = 0;
      }
      
      TemperatureConverter(double x){
          kelvin_ = x;
      }
      
      double SetTempFromKelvin(double x){
         kelvin_=x;
      }
      
      double GetTempFromKelvin(){
          return kelvin_;
      }
      
      double SetTempFromCelsius(double celsius){
         kelvin_ = celsius + 273.15; 
      }
      
      double SetTempFromFahrenheit(double fahrenheit){
          kelvin_ = (5 *(fahrenheit - 32)/9) + 273.15;
      }
      
      double GetTempAsCelsius(){
          double celsius = kelvin_ - 273.15;
          return celsius;
      }
      
      double GetTempAsFahrenheit(){
          double fahrenheit = (( (kelvin_ - 273.15) * 9)/5 + 32);
          return fahrenheit;
      }
      
      void PrintTemps(){
          cout << "Kelvin is " << kelvin_ << " and celsius is " << GetTempAsCelsius() << " and fahrenheit is " << GetTempAsFahrenheit() << endl;
      }
};


int main()
{
    TemperatureConverter temp1;  //testing default constructor
    TemperatureConverter temp2(274);  //testing overloaded constructor
    
    temp1.PrintTemps();
    temp2.PrintTemps();
    
    temp1.SetTempFromKelvin(400.15);  //testing mutator function
    cout << temp1.GetTempFromKelvin() << endl;  //testing accessor function
    temp1.PrintTemps();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout << temp2.GetTempAsCelsius() << endl;
    temp2.PrintTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout << temp2.GetTempAsFahrenheit() << endl;
    temp2.PrintTemps();
    
    return 0;
}