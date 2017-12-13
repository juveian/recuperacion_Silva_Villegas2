#include <iostream>

using namespace std;

int main() {

    cout << "Hola Mundo" << endl;

	int a,b,suma;

	cout<<"\n ingrese numero a:";

	cin>>a;

	cout<<"\n ingrese numero b:";

	cin>>b;

	suma=a+b;

	cout<<"\n la suma de "<<a<<"+"<<b<<" es:"<<suma;

	long double factorial(int);
 	int n;
    cout << "Introduzca numero: ";
    cin >> n;
    cout << "factorial: " << factorial(n) << endl;
    system("pause");

    return 0;

}
long double factorial(int n)
{
    long double fact;
    if (n==0)
        return 1;
    else
         return n*factorial(n-1);
}