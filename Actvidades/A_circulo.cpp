#include<iostream>
#include<cmath>
#define M_PI 3.14159
using namespace std;
int main(){
    double radio, Area;
    cout<<"Ingrese el valor del radio: ";
    cin>>radio;
    Area=M_PI * pow(radio,2);
    cout<<"El area es: "<<Area;
    return 0;
}