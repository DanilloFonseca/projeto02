#include<iostream>

int cubo_magico(int n);
int cubos(int n);
int funcao_recebe_valor();

int main(){

    int x;
    
    x = funcao_recebe_valor();

    std::cout<<"O somatório dos cubos é "<<cubos(x) <<std::endl;

    return 0;
}

int cubo_magico(int n){
    return (n*n*n);
}


int cubos(int n){

    int soma = 0;

    if(n <=1)
        return 1;
    else
        return cubo_magico(n) + cubos(n-1);

}

int funcao_recebe_valor(){
    int y;
    std::cout<<"Desejas calcular a soma dos cubos a partir de qual número? ";
    std::cin>>y;
    std::cout<<std::endl;
    return y;
}
