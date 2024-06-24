/*. Faça um algoritmo que leia uma matriz AnXm (1 ≤ n ≤ 15, 1 ≤ m ≤ 25) de números reais e: 
1. gere uma matriz B que seja a matriz transposta de A; 
2. verifique se a matriz A é simétrica (uma matriz é simétrica quando é quadrada e quando 
aji = aij).*/
#include<iostream>
using namespace std;
int main(){
    int n,m;
    do
    {
        cout << "Digite o numero de linhas da matriz:"; cin >> n;
    } while (n < 1 || n > 15);
     do
    {
        cout << "Digite o numero de colunas da matriz:"; cin >> m;
    } while (m < 1 || m > 25);

    float mat[15][25]={{0}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Posicao " << i + 1 << j + 1 << ": "; 
            cin >> mat[i][j];
        }
        
    }
    
    float matB[15][25]={{0}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matB[j][i] = mat[i][j];
        }
        
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "[" << mat[i][j] << "]";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "[" << matB[i][j] << "]";
        }
        cout << endl;
    }

    bool simetrica = true;
    if(n == m){
        for (int i = 0; i < n && simetrica; i++){

            for (int j = 0; j < n; j++){
                if(mat[i][j] != matB[j][i]){
                    simetrica = false;
                    break;
                }
            }
        }

    } else {
        simetrica = false;
    }
    
    if (simetrica)
    {
        cout << "Matriz eh simetrica" << endl;
    } else {
        cout << "Matriz nao eh simetrica." << endl;
    }
    
    return 0;
    
}