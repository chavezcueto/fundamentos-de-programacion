/*programa suma de dos variables
 * alumno:Jaretzy Yajahira Chavez Cueto*/

#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,suma=0;
	cout << "ingresa el valor de a: ";
	cin >> a;
	cout << "ingresa el valor de b: " ;
	cin >> b;

	if(a==b)
	{
		cout << a << "=" << b << endl;
	}	
	if(a<b)
	{
		cout << b <<" es mayor que " << a << endl;
	}
	if (a>b)
	{
		cout << a <<" es mayor que " << b << endl;
	}
	suma = a+b;
	cout << "la suma de " << a << "+" << b << " es: " << suma << endl;

	return 0;
 }
