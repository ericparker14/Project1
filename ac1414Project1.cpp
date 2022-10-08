/* Source code by:
 * ac1414
 * ame0205
 * etp0040
 */

#include <iostream>
#include <unistd.h>
#include <cctype>
using namespace std;

int main(){
    enum Shape {Square=1, Triangle=2, Pentagon=3, Sentence=4, Quit=5};
    int length;
    int signInt;
    char signChar;
    Shape choice;
    int userChoice;
    bool continueOn = true;
    char next;
    
    cout << "Please enter an odd number: "; 
    cin >> length;
    
    while ((length % 2) == 0){
        cout << "Number is not Odd.\nPlease enter an odd number: ";
        cin >> length;
	}
    do{
        cout << "What shape would you like to create with a length of "<<length<<"?\n(1) Square\n(2) Triangle\n(3) Pentagon\n(4) Sentence\n(5) Quit\nChoose an option: ";
        cin >> userChoice;
        choice = static_cast<Shape>(userChoice);
        
        /* seeded random number 33 to 64 inclusive */
        srand(time(0));
        signInt = (rand() % 32) + 33;
        signChar = signInt;
        
        switch (choice){
            case Square: /* Generate a Square */
                for(int k = 0; k < length; k++){
                    system("clear");
                    for(int i = 0; i <= k; i++){ /* rows */
                        for(int j = 0; j <= k; j++){ /* columns */
                            cout << signChar;
                        }
                        cout << endl;
                    }
                    sleep(1);
                }
                cout << "Would you like to continue? (y/n): ";
                cin >> next;
                next = tolower(next);
                if(next	== 'n'){
                    continueOn = false;
                }
                else{
                    continue;
                }
                break;
            case Triangle: /* Generate a Triangle */
                break;
            case Pentagon: /* Generate a Pentagon */
                break;
            case Sentence: /* Sentence for animation */
                break;
            case Quit:
                cout << "Would you like to quit the program? (y/n): ";
                cin >> next;
                if(next	== 'n'){ /* Ask user to continue program. If not, end program */
                    continueOn = false;
                }
		        else{
                    continue;
                }
                break;
            default: /* Error message */
                cout << "Invalid input. Please enter a valid input.\n";
                break;}
    }while(continueOn == true);
    
    cout << "Goodbye!\n";
    
    return 0;
}