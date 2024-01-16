#include <iostream>

int subtracaoVet(int a[], int b[])
{
    int subtracao= a[0]-b[0];
    return subtracao;
}

int main()
{
    int a[1]={3};
    int b[1]={23};
    int resultado=subtracaoVet(a,b);
    std::cout<<resultado;
    return 0;
}