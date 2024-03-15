/*elabore diferentes versiones de un mismo programa siguiendo las siguientes indicaciones
 * un programa sin utilizar el concepto clase
 * un programa con una clase con un metodo que no reciba parametros
 * un programa con una clase con un metodo que reciba un parametro
 * encapsulamiento de una variable mediantes los metodos set/get 
 *para los siguientes escenarios
 un programa que reciba un entero (int num) y entrega el cuadrado de ese nymero
 un programa que recibe un punto de R² y devuelve su imagen reflejada sobre el eje  y
 un programa propio con escenario que usted elija*/

#include<iostream>
using namespace std;

class Cuadrado
{
	public:
		void calcular(int num=0)
		{
			int cuadrado=num*num;
			cout << "el cuadrado de ese numero es: " << cuadrado << endl;
		}
};
int main()
{
	int num=0, cuadrado=0;
	cout << "ingresa un numero entero: " ;
	cin >> num;
	Cuadrado miCuadrado;
	miCuadrado.calcular( num);

	return 0;
}
