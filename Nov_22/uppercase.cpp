#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cout << "Enter character:\n";
    cin >> c;

    int d = 'A' - 'a';

    char ans = c + d;
    cout << ans << endl;

    return 0;
}