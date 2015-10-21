#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int calculaRaizQuadradaERetornaValor(int valorLimite){

    float raiz;
    int raizInteira;

    raiz = sqrt(valorLimite);
    raizInteira = raiz;

    return raizInteira;
}

void arrumaArray(int *vet,int valorLimite){

    int i;

    vet[0] = 2;
    for(i=1;i<valorLimite-1;i++){

        vet[i] = (vet[i-1] + 1);
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int valorLimite,i,verificaSeChegouARaiz = 0,raizInteira,aux;

    scanf("%d",&valorLimite);

    int vet[valorLimite-1];
    memset(vet,0,sizeof(vet)); // inicializar todas as posições do vetor com 0

    raizInteira = calculaRaizQuadradaERetornaValor(valorLimite);
    arrumaArray(vet,valorLimite);

    while(verificaSeChegouARaiz < raizInteira){

        if(vet[verificaSeChegouARaiz]!=0){

            aux = vet[verificaSeChegouARaiz];
        }

        for(i=0;i<valorLimite-1;i++){

            if(vet[i]!= 0 && vet[i]!=aux){

                if(vet[i] % aux == 0){

                    vet[i] = 0;
                }
            }
        }

        verificaSeChegouARaiz++;
    }

    printf("valores diferentes de 0 são os números que são primos\n");
    for(i=0;i<valorLimite-1;i++){
        //if(vet[i]!=0){
            printf("%d ",vet[i]);
        //}
    }

    return 0;
}
