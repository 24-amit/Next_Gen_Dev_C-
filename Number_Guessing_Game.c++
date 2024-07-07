#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    string name;
    char input;
    int inputuser;
    int score;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << endl;
    do
    {
        int variable = rand() % 50 + 1;
        cout << "Enter any number for guess the number between range 1 to 50: ";
        cin >> inputuser;
        cout << endl;
        if (inputuser <= 50)
        {
            if (inputuser == variable)
            {
                cout << "Congratulations! You guessed the correct number." << endl;
                score++;
            }
            else if (inputuser < variable)
            {
                cout << "Your guessed number is too low! Try again." << endl;
                cout << "Random number is: " << variable << endl;
            }
            else
            {
                cout << "Your guessed number is too high! Try again." << endl;
                cout << "Random number is: " << variable << endl;
            }
        }
        else
        {
            cout << "You entered input larger than 50." << endl;
        }
        cout << "Would you like to try again Y/N: ";
        cin >> input;
        cout << endl;
        while (input != 'Y' && input != 'N')
        {
            cout << "You entered wrong input! Please try again." << endl;
            cout << "Would you like to try again Y/N: ";
            cin >> input;
            cout << endl;
        }
    } while (input != 'N');
    cout << "Your score is: " << score << endl;
    cout << "Game end!" << endl;

    return 0;
}