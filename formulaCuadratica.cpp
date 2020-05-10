#include <iostream>
#include <math.h> //sqtr = raiz cuadrada
using namespace std;
int main(){
     
    cout << "Ingrese el valor de a:";
        int a;
             cin >> a;
    cout << "Ingrese el valor de b:";
        int b;
            cin >> b;
    cout << "Ingrese el valor de c:";
        int c;
            cin >> c;

    float x1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);
    float x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);
    
    cout << "La formula cuadratica es: " << x1 << " y " << x2 << endl;
}