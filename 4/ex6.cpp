#include<iostream>
#include<vector>
#define max 10
int main(){
    int n;
    std::cout << "Quantos valores quer que o vetor tenha: ";
    std::cin >> n;

    if (n > max || n < 1)
    {
        std::cout << "ERRO! Vetor deve ter entre 1 e 10 posicoes, repita" << std::endl;
        return 1;
    }
    
    std::cout << "Leitura das posicoes do vetor:" << std::endl;
    std::vector<int> x(n);

    for(int i = 0; i < n; i++){
        std::cout << i + 1 << "o Valor: ";
        std::cin >> x[i];
    }

    int troca = n;
    for(int i = 0; i < n/2; i++){
        std::swap(x[i],x[troca - 1]);
        troca--;
    }

    for(int i = 0; i < n; i++){
        std::cout << "[" << x[i] << "]";
    }
}