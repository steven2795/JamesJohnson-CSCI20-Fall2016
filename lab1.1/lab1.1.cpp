//James Johnson
//01/23/17
//This program will create 3 sets


#include<iostream>
#include<cstdlib>
using namespace std;


int main(){
    
   int set1[100];            //needed arrays and counter variables
   int set2[100];
   int set3[100];
   int i = 0;
   int j = 0;
   
   for(int i = 0; j < 51; i++){
        
        set1[i] = j;        //equation for three-even set
        j = j + 3;
    
   }
   
   i =0;
   cout << "Set 1:" << endl;
   
   while(set1[i] < 50){
    cout  << set1[i] << endl;         //reads out first set
    i++;
   }
   j = 0;
   for(int i = 0; j < 51; i++){
        
        set2[i] = j;        //equation for even numbers
        j = j + 2;
    
   }
   
   i =0;
   cout << "Set 2:" << endl;

   while(set2[i] < 50){
     
     if(set2[i]%3 > 0)  {
      cout  << set2[i] << endl;          //reads out second set and omits three-even numbers
      
     }
     i++;
   }
   j = 0;
   for(int i = 0; j < 51; i++){
      
     
        set3[i] = j;                  //equations for all numbers from 0-50
        j++;
    
   }
   
   i =0;
   cout << "Set 3:" << endl;
   
   while(set3[i] < 51){
    
    if(set3[i]%3 > 0 && set3[i]%2 > 0){
   
      cout  << set3[i] << endl;                   //reads out third set but omits even and three-even numbers
    } 
      i++;
   }
   return 0;

}