#include <iostream>

int testeVetor(int vet[], int tam)
{
    int sum=0;
    for (int i = 0; i < tam; i++)
    {
        sum+=vet[i];
    }
    return sum;
}

int main()
{
    int vetor[7]={1,2,3,4,5,6};
    int soma=testeVetor(vetor,7);
    std::cout<<soma;
    return 0;

}