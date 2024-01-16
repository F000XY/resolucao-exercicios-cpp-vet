#include <iostream>

int testeVetor(int vet[], int tam)
{
    int multi=1;
    for (int i = 0; i < tam; i++)
    {
        multi *=vet[i];
    }
    return multi;
}

int main()
{
    int vetor[9]={1,2,3,4,5,6,7,7,8};
    int multi=testeVetor(vetor, 9);
    std::cout<<multi;
    return 0;
}