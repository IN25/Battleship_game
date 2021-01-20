#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//declare a function
void genRandom(int max);

int main()
{
    int max;
    cout << "Enter your maximum value: " << endl;
    cin >> max;
    genRandom(max);

    return 0;
}

//define a function

void genRandom(int max)
{
    srand(time(NULL));
    cout << "The random number is: " << (rand() % max + 1) << endl;
}
