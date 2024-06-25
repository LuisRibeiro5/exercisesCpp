/*Uma fábrica produz n (1 ≤ n ≤ 10) tipos de motores (M1, M2, ... Mn). A fábrica tem em uma tabela a quantidade de cada tipo de motor produzido em cada mês do ano: 
Para cada tipo de motor, a fábrica também tem tabelado o custo de fabricação e o preço de venda (armazenados em outros 2 vetores). 
Faça um algoritmo que calcule, para cada mês, o custo de fabricação dos motores, a receita bruta e a receita líquida. Ao final, apresente todos os resultados.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout << "Digite quantos tipos de motores a fabrica produz: "; cin >> n;
    }while(n < 2 || n > 10);

    int mat[12][10]= {{0}};
    for (int i = 0; i < 12; i++)
    {
        cout << "Mes " << i + 1 << endl;
        for (int j = 0; j < n; j++)
        {
            cout << "Motores do tipo " << j + 1 << " vendidos: ";
            cin >> mat[i][j];
        }
        
    }
    
    float custo[10] = {0}, venda[10] = {0};
    for (int i = 0; i < n; i++)
    {
        cout << "Custo de fabricação motor " << i + 1; cin >> custo[i];
        cout << "Preço de venda motor " << i + 1; cin >> venda[i];

    }
    
    float custoMensal[12] = {0}, vendaBruta[12] = {0}, lucro[12] = {0};
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < n; j++)
        {
            custoMensal[i] += mat[i][j] * custo[i];
            vendaBruta[i] += mat[i][j] * venda[i];
        }
        lucro[i] = vendaBruta[i] - custoMensal[i];
    }
    
    for (int i = 0; i < 12; i++)
    {
        cout << "No mes " << i + 1 << ": " << endl;
        cout << "Custo dos motores foi: " << custoMensal[i] << "R$" << endl;
        cout << "Venda bruta dos motores foi: " << vendaBruta[i] << "R$" << endl;
        cout << "Lucro dos motores foi: " << lucro[i] << "R$" << endl;
        cout << "---------------------------------" << endl;
    }
    
    return 0;
}