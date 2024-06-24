/*. Escreva um algoritmo que, para uma matriz quadrada AnXn (1 ≤ n ≤ 10) de inteiros, faça: 
1. leia a matriz 
2. some os elementos da 2a coluna 
3. multiplique os elementos de cada linha e armazene-os em um vetor 
4. some todos os elementos da matriz 
5. some os elementos da diagonal principal 
6. permute os elementos das linhas p e q */
#include<iostream>
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Digite o tamanho da matriz quadrada: " << endl;
        cin >> n;
    } while (n < 1 || n > 10);

    int mat[10][10]={{0}};
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Posicao " << i + 1 << j + 1 << ": ";
            cin >> mat[i][j];
        } 
    }
    
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += mat[i][1];
    }
    
    cout << "A soma dos elementos da 2a coluna da mat eh igual a:" << soma;
    
    int vet[10]={0};

    for (int i = 0; i < n; i++){
        vet[i] = 1;

        for(int j = 0; j < n; j++){
            vet[i] *= mat[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "[" << vet[i] << "]";
    }
    
    soma = 0;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            soma += mat[i][j];
        }
    }
    
    cout << "A soma de todos os elementos da matriz eh igual a:" << soma;

    soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += mat[i][i];
    }
    
    int p, q;
    do
    {
        cout << "Digite quais linhas deseja fazer a permutacao dos elementos:" << endl;
        cout << "lin:"; cin >> p;
        cout << "lin:"; cin >> q;
    } while (p < n || p > n || q < n || q > n);
    p--;
    q--;

    for(int i = 0; i < n; i++){
        swap(mat[p][i],mat[q][i]);
    }
    
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "[" << mat[i][j] << "]";
        }
        cout << endl;
    }
    
    return 0;
}