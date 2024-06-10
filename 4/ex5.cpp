#include<iostream>
#include<cmath>
#define max 100
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Quantos atletas deseja analizar? ";
        cin >> n; 
    } while (n > max || n < 1);
    
    float altura[max]={0};
    string insc[max]={""};
    float alturaT = 0;
    cout << "Insira as informacoes dos " << n << " participantes: " << endl;

    for(int i = 0; i < n; i++){
        cout << i + 1 << "o atleta: " << endl;

        cout << "Inscricao:  ";
        cin.ignore();
        cin >> insc[i];

        do{
            cout << "Altura em centimetros: "; 
            cin >> altura[i];
                if (altura[i] < 1 || altura[i] > 250)
                {
                    cout << "ERRO, altura invalida, corrija." << endl;
                }
        }while(altura[i] < 1 || altura[i] > 250);  

        alturaT += altura[i];
    }

    float alturaMaior = altura[0];
    string inscMaior = insc[0];
    for(int i = 1; i < n; i++){
        if (alturaMaior < altura[i])
        {
            alturaMaior = altura[i];
            inscMaior = insc[i];
        }
    }

    float alturaMenor = altura[0];
    string inscMenor = insc[0];
    for(int i = 1; i < n; i++){
        if (alturaMenor > altura[i])
        {
            alturaMenor = altura[i];
            inscMenor = insc[i];
        }
    }

    cout << "A media de altura do grupo é: " << alturaT / n << "cm" << endl;
    
    cout << "O atleta mais baixo tem: " << alturaMenor << "cm, incricao:" << inscMenor << endl;
    cout << "O atleta mais alto tem: " << alturaMaior << "cm, incricao:" << inscMaior << endl;

    return 0;
}