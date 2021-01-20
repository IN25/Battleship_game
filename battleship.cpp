g#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//declaration of a function - generates a random number
int genRandom(int max);

int main()
{
    //variables
    int round = 1;
    int correct_number;
    int user_guess;
    int tries = 5;
    int max = 9;
    char user_inquiry;

    //assign a generated number to correct number
    correct_number = genRandom(max);

    cout << "----------------------------------" << endl;
    cout << "Welcome to Battleship Lite!" << endl;
    cout << "----------------------------------\n"
         << endl;
    cout << "Round " << round << endl;

    do
    {
        cout << "Guess a location of the battleship: " << "[0, " << max << "]" << endl;
        cin >> user_guess;
        cout << endl;

        if (user_guess == correct_number)
        {
            cout << "Hit!" << endl;

            //prompt
            cout << "PLAY AGAIN! (Y/N)" << endl;
            cin >> user_inquiry;

            if (user_inquiry == 'Y')
            {
                max += 10;
                tries = 6;
                round++;


                cout << "\n";

                cout << "Round " << round << endl;
                correct_number = genRandom(max);
            }
            else
            {
                break;
            }
        }
        else
        {
            cout << "Miss!" << endl;
        }

        tries--;

    } while (tries > 0);

    return 0;
}

//defenition of a function - generates a random number
int genRandom(int max)
{
    srand(time(NULL));
    return rand() % max;
}
