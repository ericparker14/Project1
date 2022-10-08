/* Source code by:
 * ac1414
 * ame0205
 * etp0040
 */

#include <iostream>
#include <unistd.h>
#include <cctype>
using namespace std;

int main() {
    enum Shape {Square=1, Triangle=2, Pentagon=3, Sentence=4, Quit=5};
    int length;
    int signInt;
    char signChar;
    Shape choice;
    int userChoice;
    bool continueOn = true;
    char next;
    
    system("clear");
    cout << "Please enter an odd number: "; 
    cin >> length;
    
    while ((length % 2) == 0){
        system("clear");
        cout << "Number is not odd.\nPlease enter an odd number: ";
        cin >> length;
	}
    system("clear");
    do{
        cout << "What shape would you like to create with a length of "<<length<<"?\n(1) Square\n(2) Triangle\n(3) Pentagon\n(4) Sentence\n(5) Quit\n\nChoose an option: ";
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
                do{
                    cout << "Would you like to continue? (Y/N): ";
                    cin >> next;
                    next = toupper(next);
                    if(next == 'Y'){
                        continueOn = true;
                    }
                    else if(next == 'N'){
                        continueOn = false;
                    }
                }while(next!='Y'&&next!='N');
                break;
            case Triangle: /* Generate a Triangle */
                system("clear");
                for(int numLine = 1; numLine <= length; numLine++){
                    for(int numRow = 0; numRow < length-numLine; numRow++){ /* rows */
                        cout << " ";
                    }
                    for(int numCol = 0; numCol < ((2*numLine)-1); numCol++){ /* columns */
                        cout << signChar;
                    }
                    cout << endl;
                    sleep(1);
                }
                do{
                    cout << "Would you like to continue? (Y/N): ";
                    cin >> next;
                    next = toupper(next);
                    if(next == 'Y'){
                        continueOn = true;
                    }
                    else if(next == 'N'){
                        continueOn = false;
                    }
                }while(next!='Y'&&next!='N');
                break;
            case Pentagon: /* Generate a Pentagon */
                break;
            case Sentence: /* Sentence for animation */
                break;
            case Quit: /* Ask user to continue program. If not, end program */
                do{
                    system("clear");
                    cout << "Are you sure you would like to quit the program? (Y/N): ";
                    cin >> next;
                    next = toupper(next);
                    if(next == 'Y'){
                        continueOn = false;
                    }
                    else if(next == 'N'){
                        continueOn = true;
                        system("clear");
                    }
                }while(next!='Y'&&next!='N');
                break;
            default: /* Error message */
                cout << "\nInvalid input. Please enter a valid input.\n\n";
                break;
        }
    }while(continueOn == true);
    
    cout << "Goodbye!\n";
    
    return 0;
}
