#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

bool esNumero(char c);
bool esMayuscula(char c);
bool esMinuscula(char c);
bool esLetra(char c);
bool esEspecial(char c);

int main(void){
    int i,numeros=0, minusculas=0, mayusculas=0,letras=0, especiales=0;
    string Cadena;

    cout<<"Ingresa cadena ";
    cin>>Cadena;

    for(i=0; i<Cadena.size(); i++){
        if(esNumero(Cadena.at(i)))
            numeros++;

		if(esMinuscula(Cadena.at(i)))
            minusculas++;

        if(esMayuscula(Cadena.at(i)))
            mayusculas++;

        if(esLetra(Cadena.at(i)))
            letras++;

        if(esEspecial(Cadena.at(i)))
            especiales++;
    }

    cout<<endl<<endl
        <<"tiene "<<Cadena.size()<<" caracteres."<<endl
        <<"tiene "<<numeros <<" numeros."<<endl
        <<"tiene "<<minusculas<<" minusculas."<<endl
        <<"tiene "<<mayusculas<<" mayusculas."<<endl
        <<"tiene "<<letras<<" letras."<<endl
        <<"tiene "<<especiales<<" caracteres especiales."
        <<endl<<endl;

    return 0;
}

bool esNumero(char c){
    return 48<=c && c <=57;
}
bool esMayuscula(char c){
    return 65<=c && c <=90;
}
bool esMinuscula(char c){
    return 97<=c && c <=122;
}
bool esLetra(char c){
    return esMayuscula(c) || esMinuscula(c);
}
bool esEspecial(char c){
    return !esLetra(c) && !esNumero(c);
}
