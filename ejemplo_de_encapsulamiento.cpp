#include<iostream>
using namespace std;
class Persona
{
	private:
		string nombre; //variable encapsulada

	public:
		//metodo para obtener el nombre
		string getNombre()
		{
			return nombre;
		}

		//metodo para establecer el nombre
		void setNombre(string nuevoNombre)
		{
			nombre = nuevoNombre;
		}
};

int main()
{
	Persona persona1;
	
	//establecer el nombre utilizando el metodo set
	persona1.setNombre("Dylan");

	//obtener el nombre utilizando el metodo get
	cout << "el nombre de la persona es: " << persona1.getNombre() <<endl;

	return 0;
}
