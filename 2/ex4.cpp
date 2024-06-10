#include<iostream>
#include<cmath>
using namespace std;

int main () {
    int canal4=0,canal5=0,canal9=0,canal12=0,pessoas,canal,total;
    char resp;

    do
    {
        do
        {
            cout << "Qual canal esta sendo visto?4/5/9/12/0" << endl;
            cin >> canal;
        } while (canal != 4 and canal != 5 and canal != 9 and canal != 12 and canal != 0);
        
        if (canal != 0)
        {
            cout << "Quantas pessoas estao assistindo a tv?" << endl;
            cin >> pessoas;
            switch (canal)
            {
            case 4:
                canal4 += pessoas;
                break;
            case 5:
                canal5 += pessoas;
                break;
            case 9:
                canal9 += pessoas;
                break;
            case 12:
                canal12 += pessoas;
                break;
            }
        }
        do
        {
            cin.ignore();
            cout << "Mais uma casa?" << endl;
            resp = toupper(cin.get());
        } while (resp != 'N' and resp != 'S');
    } while (resp != 'N');
    
    total = canal4 + canal5 + canal9 + canal12;
    if (total > 0)
    {
        cout << "A audiencia do canal 4 é " << (float)canal4*100/total << "%" << endl;
        cout << "A audiencia do canal 5 é " << (float)canal5*100/total << "%" << endl;
        cout << "A audiencia do canal 9 é " << (float)canal9*100/total << "%" << endl;
        cout << "A audiencia do canal 12 é " << (float)canal12*100/total << "%" << endl;
    } else {
        cout << "Nao tinha tv ligada";
    }
    
    return 0;
}