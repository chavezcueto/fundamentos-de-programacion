/*escriba un programa que reciba como entrada un entero de cinco digitos, que separe ese numero numero en sus digitos individuales y los imprima, cada uno separado por una tabulacion 
 * alumno: jaretzy yajahira chavez cueto*/

#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0,aux1=0,aux2=0,aux3=0,aux4=0;
	cout << "ingrese un numero de 5 digitos: ";
	cin >> a;

	if(a<100000&a>9999)
	{
		b = (a-(a%10000))/10000;
		aux1 = a%10000;
	        c = (aux1-(aux1%1000))/1000;
		aux2 = aux1%1000;
		d = (aux2-(aux2%100))/100;
		aux3 = aux2%100;
		e = (aux3-(aux3%10))/10;
		aux4 = aux3%10;
		f = aux4/1;
		cout << b << "\t" << c << "\t" << d << "\t" << e << "\t" << f << endl;
	}
	else
	{
		cout << "su numero no es de 5 digitos" << endl;
	}
	return 0;
}
