#include <iostream>
using namespace std;

int main()
{
	float peso,excesso, multa;
	cout <<"Peso dos peixes: ";
	cin >> peso;
	excesso = peso -50;
	multa = excesso * 12;
	if (excesso>0)
	{
		cout<< "Excesso de peso= "<< excesso<<endl;
		cout<< "Multa = R$"<< multa;	
	}
	else
	{
		cout<< "Não houve excesso\n";
		cout<< "Sem multa";
	}
	return 0;
}