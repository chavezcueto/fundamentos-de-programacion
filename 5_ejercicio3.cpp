/*escriba u nprograma que les de el radio de un circulo como un entero e imprima el diametro del circulo, perimetro de la circunferencia, y el area
 * alumno: Jaretzy Yajahira Chavez Cueto*/
#include <iostream>
using namespace std;
int main()
{
	int radio=0, diametro=0;
	float pi=3.14159, perimetro=0, area=0;

	cout << "escriba un entero numero que sera el radio: " ;
	cin >> radio;

	diametro= 2* radio;
	cout << "el diametro es: " << diametro << endl;

	perimetro=2*pi*radio;
	cout << "el perimetro es: " << perimetro << endl;

	area= pi*(radio*radio);
	cout << "el area es: " << area << endl;
	return 0;
}


