/*programa que calcula el IMC
 * alumno: jaretzy yajahira chavez cueto*/
#include<iostream>
using namespace std;
int main ()
{
	float alt=0, peso=0, IMC=0, aux=0;

	cout <<"ingresa tu altura en cm: ";
	cin >> alt;
	cout <<"ingresa tu peso en kg: ";
	cin >> peso;
	aux = alt/100;

	IMC = peso/(aux*aux);
	cout <<"tu IMC es: " << IMC << endl;

	if(IMC<18.5)
	{
	cout << "conforme a su IMC usted esta bajo de peso" << endl;
	}
	if(IMC>18.5 & IMC<24.999999999)
        {
        cout << "conforme a su IMC usted esta en su peso saludable" << endl;
        }
	if(IMC>25 & IMC<29.99999999)
        {
        cout << "conforme a su IMC usted tiene sobrepeso" << endl;
        }
	if(IMC>30 & IMC<34.999999)
        {
        cout << "conforme a su IMC usted tiene obesidad tipo I" << endl;
        }
	if(IMC>35 & IMC<39.9999999)
        {
        cout << "conforme a su IMC usted tiene obesidad tipo II" << endl;
        }
	if(IMC>=40)
        {
        cout << "conforme a su IMC usted tiene obesidad tipo III" << endl;
        }



	return 0;
}
