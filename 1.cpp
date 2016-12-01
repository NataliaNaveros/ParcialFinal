#include <iostream>
using namespace std;
int main (){
    int t, x1, y1, x2, y2,v, x, y;
    cout << "Ingrese numero de casos: ";
    cin>>t;
    for(int i=0;i<t;i++){
        cout << "Ingrese la cordenada x1: ";
        cin >> x1;
        cout << "Ingrese la cordenada y1: ";
        cin >> y1;
        cout << "Ingrese la cordenada x2: ";
        cin >> x2;
        cout << "Ingrese la cordenada y2: ";
        cin >> y2;
        cout << "Ingrese la cantida de vacas: ";
        cin >> v;
        for (int j=0;j<v;j++){
            cout << "Ingrese la posicion de la vaca en x: ";
            cin>>x;
            cout << "Ingrese la posicion de la vaca en y: ";
            cin>>y;
        if ((x>x1&&x<x2)&&(y>y1&&y<y2)){
            cout << "Yes" << endl;
        }else{
           cout << "No" << endl;
        }
        }
    }
return 0;
}
