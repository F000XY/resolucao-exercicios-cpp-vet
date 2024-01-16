#include <iostream>

void testeVetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        if (vet[i]>12)
        {
            std::cout<<vet[i]<<"  ";
        }    
    }
}
int main()
{
    int vet[11]={12,12,23,24,24,35,10,9};
    testeVetor(vet,11);
    return 0;
}