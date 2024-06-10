#include<iostream>
#include<vector>
#define max 300
int main(){
    int n;
    std::cout << "O grupo eh composto por quantas pessoas? ";
    std::cin >> n;

    if(n > max || n < 1){
        std::cout << "ERRO!, numero min de pessoa 1 e numero maximo 300, repita";
        return 1;
    }

    std::vector<float> somaSalario(42,0);
    std::vector<int> pessoas(42,0);

    float salario;
    int praia;

    for(int i = 0; i < n; i++){
        std::cout << i + 1 << "o Pessoa: ";

        do{
            std::cout << "Qual praia voce prefere? 1 ate 42: ";
            std::cin >> praia;
            if (praia > 42 || praia < 1){
                std::cout << "Codigo da praia invalido, repita" << std::endl;
            }
        }while(praia > 42 || praia < 1);
            pessoas[praia - 1]++;

        do{
            std::cout << "Agora informe seu salario: ";
            std::cin >> salario;
            if (salario < 1) {
                std::cout << "Salario invalido, repita" << std::endl;
            }
        }while (salario < 1);
        
        somaSalario[praia - 1] += salario;
    }

    for(int i = 0; i < 42; i++){
        if(pessoas[i] == 0){
            std::cout << "Nenhum turista escolheu essa praia.";
        } else{
            std::cout << "Praia" << i + 1 << "- pessoas: " << pessoas[i] << ", Renda media:" << somaSalario[i]/pessoas[i] << "R$" << std::endl;
        }
    }

    return 0;
}