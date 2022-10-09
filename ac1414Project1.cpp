/* Authors: ac1414
 *          ame0205 - Amanda English (amandaenglish3@my.unt.edu)
 *          etp0040
 * Date: 2022-10-09
 * Instructor: Dr. Pradhumna Shrestha
 * Description: Recieves input from user for the size of the shape ("length"). The program enters a do-while loop once "length"
 *              is entered. The user is then asked what shape they would like to create. The user's options are enumerated
 *              variables ("Square", "Triangle", "Pentagon", "Sentence", and "Quit") of the data type "Shape". The shape is
 *              created and user is asked if they want to continue. If yes, the do-while loop will continue. If no, the do-while
 *              loop will terminate and the program will exit, displaying an exit message.
 */
#include <iostream>
#include <unistd.h>
#include <cctype>
using namespace std;

int main() {
    int i;
    int minVal;
    string usr_sentence;
    string enteredSent;
    int length;
    cin >> length; //must be odd. if even, ask again until odd.
    enum Shape {Square=1, Triangle=2, Pentagon=3, Sentence=4, Quit=5};
    int signInt;
    char signChar;
    Shape choice;
    int userChoice;
    bool continueOn = true;
    char next;
    
    /* seeded random number 33 to 64 inclusive */

    switch (length) {
        case Square:
            /* Generate a Square */
            break;
        case Triangle:
            /* Generate a Triangle */
            break;
        case Pentagon:
            /* Generate a Pentagon */
            break;
        case Sentence:
            /* Sentence for animation */
            cout << "Enter a sentence:" << endl; // Prompt user input
            cin.ignore(); // allow for input to be read
            getline(cin,usr_sentence);
            enteredSent = usr_sentence;
            system ("clear"); // clearing screen
            // main loop    
            minVal = 0;
            for (i = 0; i < usr_sentence.size(); i++) // for every element of users input
            {
                if (isdigit(usr_sentence[i])) 
                {
                    if (usr_sentence[i] < minVal)
                    {
                    minVal = usr_sentence.at(i);
                    }
                    usr_sentence.erase(i, 1);
                    sleep(1);
                    i --;
                    cout << usr_sentence << endl;
                }
                    if (!(isdigit((minVal)))) // if its not a digit or char at i index cout nothing

                    {
                        continue;
                    }

                }
            
                cout << "Entered sentence: " << enteredSent << endl; // last line on output
            break;
        case Quit:
            /* Ask user to continue program. If not, end program */
            break;
        default:
            /* Error message */
            break;
   }

   return 0;
}
