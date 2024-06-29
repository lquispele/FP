#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    int number,randomNumber;
    cout<<"Cuantos numeros quiere generar: ";
    cin>>number;

    for (int i = 0; i < number; i++) {
        randomNumber = rand() % 100;
        cout<<randomNumber<<endl;
    }

    return 0;
}