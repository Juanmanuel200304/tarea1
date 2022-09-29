// stalin franci 
// Luje Murillo
#include<iostream>
using namespace std;

int main()
{
	int LMi=0,LMl;
	float LMx,LMs=0;
	cout<<"ingrese el limite l="; cin>>LMl;
	do{
		
	cout<<"ingrese el numero x="; cin>>LMx;
	LMi=LMi+1;
	LMs=LMs+LMx;



	}while(LMi<LMl);
	cout<<"Se ingresaron "<<LMl<<" numeros "<< "que sumaron "<<LMs<<endl;
	return 0;



}
