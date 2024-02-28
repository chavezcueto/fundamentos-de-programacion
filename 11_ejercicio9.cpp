/*escriba un programa que calcule los cuadrados y cubos del 0 al 10 utilice tabulaciones para imprimir la tabla ordenada por valores
 * alumno:jaretzy yajahira chavez cueto*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a=1, b=2, c=3, d=4, e=5, f=6, g=7, h=8, i=9, j=10;
	float cua1=0, cub1=0, cua2=0, cub2=0, cua3=0, cub3=0, cua4=0, cub4=0, cua5=0, cub5=0, cua6=0, cub6=0, cua7=0, cub7=0, cua8=0, cub8=0, cua9=0, cub9=0, cua10=0, cub10=0;

	cua1 = pow(a,2);
	cua2 = pow(b,2);
	cua3 = pow(c,2);
        cua4 = pow(d,2);
	cua5 = pow(e,2);
        cua6 = pow(f,2);
	cua7 = pow(g,2);
        cua8 = pow(h,2);
	cua9 = pow(i,2);
        cua10 = pow(j,2);

	cub1 = pow(a,3);
	cub2 = pow(b,3);
        cub3 = pow(c,3);
        cub4 = pow(d,3);
        cub5 = pow(e,3);
        cub6 = pow(f,3);
        cub7 = pow(g,3);
        cub8 = pow(h,3);
        cub9 = pow(i,3);
        cub10 = pow(j,3);

	cout << "los cuadrado de 1 al 10 sucesivamente son: " <<cua1<<"\t"<<cua2<<"\t"<<cua3<<"\t"<<cua4<<"\t"<<cua5<<"\t"<<cua6<<"\t"<<cua7<<"\t"<<cua8<<"\t"<<cua9<<"\t"<<cua10<<"\t" << endl;
	
        cout << "los cubos de 1 al 10 sucesivamente son: " <<cub1<<"\t"<<cub2<<"\t"<<cub3<<"\t"<<cub4<<"\t"<<cub5<<"\t"<<cub6<<"\t"<<cub7<<"\t"<<cub8<<"\t"<<cub9<<"\t"<<cub10<<"\t" << endl;
	
	return 0;
}
