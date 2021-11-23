#include <bits/stdc++.h>
using namespace std;

int main()
{
    // calculate value of e using formula
    // e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ... + 1/n!

    // take input from user as number of terms
    int n;
    cout << "Enter number of terms:\n";
    cin >> n;

    int den = 1;
    double e = 1;

    for (int i = 1; i < n; i++)
    {
        double termValue = 1.0 / (den);
        den = den * (i + 1);

        e += termValue;
    }

    cout << "Value of e upto " << n << " terms is: " << e << endl;

    return 0;
}