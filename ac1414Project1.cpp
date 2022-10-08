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
    int signs;
    char sign;
    Shape choice;
    int userChoice;
    bool continueOn = true;
    char next;
    
    
    cout << "Please enter an odd number: "; 
    cin >> length;
    
    	while ((length % 2) ==0) {
	    cout << "Number is not Odd. Please enter an odd number: "; 	cin >> length;
	    } 
    do{
    
        	cout << "What shape would you like to create:\n(1) Square\n(2) Triangle\n(3) Pentagon\n(4) Sentence\n(5) Quit\n";	cin >> userChoice;
	        choice = static_cast<Shape>(userChoice);
        
            srand(time(0));
	        signs = (rand() % 32) + 33;
	        sign = signs;  /* seeded random number 33 to 64 inclusive */

    switch (choice) {
        case Square:
            
		    for(int k = 0; k < length; k++){
		        system("clear");
			    for(int i = 0; i <= k; i++) { // rows
				    for(int j = 0; j <= k; j++) { //columns
					    cout << sign;		}
			        cout << endl;			}
		        sleep(1);		}
		
		    cout << "Would you like to continue: y/n\n"; 
		    cin >> next;
		    next = tolower(next);
		        if(next	== 'n') {
			        continueOn = false;
		            
		        }
		        else { continue; }
	
		    break; /* Generate a Square */
        case Triangle:
            /* Generate a Triangle */
            break;
        case Pentagon:
            /* Generate a Pentagon */
            break;
        case Sentence:
            /* Sentence for animation */
            break;
        case Quit:
            cout << "Would you like to quit the program? y/n";
            cin >> next;
                if(next	== 'n') {
			        continueOn = false;
		        }
		        else { continue; }/* Ask user to continue program. If not, end program */
            break;
        default:
		    cout << "Invalid input. Please enter a valid input.\n";
            /* Error message */
            break;}
   } while (continueOn == true);
        cout << "Goodbye!\n";

   return 0;
}
