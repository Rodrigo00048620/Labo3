#include <iostream>
using namespace std;
int main(){
    cout << "Ingrese su nombre" << endl;
    char nombre;
    cin >> nombre;
    cout << "Ingrese el dinero que posee?"<< endl;
    float dinero;
    cin >> dinero;
    cout << "Usted posee: " << dinero << " desea realizar una compra (1/0)?";
    bool respuesta;
    cin >> respuesta;

    bool x1 = 1;
    bool x2 = 0;

    if(respuesta = x1){
        cout << "Que producto desea comprar?";
            char producto;
            cin >> producto;
            float p1 = 50.00;
            cout << producto << " tiene un precio de: "<<  p1  << + ". Cuantas veces desea comprarlo?" << endl;
            float cantidad;
            cin >> cantidad;
            float precioT = cantidad * p1;
            cout << "Usted compro: "<< producto  << " la cantidad de: " << cantidad << " por un precio total de: " << precioT << endl; 



        }else if (respuesta = x2){
            cout << "Jaja saludos";

        }else{
            cout << "Ingrese un valor valido";
        
    }
    
    
} 