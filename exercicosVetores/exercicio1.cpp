#include <iostream>

int recebendovetor(int vet[], int tam)
{
    int indice=0;
    int maior=vet[0];
    for (int i = 0; i < tam; i++)
    {
        if (vet[i]>maior)
        {
            maior=vet[i];
            indice=i;
        }
    }
    return indice;    
}

int main()
{
    int vet[6]={3,4,5,6,7,2};
    int pos;
    pos=recebendovetor(vet,6);
    std::cout<<pos;

    return 0;
}