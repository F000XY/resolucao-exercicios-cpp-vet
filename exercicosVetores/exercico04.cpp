#include <iostream>

int somaDeVetores(int a[], int b[])
{
    int soma=a[0] + b[0];
    return soma;
}

int main(){
    int a[1]={1};
    int b[1]={6};
    int soma=somaDeVetores(a,b);
    std::cout<<soma;
    return 0;
}