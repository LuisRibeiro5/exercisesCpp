/*Ler 2 vetores X e Y de 10 elementos cada um. Intercalar os 
elementos desses 2 vetores formando assim, um novo vetor R de 20 elementos, onde nas posições pares de 
R estejam os elementos de X e nas posições ímpares os elementos de Y. Após a geração completa, mostrar o 
vetor R na tela. */
#include<iostream>
using namespace std;
int main(){
    //Leitura dos vetores X e Y
    int X[10], Y[10];
    for (int i = 0; i < 10; i++){
        cout << "Vetor X na posicao " << i + 1 << endl;
        cin >> X[i];
    }
    for (int i = 0; i < 10; i++){
        cout << "Vetor Y na posicao " << i + 1 << endl;
        cin >> Y[i];
    }
    
    //criacao do vetor R intercalando os numeros de X e Y
    int R[20];
    int contX = 0, contY = 0;
    for (int i = 0; i < 20; i++){
        if(i % 2 == 0){
            R[i] = X[contX];
            contX++;
        } else {
            R[i] = Y[contY];
            contY++;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        cout << "[" << R[i] << "]" << " ";
    }
    
    return 0;
}