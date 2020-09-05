#include <iostream>
#include <string.h>

int main(){
    int cantidad; 
    char texto[40],textoRev[40]; 
    regresa:
    std::cout<<"Escribe un palindromo: "; 
    std::cin>>texto; 
    cantidad = strlen(texto);
    strcpy(textoRev,texto);
    strrev(textoRev);
    if(strcmp(texto,textoRev)!=0){
        std::cout<<"La palabra ingresada ("<<texto<<" "<<textoRev<<") no es un palindromo\n y tiene ("<<cantidad<<") caracteres \n";

        goto regresa;
    }
    std::cout<<"Muy bien la palabra ("<<texto<<") es un palindromo\n y tiene ("<<cantidad<<") caracteres \n";
    
    system("pause");
    return 0;
} 

// Basado en https://github.com/programadornovato/c-/commit/4834ecf58d2ca81e839200bb74e4ee55c0995e5a