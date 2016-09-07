//James Johnson
//08/29/16
//mad lib

#include <iostream>
using namespace std;

int main()
{
    cout << 32%7;
    string adj1 = "big"; 
    string adj2 = "red";
    string adj3 = "happy";
    string firstName = "big";
    int age1 = 0;
    float age2 = .5;
    char punc = '!';
    cout << "Please give me an adjective. ";
    cin >> adj1;
    cout << "Please give me a second adjective. ";
    cin >> adj2;
    cout << "Please give me a First Name. ";
    cin >> firstName;
    cout << "Please give me a third adjective. ";
    cin >> adj3;
    cout << "Please give me a punctuation to help express this adjective. ";
    cin >> punc;
    cout << "Please give me a number. ";
    cin >> age1;
    cout << "Please give me a decimal number starting with the decimal. For example: .5 ";
    cin >> age2;
    cout << "The " << adj1 << " " << adj2 << " dog jumped over the moon. His name was " << firstName << ". He was very " << adj3 << " that he did it" << punc << " " << firstName << " was only " << age1 << " at the time. Although he'd tell you he was " << age1 << " and " << age2 << " years old.";
    
}