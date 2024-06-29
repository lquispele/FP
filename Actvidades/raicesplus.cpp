#include<iostream>
#include<cmath>

using namespace std;

void calcularRaices(double a,double b,double c,double&raiz1,double&raiz2,bool&Reales){
    double d=pow(b,2)-4*a*c;
    if(d>=0){ 
        Reales=true;
        raiz1=((-b)+sqrt(d))/(2*a);
        raiz2=((-b)-sqrt(d))/(2*a);
    }else{  
        Reales=false;
        raiz1=-b/(2*a);
        raiz2=sqrt(-d)/(2*a);
    }
}

int main(){
    double a,b,c, raiz1,raiz2;
    bool Reales;

    cout<<"Ingrese a:"; cin>>a;
    cout<<"Ingrese b:"; cin>>b;
    cout<<"Ingrese c:"; cin>>c;

    calcularRaices(a,b,c,raiz1,raiz2,Reales);

    if(Reales){
        if(raiz1==raiz2){
            cout<<"La unica raiz real es:"<<raiz1<<endl;
        }else{
            cout<<"Las raices reales son:"<<endl;
            cout<<"Raiz 1:"<<raiz1<<endl;
            cout<<"Raiz 2:"<<raiz2<<endl;
        }
    }else{
        cout<<"Las raices complejas son:"<<endl;
        cout<<"Raiz 1:"<<raiz1<<"+"<<raiz2<<"i"<<endl;
        cout<<"Raiz 2:"<<raiz1<<"-"<<raiz2<<"i"<<endl;
    }

    return 0;
}