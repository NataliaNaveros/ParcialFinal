#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    float r, c, cu,l,re;
    float pi;
    cout << "Ingrese el numero de casos: ";
    cin>>t;
    pi=2*acos(0.0);
    for (int i=0;i<t;i++){
      cout << "Ingrese el radio: ";
      cin>>r;
      c=pi*(r*r);
      cu=r+r;
      re=cu*cu;
      l=re-c;
        cout << "case " << i+1 << ": "<< l <<endl;
    }
return 0;
}
