/* James Johnson
* 10/19/16
* Rock Paper Scissors game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class compPlay{
    private:
    int compRPS;
    
    
   public: 
   
   compPlay(){
       compRPS = 0;
   }
   compPlay(int x){
       compRPS = x;
   }
   void setCompPlay(){
      
   }

   int getCompPlay(){
       srand(time(0));
      compRPS = ((rand()%3)+1);
      return compRPS;
  }
};


int main(){
   
   char compChoice;
   string userChoice;
   int rounds;
   int compScore;
   int userScore;
 
 cout << "How many rounds do you want to play? 3, 5, or 7?" << endl;
 cin >> rounds;
 
  while(userScore != rounds && compScore != rounds){
   
   compPlay RPS1;
   
   
   
   switch(RPS1.getCompPlay()){
   
   case 1: compChoice = 'R';
   break;
   
   case 2: compChoice = 'P';
   break;
   
   case 3: compChoice = 'S';
   break;
   }
   
   cout << "Rock, Paper, or Scissors?" << endl;
   cin >> userChoice;
   
   
    if(compChoice == 'R' && userChoice == "Scissors"){
        cout << "Computer won this round!" << endl;
        compScore = compScore + 1;
    }
    else if(compChoice == 'P' && userChoice == "Scissors"){
        cout << "User won this round!" << endl;
        userScore = userScore + 1;
    }
    else if(compChoice == 'S' && userChoice == "Scissors"){
        cout << "Tie! no points." << endl;
    }
     
     
     if(compChoice == 'R' && userChoice == "Rock"){
        cout << "Tie! no points." << endl;
    }
    else if(compChoice == 'P' && userChoice == "Rock"){
        cout << "Computer won this round!" << endl;
        compScore = compScore + 1;
    }
    else if(compChoice == 'S' && userChoice == "Rock"){
        cout << "User won this round!" << endl;
        userScore = userScore + 1;
    }
     
     
     if(compChoice == 'R' && userChoice == "Paper"){
        cout << "User won this round!" << endl;
        userScore = userScore + 1;
    }
    else if(compChoice == 'P' && userChoice == "Paper"){
        cout << "Tie! no points." << endl;
    }
    else if(compChoice == 'S' && userChoice == "Paper"){
        cout << "Computer won this round!" << endl;
        compScore = compScore + 1;
    }
  }//end while
    
    if(userScore == rounds){
        cout << "User won!";
    }
    else {
        cout << "Computer won!";
    }
    
    
}// end main