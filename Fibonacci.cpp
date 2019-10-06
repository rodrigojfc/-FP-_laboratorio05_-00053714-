#include <iostream>
using namespace  std;
int a =0, b=1,c;
int main(){
 int d;
 cout<<"Ingrese un numero \n";
 cin>>d;
 cout<<a<<" "<<b<<" ";
if (d<0){
 cout<<"El numero es invalido";
}
else if (d==1){
 cout<< b;
}
else if (d==0){
 cout<< a;
}
else {
 while (a<d){
   c = b+a;
   cout<<c<<" ";
   b = c;
   a = b;
 }
}
}
