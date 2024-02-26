/*escriba un programa que lea dos enteros, determine e imprima si el numero es multiplo del segundo
 * alumno: jaretzy yajahira chavez cueto*/

#include <iostream>
using namespace std;
int main()
{
	int a=0, b=0;

	cout << "ingrese dos numero enteros: ";
	cin >> a; cin >> b;

	if(a%b==0)
	{
		cout << a << " es multiplo de " << b << endl;
	}
	else
	{
		cout << a << " no es multiplo de " << b << endl;
	}
	return 0;
}
