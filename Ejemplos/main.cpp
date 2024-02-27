#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    float x1,y1,x2,y2,d;

    cout << "Ingresa x1 ";
    cin >> x1;
    cout << "Ingresa y1 ";
    cin >> y1;
    cout << "Ingresa x2 ";
    cin >> x2;
    cout << "Ingresa y2 ";
    cin >> y2;

    d = sqrt(pow(y2-y1,2) + pow(x2-x1,2));

    cout << "P1(" << x1 << "," << y1 << ")" << endl;
    cout << "P2(" << x2 << "," << y2 << ")" << endl;
    cout << "d = "<< d << endl;

    return 0;
}
