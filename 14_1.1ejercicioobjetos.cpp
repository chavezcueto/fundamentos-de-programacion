/*elabore diferentes versiones de un mismo programa siguiendo las siguientes indicaciones:
 * un programa sin utilizar el concepto de clase
 * un programa con una clase con un metodo que no recibe parametros
 * un programa con una clase con un metodo que recibe un parametro
 * encapsular a una varible, mediante los metodos set/get
 *
 * para los sig escenarios
 * un programa que recibe un entero (int num) y entrega el cuadrado de ese numero
 * un programa que recibe un punto ed R² y devuelve su imagen reflejada sobre el eje y
 * un programa propio con el escenario que usted elija*/
#include<iostream>
using namespace std;
int main()
{
	int num=0, resu=0;

	cout << "ingresa un numero entero: " ;
	cin >> num;

	resu = num * num;
	cout << "el cuadrado de ese numero es: " << resu << endl;
       
	return 0;	
}

