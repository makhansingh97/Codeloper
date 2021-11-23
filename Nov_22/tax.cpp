#include<bits/stdc++.h>
using namespace std;

/***************
 * Income tax rate
 * 0-30,000: 10%
 * 30,000-50,000: 15%
 * 50,000-1,00,000: 20%
 * >1,00,000: 25%
 * 
 */


int main()
{

    // take input from user as yearly income
    // 40000, 400010.50
    double salary;
    cout << "Enter your salary: \n";
    cin >> salary;

    double tax;



    if(salary <= 30000)
    {
        // tax = (30000*10)/100;
        tax = salary*0.1;
    }
    else if(salary > 30000 && salary <= 50000)
    {
        tax = salary*.15;
    }
    else if(salary > 50000 && salary <= 100000)
    {
        tax = salary*.20;
    }
    else if(salary > 100000)
    {
        tax = salary*.25;
    }
    else if(salary <= 0)
    {
        tax = 0;
    }


    cout << "Tax is : " << tax << endl;


    // calculate tax


    return 0;
}