#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double c1, c2, hipotenusa;

    cout<<"Ingrese el primer cateto: "; cin>>c1;
    cout<<"Ingrese el segundo cateto: "; cin>>c2;

    hipotenusa=sqrt(pow(c1, 2)+pow(c2, 2));

    cout<<"La hipotenusa es: "<<hipotenusa<<endl;

}