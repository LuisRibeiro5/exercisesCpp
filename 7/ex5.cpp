/* Faça um algoritmo que leia duas matrizes de inteiros AnXm e BpXq (2 ≤ n,m,p,q ≤ 10), e calcule a 
matriz resultante da multiplicação de AxB. Caso não seja possível realizar a multiplicação deve-se 
dar uma mensagem de erro*/
#include<iostream>
using namespace std;
int main(){
    int n,m, matA[10][10] = {{0}};
    do
    {
        cout << "Digite o tamanho da matriz A." << endl;
        cout << "linha:"; cin >> n;
        cout << "coluna:"; cin >> m; 
    } while (n < 2 || n > 10 || m < 2 || m > 10);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Posicao " << i + 1 << j + 1 << ": ";
            cin >> matA[i][j];
        }
        cout << endl;
    }
    

    int p,q, matB[10][10] = {{0}};
    do
    {
        cout << "Digite o tamanho da matriz B." << endl;
        cout << "linha:"; cin >> p;
        cout << "coluna:"; cin >> q; 
    } while (p < 2 || p > 10 || q < 2 || q > 10);

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << "Posicao " << i + 1 << j + 1 << ": ";
            cin >> matB[i][j];
        }
        cout << endl;
    }

    //Escrevendo matA e matB
    for (int k = 0; k < 2; k++)
    {   if(k == 0) cout << "MatA: " << endl;
        if(k == 1) cout << "MatB: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(k == 0) cout << "[" << matA[i][j] << "]";
                if(k == 1) cout << "[" << matB[i][j] << "]";
            }
            cout << endl;
        }
        cout << endl << endl;
    }
    

    int matR[10][10] = {{0}};
    if (m == p)
    {
        for (int i = 0; i < n; i++){
            for (int j = 0; j < q; j++){
                for (int k = 0; k < p; k++)
                {
                    matR[i][j] += matA[i][k] * matB[k][j];
                }

            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << "[" << matR[i][j] << "]";
            }
            cout << endl;
        }
    } else {
        cout << "Impossivel multiplicar." << endl;
    }

    return 0;
    
}