#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int vetnum[5]={0}, totpar=0;

    for(int i = 1; i < 6; i++){
        cout << "Digite um numero para o vetor na posicao " << i  << endl;
        cin >> vetnum[i - 1]; 
    }

    for(int i = 1; i < 6; i++){
        cout << "Numero do vetor na posicao " << i << " e:" << vetnum[i - 1] << endl;
    }

    for(int i = 1; i < 6; i++){
        if (vetnum[i - 1] % 2 == 0)
        {
            cout << "O vetor na posicao " << i << " e PAR" << endl;
            totpar++;
        } else {
            cout << "O vetor na posicao " << i << " e IMPAR" << endl;
        }

    }

    cout << "O total de numeros pares foi de :" << totpar << endl;

    return 0;
}