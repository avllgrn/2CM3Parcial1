#include <iostream>
#include <stdlib.h>
using namespace std;

class Punto2D{
private:
    double x;
    double y;
public:
    Punto2D(void){
        Punto2D::x = 0.0;
        Punto2D::y = 0.0;
        cout<<"Objeto construido por Punto2D(void)"<<endl;
    };
    Punto2D(double x, double y){
        Punto2D::x = x;
        Punto2D::y = y;
        cout<<"Objeto construido por Punto2D(double x, double y)"<<endl;
    };
    ~Punto2D(void){
        cout<<"Objeto destruido =)"<<endl;
    };
    void pideleAlUsuarioTuEstado(void){
        cout << "Dame mi x ";
        cin >> this->x;
        cout << "Dame mi y ";
        cin >> this->y;
    };
    void muestraTuEstado(void){
        cout << "(" << this->x << "," << this->y << ")";
    };
    double dameTuAtributoX(void){
        return this->x;
    };
    void modificaTuAtributoX(double x){
        this->x = x;
    };
    double dameTuAtributoY(void){
        return this->y;
    };
    void modificaTuAtributoY(double y){
        this->y = y;
    };
};

int main(void){
    cout << endl << "Inicia main" << endl << endl;
    Punto2D P1,P2,P3;
    system("pause");
    system("cls");

    cout << endl;
    cout << "Ingresa P1" << endl;
    P1.pideleAlUsuarioTuEstado();
    cout << endl;
    cout << "Ingresa P2" << endl;
    P2.pideleAlUsuarioTuEstado();

    P3.modificaTuAtributoX( P1.dameTuAtributoX() + P2.dameTuAtributoX() );
    P3.modificaTuAtributoY( P1.dameTuAtributoY() + P2.dameTuAtributoY() );

    cout << endl << endl;
    cout << "  P1";
    P1.muestraTuEstado();
    cout << endl;
    cout << "+ P2";
    P2.muestraTuEstado();
    cout << endl;
    cout << "= P3";
    P3.muestraTuEstado();
    cout << endl << endl;

    cout<<endl<<"Termina main"<<endl<<endl;
    system("pause");
    return 0;
}
