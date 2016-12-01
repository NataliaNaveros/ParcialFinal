#include <iostream>

using namespace std;

int main (){
    int T,a,b,t,r;
    cout << "Ingrese numero de casos: ";
    cin>>T;
    t=1;

    while(t<=T){
            cout << "Ingrese su posicion: ";
            cin>>a;
            cout << "Ingrese la posicion del ascensor: ";
            cin>>b;
            r=(b*4)+9+10;
            cout<<"Case "<<t<<": "<<r<<endl;
            t++;
    }
return 0;
}
