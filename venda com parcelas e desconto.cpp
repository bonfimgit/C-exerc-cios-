#include <iostream>
#include<locale>
using namespace std;
int main()
{
	float compra,revenda,taxadelucro;
	cout<< "VALOR DO PRODUTO: " <<endl;
	cin >> compra;	
	cout<< "TAXA DE LUCRO: " <<endl;
	cin >> taxadelucro;
	revenda = compra+compra *taxadelucro/100;
	cout<< "REVENDA: " <<revenda<< endl;
	int opc;
	cout << "QUAL A FORMA DE PAGAMENTO"<<endl;
	cout <<"1 PARA PAGT AVISTA E 2 PARA PAGTO PARCELADO : ";
	cin >> opc
	if (opc==1)
		cout <<"Valor final R$: " <<(revenda*0.95);
	else
	{
		int parcelas;
		cout<<"Quantas parcelas? : ";
		cin >> parcelas;
		cout << "Valor das parcelas R$: "<<revenda/parcelas;
	}
 		
 			
			 
		
	

	return 0;
}