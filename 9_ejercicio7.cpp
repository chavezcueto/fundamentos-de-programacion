/*escriba un programa que imprima el equivalente numerico de un caracter cualquiera escrito en el teclado
 *alumno jaretzy yajahira chavez cueto*/
#include <iostream>
using namespace std;
int main()
{
	char caracter=0;
	cout << "ingrese un caracter: ";
	cin>> caracter;
	cout << caracter << endl;
	cout << static_cast<int>(caracter) << endl;
	return 0;
}
