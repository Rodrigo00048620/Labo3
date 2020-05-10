#include <iostream>
using namespace std;
int main(){
    cout <<"Ingrese el primer numero a promediar" << endl;
    int n1;
    cin >> n1;
    cout <<"Ingrese el segundo numero a promediar" << endl;
    int n2;
    cin >> n2;
    cout <<"Ingrese el tercer numero a promediar" << endl;
    int n3;
    cin >> n3;
    int promedio = n1 + n2 + n3 / 3;
    cout << "Su promedio es: " << + promedio << endl;
}
