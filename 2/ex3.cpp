#include<iostream>
#include<cmath>
using namespace std;

int main () {
    char sexo,resp;
    float altura,alturaTurma=0,alturaMulheres=0;
    int cont=0,contM=0;

    do
    {
        do
        {
            cout << "Qual o sexo da pessoa?" << endl;
            sexo = toupper(cin.get());
            cin.ignore();
        } while (sexo != 'M' and sexo != 'F');
        do
        {
            cout << "Digite a altura:" << endl;
            cin >> altura;
        } while (altura <= 0);
        
        alturaTurma += altura;
        cont++;

        if (sexo == 'F')
        {
            alturaMulheres += altura;
            contM++;
        }

        
        cout << "Mais uma pessoa?" << endl;
        cin.ignore();
        resp = toupper(cin.get());
        cin.ignore();
    } while (resp != 'N');

    if (contM > 0)
    {
        cout << "A altura media das mulheres é " << alturaMulheres/contM << endl;
    } else {
        cout << "Nao existem mulheres na turma." << endl;
    }

    cout << "A media da turma é " << alturaTurma/cont;
    
    return 0;
}