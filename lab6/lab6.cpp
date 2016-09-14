#include <iostream>
using namespace std;

int asci(){
    string name;
    int year;
    
    
    cout << "*     *" << endl;
    cout << " *   *   Copyright James Johnson 2016"<< endl;
    cout << "  *** " << endl;
    
}


struct MonsterStruct {
  string Name;
  string Head;
  string Eyes;
  string Ears;
  string Nose;
  string Mouth;
    
};

int main (){
   
    MonsterStruct monster1;
    MonsterStruct monster2;
    MonsterStruct monster3;
    MonsterStruct monster4;
    
    
    cout << "Please name your monster." << endl;
    cin >> monster1.Name;
    cout << "Please choose a head for your monster." << endl;
    cin >> monster1.Head;
    cout << "Please choose eyes for your monster." << endl;
    cin >> monster1.Eyes;
    cout << "Please choose ears for your monster." << endl;
    cin >> monster1.Ears;
    cout << "Please choose a nose for your monster." << endl;
    cin >> monster1.Nose;
    cout << "Please choose a mouth for your monster." << endl;
    cin >> monster1.Mouth;
    
    monster2.Name = "craig";
    monster2.Head = "zombus";
    monster2.Eyes = "wackus";
    monster2.Ears = "vegitas";
    monster2.Nose = "wackus";
    monster2.Mouth = "spitem";
    
    monster3.Name = "Dr.PC";
    monster3.Head = "wackus";
    monster3.Eyes = "spritem";
    monster3.Ears = "wackus";
    monster3.Nose = "vegitas";
    monster3.Mouth = "spitem";
    
    monster4.Name = "zomboni";
    monster4.Head = "zombus";
    monster4.Eyes = "wackus";
    monster4.Ears = "franken";
    monster4.Nose = "vegitas";
    monster4.Mouth = "wackus";
    
    cout << monster1.Name << ": " << monster1.Head << ", " << monster1.Eyes << ", " << monster1.Ears << ", " << monster1.Nose << ", " << monster1.Mouth << endl;
    
    cout << monster2.Name << ": " << monster2.Head << ", " << monster2.Eyes << ", " << monster2.Ears << ", " << monster2.Nose << ", " << monster2.Mouth << endl;
    
    cout << monster3.Name << ": " << monster3.Head << ", " << monster3.Eyes << ", " << monster3.Ears << ", " << monster3.Nose << ", " << monster3.Mouth << endl;
    
    cout << monster4.Name << ": " << monster4.Head << ", " << monster4.Eyes << ", " << monster4.Ears << ", " << monster4.Nose << ", " << monster4.Mouth << endl;
    
    asci();
    
}