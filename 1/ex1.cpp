#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int total = 0, x = 1;

    while (x <= 100)
    {
        if (x == 100)
        {
            cout << x;
        } else {
            cout << x << " + ";
        }

        total += x;
        x++;
    }
    cout << " = " << total;

    return 0;
}