#include <bits/stdc++.h>
using namespace std;

// function to generate random number between 1 and 100
int random_number()
{
    int num = rand() % 100 + 1;
    return num;
}


int main()
{

    // seed random number generator
    srand(time(NULL));

    // generate random number
    int num = random_number();


    // initialize variables to store guess
    int guess;

    // tell me if it is smaller or bigger than the random number or if it is correct
    while(true)
    {
        cout << "Guess Number: \n";
        cin >> guess;

        if(guess == num)
        {
            cout << "Congrats, You won." << endl;
            cout << "Actual number was: " << num << endl;
            break;
        }
        else if(guess < num)
        {
            cout << "guess is smaller\n";
        }
        else if(guess > num)
        {   
            cout << "guess is bigger\n";
        }


    }










    return 0;
}