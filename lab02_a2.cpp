// Sorry for the complicated code in the code, I tried putting the code in a function,
// but the functions couldn't see my variables,
//I don't know anything about local and global variables in C++

//I would love to receive a feedback on how to improve my code!

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//declaration of a function - generates a random number
int genRandom(int max);

// //declaration of a function - generates a random number for a location of computer's battleship
// int compLocation(int max);

// //declaration of a function - generates a random number for a computer's guess
// int compGuess(int max);

int main()
{
    //variables
    int max = 9;
    int round = 1;
    int user_location;
    int comp_location;
    int user_guess;
    int comp_guess;
    char user_inquiry;

    cout << "----------------------------------" << endl;
    cout << "Welcome to Battleship Lite!" << endl;
    cout << "----------------------------------\n";

    cout << endl;

    cout << "Select the location of your battleship [0,9]: ";
    cin >> user_location;

    //computer selects its location of battleship
    comp_location = genRandom(max);
    cout << "The computer has selected its location." << endl;
    cout << "Ready to begin!" << endl;

    cout << endl;

    cout << "Round " << round << endl;

    do
    {

        cout << "Guess a location of the battleship [0,9]: ";
        cin >> user_guess;

        if (user_guess == comp_location)
        {
            cout << "HIT!" << endl;
            cout << endl;

            //prompt
            cout << "PLAY AGAIN! (Y/N)" << endl;
            cin >> user_inquiry;
            cout << endl;

            if (user_inquiry == 'Y')
            {
                //game starts all over again
                cout << "Select the location of your battleship [0,9]: ";
                cin >> user_location;

                //computer selects its location of battleship
                comp_location = genRandom(max);
                cout << "The computer has selected its location." << endl;

                cout << "Ready to begin!" << endl;

                cout << endl;
                round++;

                cout << "Round " << round << endl;

                cout << "Guess a location of the battleship [0,9]: ";
                cin >> user_guess;

                if (user_guess == comp_location)
                {

                    cout << "HIT!" << endl;
                    cout << endl;

                    //prompt
                    cout << "PLAY AGAIN! (Y/N)" << endl;
                    cin >> user_inquiry;
                    cout << endl;
                }
                else
                {
                    cout << endl;
                    cout << "MISS!" << endl;
                    cout << endl;
                }
            }
            else
            {
                break;
            }
        }
        else
        {
            cout << endl;
            cout << "MISS!" << endl;
            cout << endl;
        }

        comp_guess = genRandom(max);
        cout << "Computer’s guess: " << comp_guess << endl;

        if (comp_guess == user_guess)
        {
            cout << "HIT!" << endl;
            cout << endl;

            //prompt
            cout << "PLAY AGAIN! (Y/N)" << endl;
            cin >> user_inquiry;
            cout << endl;

            if (user_inquiry == 'Y')
            {
                //game starts all over again
                cout << "Select the location of your battleship [0,9]: ";
                cin >> user_location;

                //computer selects its location of battleship
                comp_location = genRandom(max);
                cout << "The computer has selected its location." << endl;
                cout << "Ready to begin!" << endl;

                cout << endl;
                round++;

                cout << "Round " << round << endl;
            }
            else
            {
                break;
            }
        }
        else
        {
            cout << "MISS!" << endl;
            cout << endl;
        }

    } while (user_guess != comp_location || comp_guess != user_location);

    return 0;
}

//generate a random number
int genRandom(int max)
{
    srand(time(NULL));
    return rand() % max;
}


//I would love to receive a feedback on how to improve my code!
