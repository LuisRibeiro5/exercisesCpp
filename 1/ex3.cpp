#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int bisc=1,hora=1,total=0;

    while (hora <= 16)
    {
        total += bisc;
        cout << " Hora:" << hora << " Biscoitos:" << bisc << " Total:" << total << endl;
        hora++;
        bisc *= 3;
    }

    cout << "Total de biscoitos quebrados após 16 horas e " << total;
    
}