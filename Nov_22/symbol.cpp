#include<bits/stdc++.h>
using namespace std;

// x+x+x+x+x+ 


int main()
{
    // odd position = x
    // even position = +

    int n;
    cout << "Enter n:\n";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i%2 == 1)
        {
            cout << "x";
        }
        else 
        {
            cout << "+";
        }
    }

    cout << endl;


    return 0;
}