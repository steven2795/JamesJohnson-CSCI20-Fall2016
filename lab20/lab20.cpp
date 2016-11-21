#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
                char firststr[10];      //creating needed variables
                int firstname = 0;
                char *head = firststr;   //creating pointers and assigning pointees
                char *tail = firststr;
                cout << "Please enter a 10 letter word or less" << endl;   //prompting user for input
                cin >> firststr;              //taking users input
                strlen(firststr);
                firstname = strlen(firststr);    //assigns the number of characters to the variable
                cout << "Your word is " << firststr << endl;
                if (firstname<10)               //checks if firststr is more than 10 characters
                {
                                while (*head != '\0')            //prints your word to screen
                                {
                                                cout << *head;
                                                head++;
                                }
                }
                else
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                }
                cout << endl;
                tail = &firststr[strlen(firststr) - 1];    //starts reading firststr from the last character before '\0'
                if (firstname < 10)        //re-checks if firststr is bigger than 10 characters
                {
                                while (*tail>0)               //prints firststr backwards
                                {
                                                cout << *tail;
                                                tail--;
                                }
                }
                cout << endl;
                head = firststr;
                tail = &firststr[strlen(firststr) - 1];
                head++;
                tail--;
                if (*head == *tail)
                {
                                cout << "It is an palindrome!" << endl;
                }
                else
                {
                                cout << "It is not an palindrome" << endl;
                }
 
                return 0;
}