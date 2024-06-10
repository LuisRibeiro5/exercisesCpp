#include<iostream>
#include<cmath>
using namespace std;

int main() { 
    string nome;
    float preco,totalVendas=0;
    int qtde;
    char resp;

    do
    {   
       cout << "Qual o nome do vendedor?" << endl;
       getline(cin,nome);
       do
       {
         do
         {
            cout << "Qual o preco unitario do produto?" << endl;
            cin >> preco;
         } while (preco <= 0);

         do
         {
            cout << "Quantos produtos foram vendidos?" << endl;
            cin >> qtde;
         } while (qtde <= 0);

         totalVendas += preco * qtde;

         do
         {
            cin.ignore();
            cout << "Mais uma venda?" << endl;
            resp = toupper(cin.get());
         } while (resp != 'S' and resp != 'N');
       } while (resp != 'N');
       
       cout << "Nome:" << nome << endl;
       cout << "Venda total:R$" << totalVendas << endl;
       cout << "Salario:R$" << totalVendas*0.3 << endl;

       do
       {
        cin.ignore();
        cout << "Deseja digitar os dados de mais um vendedor?" << endl;
        resp = toupper(cin.get());
       } while (resp != 'S' and resp != 'N');
        
        cin.ignore();
    } while (resp != 'N');
    
}