#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double a, b, c, d, raiz1, raiz2, Ip, Rp;

    cout<<"Ingrese a: ";cin>>a;
    cout<<"Ingrese b: ";cin>>b;
    cout<<"Ingrese c: ";cin>>c;
    d=pow(b,2)-(4*a*c);

    if(d>0){
        raiz1=(-b+sqrt(d))/(2*a);
        raiz2=(-b-sqrt(d))/(2*a);
        cout<<"Las raices son: "<<endl;
        cout<<"Raiz 1: "<<raiz1<<endl<<"Raiz 2: "<<raiz2<<endl;
    }else if(d==0){
        raiz1=(-b)/(2*a);
        cout<<"La unica raiz es: "<<endl<< "Raiz: "<<raiz1<<endl;
    }else{
        Rp=-b/(2*a);
        Ip=sqrt(-d)/(2*a);
        cout<<"Las raices complejas son:"<< endl;
        cout<<"Raiz 1: "<<Rp<<" + "<<Ip<<"i"<<endl;
        cout<<"Raiz 2: "<<Rp<<" - "<<Ip<<"i"<<endl;
    }

    return 0;
}