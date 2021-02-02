#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int vP(int, int);

int main() 
{
    int iter;
    int g;
    long double sum = 0;
    long double prev = 1;

    cout << "\nEnter number of iterations: "; cin >> iter;
 
    for (int i = 0; i < iter; i++)
    {
        sum += pow(2, i)/pow(3, i+1);
        prev -= sum;
        cout << "\n" << setprecision(30) << fixed << 1-sum;
    }

    //cout << vP(iter, 1)+1-vP(iter, g);

    cout << "\n\n";

    return 0;
}

int vP(int value, int position) 
{
    int r;
    for(int i = 0; i < position; i++)
    {
        r = value % 10;
        value = value / 10;
    }
    return r;
}
