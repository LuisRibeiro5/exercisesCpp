#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int num=1,divi=1;
    double total=0;

    while (divi <= 100)
    {   
        if (divi == 100)
        {
            cout << num << "/" << divi;
        } else {
             cout << num << "/" << divi << " + ";
        }
        
        total += (double)num/divi;
        divi++;
    }
    cout << " = " << total;
}