#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int rep, qtde, qtdeTotal=0;
    float valorTotal=0, comissao=0, valorTotalVendas=0, comissaoTotal=0, comissao1=0,comissao2=0,comissao3=0,comissao4=0;
    char resp;

    do
    {
        comissao = 0;
        do
        {
            cout << "Informe o codigo do representante: 1/4: ";
            cin >> rep;
        } while (not(rep == 1 or rep == 4 or rep == 3 or rep == 2 ));
        cout << "Informe a quantidade de itens do pedido: ";
        cin >> qtde; 
        cout << "Informe o valor total da venda:";
        cin >> valorTotal;
        if (qtde < 20)
        {
            comissao = valorTotal * 0.1;
        } else if (qtde <= 49) {
            comissao = valorTotal * 0.15;
        } else if (qtde <= 74) {
            comissao = valorTotal * 0.2;
        } else {
            comissao = valorTotal * 0.25;
        }
        valorTotalVendas += valorTotal;
        qtdeTotal += qtde;
        comissaoTotal += comissao;
        switch (rep)
        {
        case 1:
            comissao1 += comissao;
            break;
        case 2:
            comissao2 += comissao;
            break;
        case 3:
            comissao3 += comissao;
            break;
        case 4:
            comissao4 += comissao;
            break;
        }
        cin.ignore();
        cout << "O valor da comissao desse pedido é de R$" << comissao << endl;
        cout << "Deseja informar mais um pedido?";
        resp = toupper(cin.get());
    } while (resp != 'N');
    cout << "O total de vendas dos pedidos processados é de " << qtdeTotal << " itens, um total de R$" << valorTotalVendas << endl;
    cout << "O total de comissoes que a companhia pagou aos seus representantes é de R$" << comissaoTotal << endl;
    cout << "O total de comissoes para o representante 1 foi de R$" << comissao1 << endl;
    cout << "O total de comissoes para o representante 2 foi de R$" << comissao2 << endl;
    cout << "O total de comissoes para o representante 3 foi de R$" << comissao3 << endl;
    cout << "O total de comissoes para o representante 4 foi de R$" << comissao4 << endl;

    return 0;
}
