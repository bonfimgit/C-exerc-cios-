#include <iostream>
using namespace std;

int main()
{
	float valorfinal, litros;
	char tipo;
	cout <<"Informe o tipo de combustivel(A-alcool, G-gasolina):";
	cin >> tipo;
	cout<<"Qtde de combustivel em litros: ";
	cin >> litros;
	if(tipo=='A' || tipo=='a')
	{
		if(litros <=20)
			valorfinal = 4.9 *litros*0.97;
		else
		{
			valorfinal = 4.9 *litros*0.95;
		}
	}else//gasolina
	{
		if(litros <=20)
			valorfinal = 6.1 *litros*0.96;
		else
		{
			valorfinal = 6.1 *litros*0.94;
		}
	}
	cout<<"Valor a ser pago = R$"<<valorfinal;
	return 0;
}