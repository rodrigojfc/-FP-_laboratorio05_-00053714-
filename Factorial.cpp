#include <iostream>
using namespace std;

int factorial (int a)
{
 if (a > 1)
  return (a * factorial (a-1));
 else
  return 1;
}

int main ()
{
 cout<<"Ingrese un numero \n";
 int number;
 cin>>number;
 cout << number << "! = " << factorial (number);
 return 0;
}
