#include <iostream>
#include <stdlib.h>
using namespace std;

class Complejo{
private:
    double real;
    double imaginario;
public:
    Complejo(void){
        Complejo::real = 0.0;
        Complejo::imaginario = 0.0;
        cout<<"Objeto construido por Complejo(void)"<<endl;
    };
    Complejo(double real, double imaginario){
        Complejo::real = real;
        Complejo::imaginario = imaginario;
        cout<<"Objeto construido por Complejo(double real, double imaginario)"<<endl;
    };
    ~Complejo(void){
        cout<<"Objeto destruido =)"<<endl;
    };
    void pideleAlUsuarioTuEstado(void){
        cout << "Dame mi real ";
        cin >> this->real;
        cout << "Dame mi imaginario ";
        cin >> this->imaginario;
    };
    void muestraTuEstado(void){
        cout << this->real;
        if(imaginario<0)
            cout << this->imaginario << "i";
        else
            cout << "+" << this->imaginario << "i";
    };
    double dameTuAtributoReal(void){
        return this->real;
    };
    void modificaTuAtributoReal(double real){
        this->real = real;
    };
    double dameTuAtributoImaginario(void){
        return this->imaginario;
    };
    void modificaTuAtributoImaginario(double imaginario){
        this->imaginario = imaginario;
    };
};

int main(void){
    cout << endl << "Inicia main" << endl << endl;
    Complejo C1,C2,C3,C4;
    system("pause");
    system("cls");

    cout << endl;
    cout << "Ingresa C1" << endl;
    C1.pideleAlUsuarioTuEstado();
    cout << endl;
    cout << "Ingresa C2" << endl;
    C2.pideleAlUsuarioTuEstado();

    C3.modificaTuAtributoReal( C1.dameTuAtributoReal() + C2.dameTuAtributoReal() );
    C3.modificaTuAtributoImaginario( C1.dameTuAtributoImaginario() + C2.dameTuAtributoImaginario() );

    C4.modificaTuAtributoReal( C1.dameTuAtributoReal() - C2.dameTuAtributoReal() );
    C4.modificaTuAtributoImaginario( C1.dameTuAtributoImaginario() - C2.dameTuAtributoImaginario() );

    cout << endl << endl;
    cout << "C1 =\t\t= ";
    C1.muestraTuEstado();
    cout << endl;
    cout << "C2 =\t\t= ";
    C2.muestraTuEstado();
    cout << endl;
    cout << "C3 = C1+C2\t= ";
    C3.muestraTuEstado();
    cout << endl;
    cout << "C4 = C1-C2\t= ";
    C4.muestraTuEstado();
    cout << endl << endl;

    cout<<endl<<"Termina main"<<endl<<endl;
    system("pause");
    return 0;
}
