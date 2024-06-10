#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;
int main(){
    string B[10]={""};
    char res;
    int reserva;

    do
    {   
        for(int i = 0; i < 10; i++){
            if(B[i] == ""){
                cout << "B" << B[i] = to_string(i + 1);
            }else {
                cout << "B" << B[i] = "---";
            }
        }

        cout << "Reserva: B["; cin >> reserva; cout << "]";
        reserva -=;

        if (B[reserva] == ""){
            B[reserva] = "X";
        }

        cout << "Realizar mais uma reserva?" << endl;
        cin.ignore();
        res = toupper(cin.get());
        
    } while (reserva != 'N');
    
}