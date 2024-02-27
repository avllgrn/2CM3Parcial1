#include <iostream>
using namespace std;

int main(void){
    cout << "Hello world!" << endl;
    return 0;
}
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void funcion(void){
};

class Persona{
public:
    int anioNacimiento;
    float estatura;
    string Nombre;
    char CURP[16];
    Persona(void){
        cout<<"Construido por Persona(void)"<<endl;
        anioNacimiento = 2005;
        CURP[0] = '\0';
    };
    Persona(int aN, char c[16]){
        cout<<"Construido por Persona(int aN, char c[16])"<<endl;
        anioNacimiento = aN;
        strcpy(CURP,c);
    };
    ~Persona(){
        cout<<"Objeto destruido..."<<endl;
    };
    int dimeTuEdad(void){
        return 2024 - anioNacimiento;
    };
    string dimeTuNombre(void){
        return Nombre;
    };
};

int main(void){
    Persona Juan,Pedro;
    Persona Rosa(2000,"ELCURPDEROSA");
    Persona Maria(2003,"ELCURPDEMARIA");

    system("pause");
    system("cls");

    cout << "Juan.anioNacimiento: " << Juan.anioNacimiento << endl;
    cout << "Juan.CURP: " << Juan.CURP << endl<< endl;

    cout << "Pedro.anioNacimiento: " << Pedro.anioNacimiento << endl;
    cout << "Pedro.CURP: " << Pedro.CURP << endl<< endl;

    cout << "Rosa.anioNacimiento: " << Rosa.anioNacimiento << endl;
    cout << "Rosa.CURP: " << Rosa.CURP << endl<< endl;

    cout << "Maria.anioNacimiento: " << Maria.anioNacimiento << endl;
    cout << "Maria.CURP: " << Maria.CURP << endl<< endl;

    cout<<"Fin del programa"<<endl<<endl;
    system("pause");

    return 0;
}
