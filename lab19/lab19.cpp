/* James Johnson
* 11/7/16
* Will store values in an array and average them out
*/

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
    
    ifstream fin;     //creating needed objects
    ofstream fout;
   
    int values[3][4];   //most of the variables needed
    int i = 0;
    int j = 0;
    int n = 1;
    
   fin.open("read.txt");     //opens the files
   fout.open("output.txt");
    
    
    while(i < 3){   //sets values for the array
        
        while(j < 4){
            values[i][j] = n;
            fin >> values[i][j];
            j++;
            n++;
        }
        j = 0;
        i++;
    }
   
   
    i = 0;    //resets loop variables
    j = 0;
    
    
    while(i < 3){     //puts values into the out f stream
        
        while(j < 4){
           fout << values[i][j];
           j++;
        }
        j = 0;
        i++;
    }
    fout << endl;
    
    int line[3];
    for(j = 0; j < 3; j++){
    line[j] =  values[j][0] + values [j][1] + values[j][2] + values[j][3];   //variables for adding of each line
}
   
    
    int column[4];
    for(j = 0; j < 4; j++){
    column[j] = values[0][j] + values[1][j] + values[2][j]; //variables for adding each column
    }
    
    
    
    double average;
    for(i=0;i<3;i++){
       
        average = average + values[i][0] + values[i][1] + values[i][2] + values[i][3];
        
    }
    average = average/12;
    
    
    
    for(i = 0; i < 3;i++){
    
    for(j = 0; j < 4;j++){

     fout << setw(3) << values[i][j];   //reads out array and manipulators make it nice
     
    }//end for loop
    fout << setw(3) << line[i] << endl;
    }//end for loop
    
    for(i = 0; i < 4; i++){
    fout << setw(3) << column[i]; //reads off addition of column numbers
    }
    fout << setw(4) << average << endl;   //reads off average of array
    
    
    fin.close();  //closes files
    fout.close();
    return 0;
}