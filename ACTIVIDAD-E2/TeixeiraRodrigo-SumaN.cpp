//================================================

//==> Nombre del programa: Suma de numeros

//==> Archivo : TeixeiraRodrigo-SumaN.cpp
//==>Autor: Teixeira Rodrigo
//==>Fecha de elaboraci�n: 2022-05-02
//==>Fecha ultima actualizaci�n: 2022-05-13
//=================================================
#include<iostream>
using namespace std;
int main()
{
	int TRc=0,TRcn;
	float TRvn,TRa=0;
	cout<<"Ingrese la cantidad de numeros que va a sumar: ";
	cin>>TRcn;
	do{

	cout<<"Ingrese los n�meros ";
	cin>>TRvn;
	TRc=TRc+1;
	TRa=TRa+TRvn;
	}while(TRc<TRcn);
	cout<< "El resultado de la suma total es : "<<TRa<<endl;
	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de n�mero"<<endl;
cout<<"//==> Archivo : TeixeiraRodrigo-SumaN.cpp"<<endl;
cout<<"//==>Autor: Teixeira Rodrigo"<<endl;
cout<<"//==>Fecha de elaboraci�n: 2022-05-02"<<endl;              
cout<<"//==>Fecha ultima actualizaci�n: 2022-05-13"<<endl;        
cout<<"//================================================="<<endl;
	return 0;
}
