#include <iostream>
using namespace std;

int main(void){
    float x1,y1,x2,y2,x3,y3;

    cout << "Ingresa x1 ";
    cin >> x1;
    cout << "Ingresa y1 ";
    cin >> y1;
    cout << "Ingresa x2 ";
    cin >> x2;
    cout << "Ingresa y2 ";
    cin >> y2;

    x3 = x1+x2;
    y3 = y1+y2;

    cout << "P1(" << x1 << "," << y1 << ")" << endl;
    cout << "P2(" << x2 << "," << y2 << ")" << endl;
    cout << "P3(" << x3 << "," << y3 << ")" << endl;

    return 0;
}
