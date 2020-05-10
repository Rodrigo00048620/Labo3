#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
int main(){
    cout << "Ingresar el radio del circulo" << endl;
        float r ;
            cin >> r ;
            float area = r * M_PI * 2;
            float perimetro = M_PI * r*r;
                 cout << "El area es del circulo es: " << area << endl; 

                cout << "El perimetro es del circulo es: " << perimetro << endl; 

}
