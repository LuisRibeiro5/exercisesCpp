/*Elabore um algoritmo que inicialize de forma otimizada a matriz AnXn (1 ≤ n ≤ 10): 
Os valores acima da diagonal serão 2, abaixo da diagonal serão 0, da diagonal serão 1, com exceção das pontas (que serão 10 e 20). 
Não faça declaração com inicialização direta. Utilize laços. */
#include<iostream>
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Digite o tamanho da matriz quadrada:";
        cin >> n;
    } while (n < 1 || n > 10);
    
    int mat[10][10]={{0}};
    for (int i = 0; i < n - 1; i++){
        mat[i][i] = 1;
        for (int j = i + 1; j < n; j++)
        {
            mat[i][j] = 2;
        }
    }
    
    mat[0][0] = 10;
    mat[n -1][n -1] = 20;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << mat[i][j] << "]";
        }
        cout << endl;
    }
    
}