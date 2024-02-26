/*Escriba un programa que lea un enter, determine e imprima si es par o impar
 * alumno:jaretzy yajahira chavez cueto*/

#include<iostream>
using namespace std;
int main()
{
	int a=0;

	cout << "ingrese un valor entero: ";
	cin >> a;

	if(a%2==0)
	{
		cout << a << " es un numero par" << endl;
	}
	else
	{
		cout << a << " es un numero impar" << endl;
	}

	return 0;
}
