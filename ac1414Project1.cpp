/*  Authors:
 * ac1414
 * ame0205 - Amanda English (amandaenglish3@my.unt.edu)
 * etp0040
 * Date: 10/08/2022
 * Instructor: Dr. Pradhumna Shrestha
 * Description: Recieves input from user for the size of the shape, length, then the user is asked
 * what shape they would like to create. The users options are enumerated variables (Square, Triangle,
 * Pentagon, Sentence, and Quit). The program enters a do-while loop once the length is entered,
 * The shape is created and user is asked to continue. If yes the loop will continue, if no the 
 * loop will terminate and a exit message is displayed exiting the program.
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
    cout << "Welcome to Create a Shape!\nPlease enter an odd number: "; 
    cin >> length;
    
    while ((length % 2) == 0){ // checks if length entered is odd. If not, the loop will continue asking for an odd number until one is entered.
        system("clear");
        cout << "Number is not odd.\nPlease enter an odd number: ";
        cin >> length;
	}
    system("clear");
    do{ /* Function: Do-While loop - continue with program. 
	 * Parameters: Boolean continueOn = false than the loop will exit, if continueOn = true the loop will continue.
	 * Return: A shape of size length 
	 * Description: This function Generates a square, triangle, or pentagon base on length. Or a sentence is entered in which
	 * all the digits are progressively removed until a sentence without digits is displayed. If Ouit is entered than the program will exit    
    	 */
        cout << "What shape would you like to create with a length of "<<length<<"?\n(1) Square\n(2) Triangle\n(3) Pentagon\n(4) Sentence\n(5) Quit\n\nChoose an option: ";
        cin >> userChoice;
        choice = static_cast<Shape>(userChoice); // changes userChoice to a Shape type variable and inputed into choice
        
        /* seeded random number 33 to 64 inclusive */
        srand(time(0));
        signInt = (rand() % 32) + 33;
        signChar = signInt;
        
        switch (choice){ // Switch statement that evaluates case based on enumerated variable
            case Square: /* Generate a Square */
                for(int k = 0; k < length; k++){
                    system("clear");
                    for(int i = 0; i <= k; i++){ 
                        for(int j = 0; j <= k; j++){ 
                            cout << signChar;
                        }
                        cout << endl;
                    }
                    sleep(1); //delay
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
	    for(int k = 1; k < length; k++){
            	for(int j = 0; j < ((length*2)-1) ; j++){ 
                	cout << signChar;
                 }
                cout << endl;
		sleep(1); //delay
	     }
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
