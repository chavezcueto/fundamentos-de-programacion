/*programa donde se dan el producto de tres numeros*/
#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,mul=0;

	cout << "ingresa tres valores: ";
	cin >> a >> b >> c;
	mul= a*b*c;
	cout << "el producto de " << a << "," << b << " y " << c << " es: " << mul << endl;
	return 0;
}
