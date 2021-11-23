#include <bits/stdc++.h>
using namespace std;

/**********
 *     x
 *     x x 
 *     x x x
 *     x x x x
 * 
 * *********/

int main()
{

    int numRows;
    cout << "Enter number of Rows:\n";
    cin >> numRows;

    for(int i = 1; i <=numRows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "x ";
        }

        cout << endl;
    }


    return 0;
}
