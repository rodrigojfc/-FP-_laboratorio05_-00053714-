#include <iostream>
using namespace std;
int num1, num2;

int suma(){
int sum;
cout<<"Ingresar numero \n";
cin>>num1;
cout<<"Ingresar numero \n";
cin>>num2;
sum = num1 + num2;
cout<<"La suma es: "<< sum<<"\n \n";
}
int resta(){
int res_ta;
cout<<"Ingresar numero \n";
cin>>num1;
cout<<"Ingresar numero \n";
cin>>num2;
res_ta = num1-num2;
cout<<"La resta es: "<<res_ta<<"\n \n";
}
int multi(){
int mult;
cout<<"Ingresar numero \n";
cin>>num1;
cout<<"Ingresar numero \n";
cin>>num2;
mult = num1 * num2;
cout<<"La multiplicacion es: "<<mult<<"\n \n";
}
int divis(){
float div;
cout<<"Ingresar numero \n";
cin>>num1;
cout<<"Ingresar numero \n";
cin>>num2;
div = num1/num2;
cout<<"La division es: "<< div<<"\n \n";
}
int fibn() {
int a =0, b=1,c;
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
 cout<<"\n \n";
}
}
long factorial (long a){
 if (a > 1)
  return (a * factorial (a-1));
 else
  return 1;
}
int main(){
    int seleccion=0;
    while(seleccion<7){
    cout<<"Bienvenido a la calculadora \n"<<"Seleccione una opcion:\n";
    cout<<"1 Suma \n 2 Resta\n 3 Multiplicacion \n 4 Division \n 5 Serie de Fibonacci \n 6 Factorial de un numero \n 7 salir \n\n Opcion: ";
    cin>>seleccion;
    switch(seleccion){
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multi();
            break;
        case 4:
            divis();
            break;
        case 5:
            fibn();
            break;
        case 6:
            cout<<"Ingrese un numero \n";
            long number;
            cin>>number;
            cout << number << "! = " << factorial (number);
            cout <<"\n \n";
            break;
        case 7:
            cout<<"Ha salido de la calculadora";
            break;

    }
    }
}

