#include <iostream>
using namespace std;

int main(void){
    float x1,y1,x2,y2,m;

    cout << "Ingresa x1 ";
    cin >> x1;
    cout << "Ingresa y1 ";
    cin >> y1;
    cout << "Ingresa x2 ";
    cin >> x2;
    cout << "Ingresa y2 ";
    cin >> y2;

    m = (y2-y1)/(x2-x1);

    cout << "P1(" << x1 << "," << y1 << ")" << endl;
    cout << "P2(" << x2 << "," << y2 << ")" << endl;
    cout << "m = "<< m << endl;

    return 0;
}
