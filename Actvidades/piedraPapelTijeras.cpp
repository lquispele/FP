#include<iostream>
#include<cstdlib>
#include<ctime>
#include<unistd.h>
using namespace std;
string eleccion(int opcion) {
    switch (opcion) {
        case 1:
            return "Piedra";
        case 2:
            return "Papel";
        case 3:
            return "Tijeras";
        default:
            return "Desconocido";
    }
}

int main() {
    int user=0,pc=0,n,c,i=1;
    do{
        cout<<"Ronda "<<i<<endl;
        cout<<"Elige tu jugada: \n1.Piedra\n2. Papel\n3. Tijeras\nIngresa tu eleccion (1-3):"; cin>>n;

        srand(time(0));
        c=rand()%3+1;
        cout<<"Usuario:"<<eleccion(n)<<endl;
        cout<<"Computadora:"<<eleccion(c)<<endl;

        if(n==c) {
            cout<<"Empate en esta ronda"<<endl;
        } else if((n==1&&c==3)||(n==2&&c==1)||(n==3&&c==2)) {
            cout<<"Ganaste esta ronda"<<endl;
            user++;
        } else {
            cout<<"La computadora gano esta ronda"<<endl;
            pc++;
        }
        sleep(5);
        system("cls");
        i++;
    } while (user!=3&&pc!=3);
    if(user>pc) {
        cout<<"GANASTE!!"<<endl;
    } else if(user<pc) {
        cout<<"LA COMPUTADORA GANO!!"<<endl;
    } else {
        cout<<"UN EMPATE!!"<<endl;
    }

    return 0;
}