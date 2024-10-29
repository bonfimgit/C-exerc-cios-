#include <iostream>
using namespace std;

int main()
{
	float area, volume, raio, altura;
	float pi = 3.14;
	int opc;
	cout << "Escolha a figura:\n1-Cone\n2-Cilindo\n3-Esfera\n";
	cout<<"Qual figura desejada? "; cin>> opc;
	cout << "Informe a medida do raio: "; cin>> raio;
	cout<< "Informe medida da altura/geratriz: "; cin >> altura;
	if(opc ==1){
		volume =(pi*raio*raio*altura)/3;
		area = pi*raio*(raio+altura);
	}else
	{
		if(opc==2)
		{
			volume =(pi* raio*raio*altura);
			area = 2*pi*raio*altura + 2*pi*raio*raio;
		}else
		{
			volume =(pi*raio*raio*raio)*4/3;
			area = 4*pi*raio*raio;	
		}
	}
	cout <<"Volume = "<<volume<<endl;
	cout << "Área = "<<area;
	return 0;
}