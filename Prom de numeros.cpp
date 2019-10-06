#include <iostream>
using namespace std;

int main (){
int cont, sum=0, d, num;
float prom;
cout<<"Ingrese un numero \n";
cin>>d;
for (cont=0; cont<d; cont++){
    cout<<"Ingresar un numero \n";
    cin>>num;
    sum += num;

}
prom = sum/d;
cout<<prom;
}
