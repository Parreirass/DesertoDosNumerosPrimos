#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int maximo = 300;
    int espaco = 0, maior = 0;
    int inicio, final, aux, div;

    for(int i =2; i<=maximo; i++){
        div=0;
        for (int j = 2; j <= sqrt(i); j++){
            if (i%j == 0){
                div++;
            }            
        }

        if(!div){
            if (espaco>maior){
                maior = espaco;
                inicio = aux;
                final = i;
            }
            aux = i;
            espaco = 0;
        }
        else{
            espaco++;
        }
    }
    cout<<"Maior espaço dos números primos fica entre "<< inicio << " e "<< final << ": "<< maior << "(tamanho do espaço)" << endl;
}