#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(void){
    string Cadena1;
    string Cadena2("de lenguaje C");
    string Cadena3(Cadena2);

    cout<<"Cadena1: "<<Cadena1<<endl;
    cout<<"Cadena2: "<<Cadena2<<endl;
    cout<<"Cadena3: "<<Cadena3<<endl<<endl;
    system("pause");
    cout<<endl<<endl;

    Cadena1.assign("Dos ");
    Cadena3.assign(Cadena1);

    cout<<"Cadena1: "<<Cadena1<<endl;
    cout<<"Cadena2: "<<Cadena2<<endl;
    cout<<"Cadena3: "<<Cadena3<<endl<<endl;
    system("pause");
    cout<<endl<<endl;

    Cadena3.append("cadenas ");
    Cadena3.append(Cadena2);

    cout<<"Cadena1: "<<Cadena1<<endl;
    cout<<"Cadena2: "<<Cadena2<<endl;
    cout<<"Cadena3: "<<Cadena3<<endl<<endl;
    system("pause");
    cout<<endl<<endl;

    cout<<"Cadena1 tiene "<<Cadena1.size()<<" caracteres"<<endl;
    cout<<"Cadena2 tiene "<<Cadena2.size()<<" caracteres"<<endl;
    cout<<"Cadena3 tiene "<<Cadena3.size()<<" caracteres"<<endl<<endl;

    cout<<"Cadena1 tiene "<<Cadena1.length()<<" caracteres"<<endl;
    cout<<"Cadena2 tiene "<<Cadena2.length()<<" caracteres"<<endl;
    cout<<"Cadena3 tiene "<<Cadena3.length()<<" caracteres"<<endl<<endl;
    system("pause");
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Cadena1: "<<Cadena1<<endl;
    cout<<"Cadena2: "<<Cadena2<<endl;
    cout<<"Cadena3: "<<Cadena3<<endl<<endl;

    cout<<"Cadena1.at(0): "<<Cadena1.at(0)<<endl;
    cout<<"Cadena2.at(1): "<<Cadena2.at(10)<<endl;
    cout<<"Cadena3.at(20): "<<Cadena3.at(20)<<endl<<endl;

    int i;
    cout<<endl<<"Cadena 1"<<endl;
    for(i=0;i<Cadena1.size();i++){
        cout<<"Cadena1.at("<<i<<") => "<<Cadena1.at(i)<<endl;
    }

    cout<<endl<<"Cadena 2"<<endl;
    for(i=0;i<Cadena2.size();i++){
        cout<<"Cadena2.at("<<i<<") => "<<Cadena2.at(i)<<endl;
    }

    cout<<endl<<"Cadena 3"<<endl;
    for(i=0;i<Cadena3.size();i++){
        cout<<"Cadena3.at("<<i<<") => "<<Cadena3.at(i)<<endl;
    }

    return 0;
}
