#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int iden[3][3]={0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == i){
                iden[i][j] = 1;
            }
                cout  << iden[i][j];
        }
        cout << endl;
    }
}