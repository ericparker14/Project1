/* Source code by:
 * ac1414
 * ame0205
 * etp0040
 */

#include <iostream>
using namespace std;

int main() {
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