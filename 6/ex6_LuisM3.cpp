/*Uma fábrica produz n (2 <= n <= 10) tipos de motores (M1, M2, ...Mn). A fábrica armazenou em uma tabela 
a quantidade de cada tipo de motor produzido em cada mês do ano: A fábrica também tem armazenado em um vetor o custo de fabricação para cada tipo de motor. 
Faça um programa que calcule e apresente os custos mensais para fabricação dos motores e o custo anual.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Quantos tipos de motores sera produzido nesse ano? 2 até 10" << endl;
        cin >> n;
    } while (n < 2 || n > 10);

    float custo[10] = {0};
    cout << "Custo de cada motor: " << endl;
    for (int i = 0; i < n; i++){
        cout << "Motor " << i + 1 << ": ";
        cin >> custo[i];
    }
    
    int tabela[12][10] = {{0}};
    cout << "Motores produzidos em cada mes do ano: " << endl;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < n; j++)
        {
            cout << "Mes " << i + 1 << ", Qtde Motor " << j + 1;
            cin >> tabela[i][j]; 
        }
    }
    
    float custoM[12] = {0};
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < n; j++)
        {
             custoM[i] += tabela[i][j] * custo[j];
        }
    }
    
    float anual = 0;
    for (int i = 0; i < 12; i++)
    {
        anual += custoM[i]; 
    }
    
    for (int i = 0; i < 12; i++)
    {
        cout << "Custo no mes " << i + 1 << ": " << custoM[i] << endl;
    }

    cout << "Custo anual foi de : " << anual;
}