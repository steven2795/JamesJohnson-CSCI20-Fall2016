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
    
    fin1.open("answerkey.txt");
    fout1.open("outputAnswerKey.txt");
    
    fin2.open("studentanswers.txt");
    fout2.open("outputStudentAnswers.txt");
    
    string answerKey[21];
    string studentAnswers[21][6]];
    
    
    for(int i = 0; i < 21; i++){
        fin1 >> answerKey[i];
    }
    int i = 0;
    while(!fin2.eof())
   {
      fin2 >> studentAnswers[i];
      i++;
   }
    
    for(int i = 0; i < 21; i ++){
        cout << answerKey[i] << endl;
    }
    
    for(int i = 0; i < 150; i ++){
        cout << studentAnswers[i] << endl;
    }
    
    
    
    
    /*int average;                                   //all needed variables
    
    double christianGrade = 0;
    double paxtonGrade = 0;
    double abbyGrade = 0;
    double audreyGrade = 0;
    double katieGrade = 0;
    double carrieGrade = 0;
    
    char christianMult[18];
    char paxtonMult[18];
    char abbyMult[18];
    char audreyMult[18];
    char katieMult[18];
    char carrieMult[18];
    char answersMult[18];
    
    string christianWord[3];
    string paxtonWord[3];
    string abbyWord[3];
    string audreyWord[3];
    string katieWord[3];
    string carrieWord[3];
    string answersWord[3];
    
    fin.open("read.txt");                 //opens files
    fout.open("output.txt");
    
    answersMult[0] = 'a';       paxtonMult[0] = 'd';          //seeds the answers 
    answersMult[1] = 'b';       paxtonMult[1] = 'a';
    answersMult[2] = 'c';       paxtonMult[2] = 'd';
    answersMult[3] = 'c';       paxtonMult[3] = 'c';
    answersMult[4] = 'c';       paxtonMult[4] = 'd';
    answersMult[5] = 'c';       paxtonMult[5] = 'd';
    answersMult[6] = 'a';       paxtonMult[6] = '?';
    answersMult[7] = 'a';       paxtonMult[7] = 'a';
    answersMult[8] = 'b';       paxtonMult[8] = 'a';
    answersMult[9] = 'b';       paxtonMult[9] = '?';
    answersMult[10] = 'f';      paxtonMult[10] = 't';
    answersMult[11] = 'f';      paxtonMult[11] = 'f';
    answersMult[12] = 't';      paxtonMult[12] = 'f';
    answersMult[13] = 't';      paxtonMult[13] = 'f';
    answersMult[14] = 'f';      paxtonMult[14] = '?';
    answersMult[15] = 't';      paxtonMult[15] = 't';
    answersMult[16] = 'f';      paxtonMult[16] = '?';
    answersMult[17] = 'f';      paxtonMult[17] = 'f';
    
    christianMult[0] = '?';     abbyMult[0] = 'd';
    christianMult[1] = 'd';     abbyMult[1] = 'a';
    christianMult[2] = 'b';     abbyMult[2] = 'd';
    christianMult[3] = 'a';     abbyMult[3] = 'd';
    christianMult[4] = 'c';     abbyMult[4] = '?';
    christianMult[5] = 'd';     abbyMult[5] = 'c';
    christianMult[6] = '?';     abbyMult[6] = '?';
    christianMult[7] = 'b';     abbyMult[7] = 'd';
    christianMult[8] = 'b';     abbyMult[8] = 'd';
    christianMult[9] = 'a';     abbyMult[9] = 'd';
    christianMult[10] = '?';    abbyMult[10] = 'f';
    christianMult[11] = '?';    abbyMult[11] = '?';
    christianMult[12] = '?';    abbyMult[12] = '?';
    christianMult[13] = 'f';    abbyMult[13] = 't';
    christianMult[14] = 'f';    abbyMult[14] = 'f';
    christianMult[15] = 't';    abbyMult[15] = 'f';
    christianMult[16] = '?';    abbyMult[16] = 'f';
    christianMult[17] = '?';    abbyMult[17] = 'f';
    
    katieMult[0] = 'd';         carrieMult[0] = 'd';
    katieMult[1] = '?';         carrieMult[1] = '?';
    katieMult[2] = '?';         carrieMult[2] = 'b';
    katieMult[3] = 'd';         carrieMult[3] = 'c';
    katieMult[4] = '?';         carrieMult[4] = 'c';
    katieMult[5] = '?';         carrieMult[5] = 'a';
    katieMult[6] = '?';         carrieMult[6] = 'd';
    katieMult[7] = 'c';         carrieMult[7] = '?';
    katieMult[8] = 'a';         carrieMult[8] = 'b';
    katieMult[9] = 'd';         carrieMult[9] = 'b';
    katieMult[10] = 'f';        carrieMult[10] = '?';
    katieMult[11] = 'f';        carrieMult[11] = 't';
    katieMult[12] = 't';        carrieMult[12] = 't';
    katieMult[13] = 'f';        carrieMult[13] = 't';
    katieMult[14] = 't';        carrieMult[14] = 'f';
    katieMult[15] = 't';        carrieMult[15] = 'f';
    katieMult[16] = 't';        carrieMult[16] = 't';
    katieMult[17] = '?';        carrieMult[17] = 't';
    
    audreyMult[0] = 'c';
    audreyMult[1] = 'b';
    audreyMult[2] = 'a';
    audreyMult[3] = 'b';
    audreyMult[4] = 'a';
    audreyMult[5] = '?';
    audreyMult[6] = 'b';
    audreyMult[7] = 'c';
    audreyMult[8] = 'c';
    audreyMult[9] = 'c';
    audreyMult[10] = 'f';
    audreyMult[11] = '?';
    audreyMult[12] = '?';
    audreyMult[13] = 'f';
    audreyMult[14] = 't';
    audreyMult[15] = 'f';
    audreyMult[16] = '?';
    audreyMult[17] = '?';
   
    answersWord[0] = "variable";
    answersWord[1] = "random";
    answersWord[2] = "condition";
   
    christianWord[0] = "var";         paxtonWord[0] = "variable";
    christianWord[1] = "?";           paxtonWord[1] = "?";
    christianWord[2] = "equation";    paxtonWord[2] = "expression";
    
    abbyWord[0] = "variable";         audreyWord[0] = "?";
    abbyWord[1] = "?";                audreyWord[1] = "?";
    abbyWord[2] = "?";                audreyWord[2] = "?";
    
    katieWord[0] = "var";             carrieWord[0] = "variable";
    katieWord[1] = "rand()";          carrieWord[1] = "random";
    katieWord[2] = "condition";       carrieWord[2] = "condition";
    
    
    for(int i = 0; i < 18; i++){
        if(answersMult[i] == christianMult[i]){            //finds out what is right and wrong
            christianGrade = christianGrade + 1;
        }
        else if(christianMult[i] == '?'){
            christianGrade = christianGrade + 0;
        }
        else{
            christianGrade = christianGrade - .25;
        }
    }//end for loop
    
     for(int i = 0; i < 18; i++){
        if(answersMult[i] == paxtonMult[i]){
            paxtonGrade = paxtonGrade + 1;
        }
        else if(paxtonMult[i] == '?'){
            paxtonGrade = paxtonGrade + 0;
        }
        else{
            paxtonGrade = paxtonGrade - .25;
        }
    }//end for loop
    
     for(int i = 0; i < 18; i++){
        if(answersMult[i] == abbyMult[i]){
            abbyGrade = abbyGrade + 1;
        }
        else if(abbyMult[i] == '?'){
            abbyGrade = abbyGrade + 0;
        }
        else{
            abbyGrade = abbyGrade - .25;
        }
    }//end for loop
    
     for(int i = 0; i < 18; i++){
        if(answersMult[i] == audreyMult[i]){
            audreyGrade = audreyGrade + 1;
        }
        else if(audreyMult[i] == '?'){
            audreyGrade = audreyGrade + 0;
        }
        else{
            audreyGrade = audreyGrade - .25;
        }
    }//end for loop
    
    
     for(int i = 0; i < 18; i++){
        if(answersMult[i] == katieMult[i]){
            katieGrade = katieGrade + 1;
        }
        else if(katieMult[i] == '?'){
            katieGrade = katieGrade + 0;
        }
        else{
            katieGrade = katieGrade - .25;
        }
    }//end for loop
    
     for(int i = 0; i < 18; i++){
        if(answersMult[i] == carrieMult[i]){
            carrieGrade = carrieGrade + 1;
        }
        else if(carrieMult[i] == '?'){
            carrieGrade = carrieGrade + 0;
        }
        else{
            carrieGrade = carrieGrade - .25;
        }
    }//end for loop
    
    for(int i = 0; i < 3; i++){
        
        if(answersWord[i] == christianWord[i] ){
            christianGrade = christianGrade + 1;
        }
        else if(christianWord[i] == "?"){
            christianGrade = christianGrade + 0;
        }
        else{
            christianGrade = christianGrade - .25;
        }
        
    }
    
    for(int i = 0; i < 3; i++){
        
        if(answersWord[i] == paxtonWord[i] ){
            paxtonGrade = paxtonGrade + 1;
        }
        else if(paxtonWord[i] == "?"){
            paxtonGrade = paxtonGrade + 0;
        }
        else{
            paxtonGrade = paxtonGrade - .25;
        }
        
    }
    
    for(int i = 0; i < 3; i++){
        
        if(answersWord[i] == abbyWord[i] ){
            abbyGrade = abbyGrade + 1;
        }
        else if(abbyWord[i] == "?"){
            abbyGrade = abbyGrade + 0;
        }
        else{
            abbyGrade = abbyGrade - .25;
        }
        
    }
    
    for(int i = 0; i < 3; i++){
        
        if(answersWord[i] == audreyWord[i] ){
            audreyGrade = audreyGrade + 1;
        }
        else if(audreyWord[i] == "?"){
            audreyGrade = audreyGrade + 0;
        }
        else{
            audreyGrade = audreyGrade - .25;
        }
        
    }
    
    for(int i = 0; i < 3; i++){
        
        if(answersWord[i] == katieWord[i] ){
            katieGrade = katieGrade + 1;
        }
        else if(katieWord[i] == "?"){
            katieGrade = katieGrade + 0;
        }
        else{
            katieGrade = katieGrade - .25;
        }
        
    }
    
    for(int i = 0; i < 3; i++){
        
        if(answersWord[i] == carrieWord[i] ){
            carrieGrade = carrieGrade + 1;
        }
        else if(carrieWord[i] == "?"){
            carrieGrade = carrieGrade + 0;
        }
        else{
            carrieGrade = carrieGrade - .25;
        }
        
    }
    
    
    average = (christianGrade + paxtonGrade + abbyGrade + audreyGrade + katieGrade + carrieGrade)/6;    //averages out test scores
    
    cout << "Christian Smith: " << christianGrade << endl;             //reads out results
    cout << "Paxton Jones: " << paxtonGrade << endl;
    cout << "Abby Sciuto: " << abbyGrade << endl;
    cout << "Audrey Smithson: " << audreyGrade << endl;
    cout << "Katie Holmes: " << katieGrade << endl;
    cout << "Carrie Grant: " << carrieGrade << endl;
    cout << "Class average: " << average << endl;
    
    fout << "Christian Smith: " << christianGrade << endl;
    fout << "Paxton Jones: " << paxtonGrade << endl;                //puts output in the files
    fout << "Abby Sciuto: " << abbyGrade << endl;
    fout << "Audrey Smithson: " << audreyGrade << endl;
    fout << "Katie Holmes: " << katieGrade << endl;
    fout << "Carrie Grant: " << carrieGrade << endl;
    fout << "Class average: " << average << endl;
 
    fin.close();                 //closes files
    fout.close();
    return 0;*/
    
}