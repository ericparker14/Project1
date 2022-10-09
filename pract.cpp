#include <iostream>
using namespace std;

int main()
{
    string usr_sentence;
    int i;
    bool digit;
    char minVal;

    cout << "Enter a sentence:" << endl; // Prompt user input
    cin.ignore(); // allow for input to be read
    getline(cin,usr_sentence);
    system ("clear"); // clearing screen
    // main loop    
    for (i = 0; i < usr_sentence.size(); i++) // for every element of users input
    {
        if (!(isdigit(usr_sentence[i]) == string::npos)) // if it is a digit
        {
            usr_sentence.erase(i,1);
            
            cout << usr_sentence[i];
            
        
            digit = true;
        }
        if (digit) // minVal is the first element
        {
            minVal = usr_sentence[0];
            if (((usr_sentence[i])) <= minVal)
            {
                minVal = usr_sentence[i];
                usr_sentence.erase(i, 1);
            }
        }
        else if (!(digit))
        {
            cout << usr_sentence[i];
        }

        
    }
    return 0;
}