/*programa que define la clase librocalificaciones con una funcion miembro llamada mostrarmensaje se aca tambien un objeto librocalificaiones y llama a su funcion mostrarmensaje
 * alumno: jaretzy yajaira chavez cueto*/

#include<iostream>
using namespace std;

class LibroCalificaciones
{
	public: // especificador de acceso
		void mostrarMensaje() const //encabezado de funcion
		{
			cout << "Bienvenido al libro de Calificaciones" << endl;
		}
}; //fin de la clase
int main()
{
	LibroCalificaciones miLibroCalificaciones; //se crea el objeto
	miLibroCalificaciones.mostrarMensaje(); // se llama a la fon del objeto

} // fin de main
