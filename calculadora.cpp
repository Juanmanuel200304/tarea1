//Programa que presenta las operaciones básicas
//Creado por Stalin Francis
//Luje Murillo
//Fecha: 14-09-2022

#include<iostream>
using namespace std;

int main()
{
	float JMx,JMy,JMs,JMm,JMd,JMr;
	//Ingreso de datos
	cout<<"Ingrese en valor de x=:";
	cin>>JMx;
	cout<<"Ingrese en valor de y=:";
	//Operaciones 
	cin>>JMy;
	JMs=JMx+JMy;
	JMm=JMx*JMy;
	JMd=JMx/JMy;
	JMr=JMx-JMy;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<JMx<<" + "<<JMy<<" = "<<JMs<<endl;
	cout<<"Las multiplicacion de "<<JMx<<" * "<<JMy<<" = "<<JMm<<endl;
	cout<<"Las division de "<<JMx<<" / "<<JMy<<" = "<<JMd<<endl;
	cout<<"Las resta de "<<JMx<<" - "<<JMy<<" = "<<JMr<<endl;
	return 0 ;

}

