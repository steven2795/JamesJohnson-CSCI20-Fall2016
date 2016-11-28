/* James Johnson
* 11/11/16
* program that Will grade tests
*/

#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;


class student{
  private:
  
    int j_;
  
  public:
    
    student(){
        j_ = 0;
    }
    student(int x){
        j_ = x;
    }
    
};




int main(){
    
    ifstream fin1;             //creates file objects
    ofstream fout1;
    
    ifstream fin2;
    ofstream fout2;
     
    fin1.open("answerkey.txt");              //opens files
    fout1.open("outputAnswerKey.txt");
    
    fin2.open("studentanswers.txt");               //closes files
    fout2.open("outputStudentAnswers.txt");
    
    string answerKey[21];                    //all needed variables
    string studentAnswers[6][23];
    double studentGrade[6];
    double average;
    
    
    for(int i = 0; i < 21; i++){         //reads in answer key
        fin1 >> answerKey[i];
    }
    int i = 0;
   while(i < 6)
    {
        for(int j = 0; j < 23;j++){          //reads in student answers
     fin2 >> studentAnswers[i][j];
        }
     i++;
    }
    
   
    
    for(int j = 0; j < 6;j++){                                  //decides which student is being graded
    
    for(int i = 0; i < 21; i++){
        if(answerKey[i] == studentAnswers[j][i + 2]){            //finds out what is right and wrong
            studentGrade[j] = studentGrade[j] + 1;
        }
        else if(studentAnswers[j][i + 2] == "?"){
           studentGrade[j] = studentGrade[j] + 0;
        }
        else{
            studentGrade[j] = studentGrade[j] - .25;
        }
    }//end for loop
    }//end first for loop
 
 for(int i = 0; i<6; i++){
   for(int j = 0; j < 1; j++){
     cout << studentAnswers[i][j] << " " << studentAnswers[i][j + 1] << ": " << studentGrade[i] << endl;
   }
 }
   for(int i = 0;i < 6; i++){
       average = studentGrade[i] + studentGrade[i + 1];
   }
   cout << "Class average: " << average;
}