#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;
int main(){
    string cadeira[10], reserva;
    bool resposta = true,found;

    for(int i = 0; i < 10; i++){
        cadeira[i] = "B" + to_string(i + 1);
    }
    
    while(resposta){
        for(int i = 0; i < 10; i++){
        cout << "[" << cadeira[i] << "]";
        }
        cout << endl;

        cout << "RESERVA: " ;
        cin >> reserva;

        for(char& c : reserva){
            c = toupper(c);
        }

        if(reserva == "FIM"){
            resposta = false;
            break;
        }

        found = false;
        for(int i = 0; i < 10; i++){
            if(reserva == cadeira[i]){
                cadeira[i] = "---";
                found = true;
            } 
        }

        if(!found){
            cout << "Cadeira indisponivel ou já reservada" << endl;
        }

        cout << "Para finalizar a reserva digite: FIM " << endl;
    }

    cout << "Reserva finalizada aproveite!" << endl;
}