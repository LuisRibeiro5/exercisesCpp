#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int numAleatorio, cont=1, somaImpar = 0, divisivel = 0;
    srand(time(nullptr));

     do {
        numAleatorio = rand()%11;

        if (numAleatorio % 4 == 0) {
            divisivel++;
        }

        if (numAleatorio % 2 == 1){
            somaImpar += numAleatorio;
        } 
        
        cout << numAleatorio << endl;
        cont++; 
     } while (cont <= 15);
    cout << "A soma dos numeros impares é:" << somaImpar << endl;
    cout << "A quantidade de numeros divisiveis por 4 ;é :" << divisivel;
    
    return 0;
}   
