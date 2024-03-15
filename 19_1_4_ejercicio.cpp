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
	private:
		int num;
	public:
		int Num()
		{
			 return num;
		}

		void setNum(int nuevonum)
		{
			num = nuevoNum;
		}
};
int main()
{

	return 0;
}
