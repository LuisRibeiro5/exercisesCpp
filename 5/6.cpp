#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string times[4]={""}, aux = "";
    //int c = 1;

    for(int i = 0; i < 4; i++){
        
        cout << "Digite o " << i + 1 << "o time" << endl;
        getline(cin, times[i]);
      
    }
        //forma 1
    /* for(int i = 0; i < 3; i++){
        for(int j = 1; j < 3; j++){
           cout << times[0] << "x" << times[j] << endl;
        }

        aux = times[0];
        times[0] = times[c];
        times[c] = aux;
        c++;
    }
    */    
        //forma 2
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(i != j){
                    cout << times[i] << " x " << times[j] << endl; 
                }
            }
        }
    return 0;
}