/* Source code by:
 * ac1414
 * ame0205
 * etp0040
 */
#include <iostream>
using namespace std;

int main() {
    int i;
    int minVal;
    string usr_sentence;
    string enteredSent;
    int length;
    cin >> length; //must be odd. if even, ask again until odd.
    enum Shape {Square=1, Triangle=2, Pentagon=3, Sentence=4, Quit=5};
    
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
                    if (usr_sentence[i] > minVal)
                    {
                    minVal = usr_sentence.at(i);
                    }
                    usr_sentence.erase(i, 1);
                    sleep(1);
                    i --;
                    cout << usr_sentence << endl;


                }
           
                
                     // decrease i o that it moves to the next element in string
                    if (!(isdigit((minVal)))) // if if its not a digit or char at i index cout nothign

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