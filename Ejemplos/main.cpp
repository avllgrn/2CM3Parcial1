#include <iostream>
#include <stdlib.h>
#include <math.h>
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
    Punto2D P;
    system("pause");
    system("cls");

    cout << endl;
    cout << "Ingresa P1" << endl;
    P.pideleAlUsuarioTuEstado();
    cout << endl;

    if(P.dameTuAtributoX()>0 && P.dameTuAtributoY()>0){
        cout << "P";
        P.muestraTuEstado();
        cout << " esta en el cuadrante I";
    }
    else if(P.dameTuAtributoX()==0 && P.dameTuAtributoY()>0){
        cout << "P";
        P.muestraTuEstado();
        cout << " esta en el eje Y+";
    }
    else if(P.dameTuAtributoX()<0 && P.dameTuAtributoY()>0){
        cout << "P";
        P.muestraTuEstado();
        cout << " esta en el cuadrante II";
    }
    else if(P.dameTuAtributoX()<0 && P.dameTuAtributoY()==0){
        cout << "P";
        P.muestraTuEstado();
        cout << " esta en el eje X-";
    }
    else if(P.dameTuAtributoX()<0 && P.dameTuAtributoY()<0){
        cout << "P";
        P.muestraTuEstado();
        cout << " esta en el cuadrante III";
    }
    else if(P.dameTuAtributoX()==0 && P.dameTuAtributoY()<0){
        cout << "P";
        P.muestraTuEstado();
        cout << " esta en el eje Y-";
    }
    else if(P.dameTuAtributoX()>0 && P.dameTuAtributoY()<0){
        cout << "P";
        P.muestraTuEstado();
        cout << " esta en el cuadrante IV";
    }
    else if(P.dameTuAtributoX()>0 && P.dameTuAtributoY()==0){
        cout << "P";
        P.muestraTuEstado();
        cout << " esta en el eje X+";
    }
    else {
        cout << "P";
        P.muestraTuEstado();
        cout << " esta en el origen";
    }

    cout<<endl<<"Termina main"<<endl<<endl;
    system("pause");
    return 0;
}
