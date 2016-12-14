//James Johnson
//Exec dialogue and story co-creator: Jacob Candelaria
//11/30/16
//This program will be a text based dungeon game

#include<iostream>
#include<cstdlib>
using namespace std;

class player{
    private:
      int gp_;
      string hasFriend_;
      string hasRock_;
      string hasSword_;
      string hasArmor_;
      int attack_;
      int health_;
    public:
      player(){
          gp_ = 0;
          hasSword_ = "false";
          hasArmor_ = "false";
          hasFriend_ = "false";
          hasRock_ = "false";
          health_ = 100;
          attack_ = 3;
      }
      player(int x){
          gp_ = x;
      }
      void setGold(int newGold){
          gp_ = gp_ + newGold;
      }
      int getGold(){
          
          return gp_;
          
      }
      
      void setItemsFriend(string hasFriend){
          hasFriend_ = hasFriend;
          if(hasFriend == "true"){
              attack_ = 9;
              health_ = 200;
          }
      }
      
      string getItemsFriend(){
          return hasFriend_;
      }
      void setItemsRock(string hasRock){
          hasRock_ = hasRock;
      }
      string getItemsRock(){
          return hasRock_;
      }
      
      void setItemsSword(string hasSword){
        
        hasSword_ = hasSword;
        if(hasSword == "true"){
          attack_ = 6;
        }
      }
      
      
      
      string getItemsSword(){
        return hasSword_;
      }
      
      string getItemsArmor(){
          return hasArmor_;
      }
      
      void setItemsArmor(string hasArmor){
          
          hasArmor_ = hasArmor;
          if(hasArmor == "true"){
              health_ = 150;
          }
      }
      
      void setPlayerAttack(int x){
        attack_ = attack_ + x;
      }
      
      int getPlayerAttack(){
        return attack_;
      }
      void setPlayerHealth(int x){
        health_ = health_ - x;
      }
      int getPlayerHealth(){
        return health_;
      }
    
};//end player class

class dungeonCrawl{
  private:
  int i_;
  int choice_;
  int cyclopsHealth_;
  int goblinKingHealth_;
  int dragonHealth_;
  int goblin1Health_;
  int goblinSquadHealth_;
  int joeHealth_;
  player p;
  
  public:
   
   dungeonCrawl(){
     cyclopsHealth_ = 100;
     dragonHealth_ = 150;
     goblinKingHealth_ = 120;
     goblin1Health_ = 50;
     goblinSquadHealth_ = 80;
     joeHealth_ = 50;
   }
   
   void entrance(){
    i_ = 0;
    cout << "You enter the dungeon and you see two doors, a suspicious looking trash can, and a pile of debris." << endl;
    while( i_ < 1){
    cout << "What do you want to do? 1:check trashcan 2:look through debris 3: go to room 1 4: go to room 2." << endl;
    cin >> choice_;
    switch(choice_){
      case 1:
      if(dragonHealth_ == 0 && goblinKingHealth_ == 0 && cyclopsHealth_ == 0){
          cout << "Wow I cannot believe you came all the way back here and checked this. Well congrats you found a lot of gold." << endl;
          p.setGold(300);
      }//end if
      else{
        cout << "Nothing in the trashcan...weird." << endl;
      }//end else
        break;
      case 2:
       if(p.getItemsSword() == "false"){
        cout << "After a lot of digging you find THE sword! Your attack increases." << endl;
        p.setItemsSword("true");
       }
        else{
          cout << "You already have THE sword." << endl;
          
        }
        break;
      case 3:
        cout << "You go through opening to room 1." << endl;
        i_ = i_ + 1;
        room1();
        break;
      case 4:
        cout << "You go through door to room 2" << endl;
        i_ = i_ +1;
        room2();
        break;
      default:
        cout << "Choose a number 1-4." << endl;
     }//end switch
    }//end while
}//end entrance

   void room1(){                                            
    cout << "Welcome to room 1" << endl;
    cout << "In here is a nasty looking goblin and another opening behind him." << endl;
    i_ = 0;
    while(i_ < 1){
         cout << "What do you want to do? 1. fight goblin 2. go to room 3 3. go back to the entrance" << endl;
         cin >> choice_;
     
     switch(choice_){
        
         case 1:{
          
           if(goblin1Health_ > 0){
           while(goblin1Health_ > 0 && p.getPlayerHealth() > 0){
          
          int playerRoll;
          playerRoll = ((rand()%p.getPlayerAttack())+1);
          cout << "You rolled a " <<  playerRoll << endl;
          
          int goblin1Roll;
          goblin1Roll = ((rand()%3)+1);
          cout << "The Goblin rolled a " << goblin1Roll << endl;
          
          if(playerRoll > goblin1Roll){
            cout << "You damaged the goblin for 10hp!" << endl;
            goblin1Health_ = goblin1Health_ - 10;
            cout << "Goblin now has " << goblin1Health_ << "hp" << endl;
          }//end if
          
          else if(goblin1Roll > playerRoll){
            cout << "The Goblin hit you for 10hp!" << endl;
            p.setPlayerHealth(10);
            cout << "You now have " << p.getPlayerHealth() << "hp." << endl;
          }//end else if
          
          else{
            cout << "You both missed!" << endl;
          }//end else
           
         }//end while
         if(goblin1Health_ == 0){
            cout<<"Congrats you defeated the goblin! You found some gold pieces " << endl;
            p.setGold(5);
         }//end if
         else{
            cout << "You died with a total of " << p.getGold() <<" gold. Game over." << endl;
            exit(0);
         }//end else
           }//end if
           else{
               cout << "You can't fight something that is dead. Make another choice." << endl;
           }
         }//end case 1
           break;   
          
         
         case 2:
           i_ = i_ +1;
           room3();
           break;
           
         case 3:
           i_ = i_ + 1;
           entrance();
           break;
         
         default:
           cout << "Choose a number 1-3" << endl;
    
     }//end switch
     
         
     }//end while
    
}//end room 1

   void room2(){
    i_ = 0;
    cout << "Welcome to room 2" << endl;
    cout << "In this room are two doors. One red door with an eye on it and the other just a normal boring door." << endl;
    while(i_ < 1){
    cout << "What do you want to do? 1: red door with eye 2: boring door 3: go back to entrance." << endl;
    cin >> choice_;
    switch(choice_){
      case 1:
       if(cyclopsHealth_ == 0){
           cout << "You've already killed the cyclops. Make another choice." << endl;
       }
       else{
       cout << "Good luck" << endl;
       i_ = i_ + 1;
       cyclopsRoom();
       }
       break;
      case 2:
       cout << "You advance through to room 4" << endl;
       i_ = i_ + 1;
       room4();
       break;
      case 3:
       entrance();
       i_ = i_ + 1;
       break;
      default:
       cout << "Choose a number 1-3" << endl;
    }//end switch
    }//end while
}//end room 2

   void cyclopsRoom(){
     srand(time(0));
     i_ = 0;
     cout << "Welcome to the cyclops room. In here you see an intimidating cyclops and a chest tucked away in the corner behind him." << endl;
     cout << "Do you want to 1: fight the cyclops or 2: go to room 2" << endl;
     cin >> choice_;         
     switch(choice_){
       case 1:
     {
        cout << "The fight begins!" << endl;
        
        while(cyclopsHealth_ > 0 && p.getPlayerHealth() > 0){
          
          int playerRoll;
          playerRoll = ((rand()%p.getPlayerAttack())+1);
          cout << "You rolled a " <<  playerRoll << endl;
          
          int cyclopsRoll;
          cyclopsRoll = ((rand()%4)+1);
          cout << "Cyclops rolled a " << cyclopsRoll << endl;
          
          if(playerRoll > cyclopsRoll){
            cout << "You damaged the cyclops for 20hp!" << endl;
            cyclopsHealth_ = cyclopsHealth_ - 20;
            cout << "Cyclops now has " << cyclopsHealth_ << "hp" << endl;
          }//end if
          
          else if(cyclopsRoll > playerRoll){
            cout << "Cyclops hit you for 20hp!" << endl;
            p.setPlayerHealth(20);
            cout << "You now have " << p.getPlayerHealth() << "hp." << endl;
          }//end else if
          
          else{
            cout << "You both missed!" << endl;
          }//end else
          
         }//end while
        
         if(cyclopsHealth_ == 0){
            cout<<"Congrats you defeated the cyclops! Now you get to open the chest and see what you get." << endl;
            cout << "There was a set of armor in the chest. Your health increases." << endl;
            p.setItemsArmor("true");
         }//end if
         else{
            cout << "You died with a total of " << p.getGold() <<" gold. Game over." << endl;
            exit(0);
         }//end else
         break;
     }//end case 1
        case 2:
         room2();
         break;
        
        default:
         cout << "Choose a number 1-2" << endl;
        
         
       }//end switch
       room2();
        
   }//end cyclops room

   void room4(){                                      
     i_ = 0;
     cout << "Welcome to room 4" << endl;
     cout << "There is a man in this room and a door on the opposite side." << endl;
     
     
     while(i_ < 1){
         cout << "What do you want to do? 1. talk to man 2. go to room 2 3. advance to room 5." << endl;
         cin >> choice_;
     
     switch(choice_){
        
         case 1:{
             if(p.getItemsFriend() == "false" && joeHealth_ > 0){
           cout << "Joe: 'Well look who it is, another adventurer trying to get some gold.'" << endl;
           cout << "You say 1. 'What's it to ya guy?! 2. 'Yeah if I can find any.'" << endl;
           cin >> choice_;
           if(choice_ == 1){
               cout << "Joe: 'Really 'guy?' My name is friend or foe joe no need to get testy." << endl;
               cout << "You say 1. 'Don't tell me how to live my life guy!' 2. 'Okay I don't know where that guy thing came from, this whole dungeon has me on the edge. Wait your name is really Friend or for Joe?' " << endl;
               cin >> choice_;
               if(choice_ == 1){
                   cout << "Joe: Seriously whats with this 'guy' thing? Kind of don't like your tone uhhh.....guy!'" << endl;
                   
                   while(joeHealth_ > 0 && p.getPlayerHealth() > 0){
          
                           int playerRoll;
                           playerRoll = ((rand()%p.getPlayerAttack())+1);
                           cout << "You rolled a " <<  playerRoll << endl;
          
                           int joeRoll;
                           joeRoll = ((rand()%3)+1);
                           cout << "Joe rolled a " << joeRoll << endl;
          
                           if(playerRoll > joeRoll){
                             cout << "You damaged the cyclops for 20hp!" << endl;
                             joeHealth_ = joeHealth_ - 10;
                             cout << "Joe now has " << joeHealth_ << "hp" << endl;
                        }//end if
          
                          else if(joeRoll > playerRoll){
                            cout << "Joe hit you for 10hp!" << endl;
                            p.setPlayerHealth(10);
                            cout << "You now have " << p.getPlayerHealth() << "hp." << endl;
                        }//end else if
          
                          else{
                           cout << "You both missed!" << endl;
                       }//end else
          
                   }//end while
        
         if(joeHealth_ == 0){
            cout<<"Congrats you defeated Joe! That may have not been a good idea." << endl;
            
         }//end if
         else{
            cout << "You died with a total of " << p.getGold() <<" gold. Game over." << endl;
            exit(0);
         }//end else
                   
               }//end if2
               else{
                   cout << "Joe: 'Yeah it's a family name I wouldn't look too much into it.'" << endl;
                   p.setItemsFriend("true");
               }//end else
           }//end if1
           else{
               cout << "Joe: 'Yeah, all me and my pet rock, Rocky, seem to be finding is goblins, dirt, and something called a grue.'" << endl;
               cout << "You say 1. 'Listen guy I'm here to get that paper not listen to your life story.' 2. 'You have a pet rock named Rocky and all you have been able to find is dirt? How long have you been in here?'" << endl;
               cin >> choice_;
               if(choice_ == 0){
                   cout << "Joe: 'Get that 'paper?' You couldn't fight your way out of a paper bag! " << endl;
                   
                   while(joeHealth_ > 0 && p.getPlayerHealth() > 0){
          
                           int playerRoll;
                           playerRoll = ((rand()%p.getPlayerAttack())+1);
                           cout << "You rolled a " <<  playerRoll << endl;
          
                           int joeRoll;
                           joeRoll = ((rand()%3)+1);
                           cout << "Joe rolled a " << joeRoll << endl;
          
                           if(playerRoll > joeRoll){
                             cout << "You damaged the cyclops for 20hp!" << endl;
                             joeHealth_ = joeHealth_ - 10;
                             cout << "Joe now has " << joeHealth_ << "hp" << endl;
                        }//end if
          
                          else if(joeRoll > playerRoll){
                            cout << "Joe hit you for 10hp!" << endl;
                            p.setPlayerHealth(10);
                            cout << "You now have " << p.getPlayerHealth() << "hp." << endl;
                        }//end else if
          
                          else{
                           cout << "You both missed!" << endl;
                       }//end else
          
                   }//end while
        
         if(joeHealth_ == 0){
            cout<<"Congrats you defeated Joe! That may have not been a good idea." << endl;
            
         }//end if
         else{
            cout << "You died with a total of " << p.getGold() <<" gold. Game over." << endl;
            exit(0);
         }//end else
                   
               }//end if3
               else{
                   cout << "Joe: 'Too long....like I don't even want to say how long but if you want to travel together we can get some gold and hopefully get out of here.'" << endl;
                   p.setItemsFriend("true");
                   p.setItemsRock("true");
               }//end else
           }//end else
             }//end if 
             else{
                 cout << "You've already talked to Joe. Choose something else." << endl;
             }
         }//end case 1
           break;   
          
         
         case 2:
           i_ = i_ +1;
           room2();
           break;
           
         case 3:
           i_ = i_ + 1;
           room5();
           break;
         
         default:
           cout << "Choose a number 1-3" << endl;
    
     }//end switch
     
         
     }//end while
  
   }//end room 4
   
   void room5(){                                        
       i_ = 0;
       cout << "Welcome to room 5." << endl;
       cout << "You see a big mean looking set of double doors that leads to a hallway with absolutely no light and an old wooden door." << endl;
       
       
       while(i_ < 1){
         cout << "Do you want to 1. Go through double doors 2. old wooden door 3. go to room 4." << endl;
         cin >> choice_;
     
     switch(choice_){
        
         case 1:
           i_ = i_ + 1;
           if(p.getItemsRock() == "true"){
               cout << "You start walking in the complete darkness and hear noises. Thankfully you have Rocky who is actually a magic light rock and you easily go through hallway." << endl;
               dragonRoom();
           }
           else{
               cout << "It's too dark. You ran into a grue and died. Game over." << endl;
               cout << "You finished with " << p.getGold() << " gold pieces." << endl;
               exit(0);
           }
           break;   
          
         
         case 2:
           i_ = i_ +1;
           room3();
           break;
           
         case 3:
           i_ = i_ + 1;
           room4();
           break;
         
         default:
           cout << "Choose a number 1-3" << endl;
    
     }//end switch
     
         
     }//end while
       
   }//end room 5
   
   void room3(){                                          
       cout << "Welcome to room 3." << endl;
       cout << "Three well armed goblins are defending an opening on the other side of the room. There is also an opening on the left of the room." << endl;
       
       i_ = 0;
       while(i_ < 1){
         cout << "What do you want to do? 1. fight goblins 2. go to room 1 3. take the opening on the left to room 5 4. juke by goblins and take the opening behind them" << endl;
         cin >> choice_;
     
     switch(choice_){
        
         case 1:{
    
           if(goblinSquadHealth_ > 0){
           while(goblinSquadHealth_ > 0 && p.getPlayerHealth() > 0){
          
          int playerRoll;
          playerRoll = ((rand()%p.getPlayerAttack())+1);
          cout << "You rolled a " <<  playerRoll << endl;
          
          int goblinSquadRoll;
          goblinSquadRoll = ((rand()%4)+1);
          cout << "The Goblin trio rolled a " << goblinSquadRoll << endl;
          
          if(playerRoll > goblinSquadRoll){
            cout << "You damaged the goblins for 10hp!" << endl;
            goblinSquadHealth_ = goblinSquadHealth_ - 10;
            cout << "Goblin trio now have " << goblinSquadHealth_ << "hp" << endl;
          }//end if
          
          else if(goblinSquadRoll > playerRoll){
            cout << "The Goblins hit you for 10hp!" << endl;
            p.setPlayerHealth(10);
            cout << "You now have " << p.getPlayerHealth() << "hp." << endl;
          }//end else if
          
          else{
            cout << "You both missed!" << endl;
          }//end else
           
         }//end while
         if(goblinSquadHealth_ == 0){
            cout<<"Congrats you defeated the goblins! You found some gold pieces " << endl;
            p.setGold(25);
         }//end if
         else{
            cout << "You died with a total of " << p.getGold() <<" gold. Game over." << endl;
            exit(0);
         }//end else
           }//end if
           else{
               cout << "You can't fight something that is dead. Make another choice." << endl;
           }
         }//end case 1
           break;   
         
         case 2:
           i_ = i_ +1;
           room1();
           break;
           
         case 3:
           i_ = i_ + 1;
           room5();
           break;
           
         case 4:
           i_ = i_ + 1;
           goblinKingRoom();
           break;
         
         default:
           cout << "Choose a number 1-4" << endl;
    
     }//end switch
     
         
     }//end while
       
   }//end room 3
   
   void dragonRoom(){                                  //FINISH
       cout << "Welp. There's a dragon in here. Luckily you've got Joe. He's confident you can take it. But he's also totally behind you if you decide to run past and escape." << endl;
       i_ = 0;
       while(i_ < 1){
         cout << "What do you want to do? 1. fight dragon 2. go back to room 5 3. run past dragon and escape dungeon." << endl;
         cin >> choice_;
     
     switch(choice_){
        
         case 1:{
           if(dragonHealth_ > 0){
           while(dragonHealth_ > 0 && p.getPlayerHealth() > 0){
          
          int playerRoll;
          playerRoll = ((rand()%p.getPlayerAttack())+1);
          cout << "You and Joe rolled a " <<  playerRoll << endl;
          
          int dragonRoll;
          dragonRoll = ((rand()%6)+1);
          cout << "The Dragon rolled a " << dragonRoll << endl;
          
          if(playerRoll > dragonRoll){
            cout << "You damaged the Dragon for 10hp!" << endl;
            dragonHealth_ = dragonHealth_ - 10;
            cout << "Goblin king now has " << dragonHealth_ << "hp" << endl;
          }//end if
          
          else if(dragonRoll > playerRoll){
            cout << "The Dragon hit you for 10hp!" << endl;
            p.setPlayerHealth(10);
            cout << "You now have " << p.getPlayerHealth() << "hp." << endl;
          }//end else if
          
          else{
            cout << "You both missed!" << endl;
          }//end else
           
         }//end while
         if(dragonHealth_ == 0){
            cout<<"Congrats you defeated the Dragon! You found a lot of gold pieces " << endl;
            p.setGold(150);
         }//end if
         else{
            cout << "You died with a total of " << p.getGold() <<" gold. Game over." << endl;
            exit(0);
         }//end else
           }//end if
           else{
               cout << "You can't fight something that is dead. Make another choice." << endl;
           }
         }//end case 1
           
           break;   
         
         case 2:
           i_ = i_ +1;
           room5();
           break;
           
         case 3:
           i_ = i_ + 1;
           cout << "You made it out! Let's see how you did." << endl;
           cout << "You finished with " << p.getGold() << "gold pieces." << endl;
           exit(0);
           break;
         
         default:
           cout << "Choose a number 1-" << endl;
    
     }//end switch
     
         
     }//end while
       
   }//end dragon room
   
   void goblinKingRoom(){                                 
       cout << "Oh nelly. There is a pretty massive goblin in here with a crown on and a big stick. You might need some extra help or better equipment to take on this one." << endl;
       i_ = 0;
       
       while(i_ < 1){
         cout << "What do you want to do? 1. fight the king 2. go back the way you came 3. or get out of this dungeon and cut your losses." << endl;
         cin >> choice_;
     
     switch(choice_){
        
         case 1:{
           if(goblinKingHealth_ > 0){
           while(goblinKingHealth_ > 0 && p.getPlayerHealth() > 0){
          
          int playerRoll;
          playerRoll = ((rand()%p.getPlayerAttack())+1);
          cout << "You rolled a " <<  playerRoll << endl;
          
          int goblinKingRoll;
          goblinKingRoll = ((rand()%5)+1);
          cout << "The Goblin king rolled a " << goblinKingRoll << endl;
          
          if(playerRoll > goblinKingRoll){
            cout << "You damaged the goblin king for 10hp!" << endl;
            goblinKingHealth_ = goblinKingHealth_ - 10;
            cout << "Goblin king now has " << goblinKingHealth_ << "hp" << endl;
          }//end if
          
          else if(goblinKingRoll > playerRoll){
            cout << "The Goblin king hit you for 10hp!" << endl;
            p.setPlayerHealth(10);
            cout << "You now have " << p.getPlayerHealth() << "hp." << endl;
          }//end else if
          
          else{
            cout << "You both missed!" << endl;
          }//end else
           
         }//end while
         if(goblinKingHealth_ == 0){
            cout<<"Congrats you defeated the goblin king! You found a lot of gold pieces " << endl;
            p.setGold(100);
         }//end if
         else{
            cout << "You died with a total of " << p.getGold() <<" gold. Game over." << endl;
            exit(0);
         }//end else
           }//end if
           else{
               cout << "You can't fight something that is dead. Make another choice." << endl;
           }
         }//end case 1
           
           break;   
         
         case 2:
           i_ = i_ +1;
           room3();
           break;
           
         case 3:
           i_ = i_ + 1;
           cout << "You made it out! Let's see how you did." << endl;
           cout << "You finished with " << p.getGold() << " gold pieces." << endl;
           exit(0);
           break;
         
         default:
           cout << "Choose a number 1-3" << endl;
    
     }//end switch
     
         
     }//end while
       
   }//end goblin king room

};// end dungeonCrawl class


int main(){
    
    string playerName;
    
    dungeonCrawl firstGoThru;
    
    cout << "Hello player and welcome to the dungeon. What is your name?" << endl;
    getline(cin, playerName);
    
    firstGoThru.entrance();
    
}