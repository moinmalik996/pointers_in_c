/*
    Same as example_2.cpp except the card options
    "J Q K" will be stored on heap and the memory
    will also be deallocated using free function at
    line 47.
*/

#include <iostream>

using namespace std;

int cash = 100;

void Play(int bet)
{
    char *C = (char *)malloc(3 * sizeof(char));
    C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';
    cout << "Shuffling...." << endl;
    srand(time(NULL));
    int i;
    for (i = 0; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }

    int playerGuess;
    cout << "What's the position of queen - 1, 2, 3 ?";
    cin >> playerGuess;

    if (C[playerGuess - 1] == 'Q')
    {
        cash += cash * 3;
        cout << "Congratulations ! You have won the prize." << endl;
        cout << "The results are : " << C[0] << C[1] << C[2] << endl;
    }
    else
    {
        cash -= cash - bet;
        cout << "The results are : " << C[0] << C[1] << C[2] << endl;
        cout << "Cash Left : " << cash << endl;
    }

    free(C);
}

int main()
{
    int bet;
    while (cash > 0)
    {
        cout << "What's your bet? $";
        cin >> bet;

        if (bet == 0 && bet > cash)
            break;

        Play(bet);
        cout << "*************************************" << endl
             << endl;
    }

    return 0;
}