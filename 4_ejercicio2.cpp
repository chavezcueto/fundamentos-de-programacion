/*escriba un programa que reciba tre numero enteros e imprima:
 * suma es
 * promedio es
 * producto es
 * menor es
 * mayor es
 * alumno: jaretzy yajahira chavez cueto*/

#include <iostream>
using namespace std;
int main()
{
	int a=0, b=0, c=0, suma=0, producto=0, promedio=0;

	cout << "ingrese tres valores enteros: " << endl;
	cin >> a ; cin >> b ; cin >> c;

	suma=a+b+c;
	cout << "la suma es: "<< suma <<endl;
	promedio = (a+b+c)/3;
	cout << "el promedio es: " << promedio << endl;
	producto = a*b*c;
	cout << "el producto es: " << producto << endl;
	if(a>b & a>c)
	{
		cout << "el numero mayor es: " << a << endl;
	}
	if(b>a & b>c)
	{
		cout << "el numero mayor es: " << b << endl;
	}
	if(c>a & c>b)
	{
		cout << "el numero mayo es: " << c << endl;
	}
	if(a<b & a<c)
        {
                cout << "el numero menor es: " << a << endl;
        }
        if(b<a & b<c)
        {
                cout << "el numero menor es: " << b << endl;
        }
        if(c<a & c<b)
        {
                cout << "el numero menor es: " << c << endl;
        }

	return 0;
}
