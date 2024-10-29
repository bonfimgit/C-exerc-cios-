#include <iostream>
#include<locale>
using namespace std;
int main()
{

	int tipo, compra,p;
	
	setlocale(LC_ALL,"portuguese");
	cout << "VALOR TOTAL DA COMPRA: ";
	cin >> compra;
	cout <<"Escolha a forma de pagamento: " << endl;
	cout << "1- DINHEIRO "<< endl;
	cout<< "2- CARTAO A VISTA "<<endl;
	cout<< "3- CARTAO PARCELADO"<<endl;
	cin >> p;
	switch(compra)
	{
	case 1: compra = (compra *0.9);
		break;
	case 2: compra = (compra *0.95);
		break;

		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}