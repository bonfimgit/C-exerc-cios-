-#include <iostream>
#include<locale>
using namespace std;
int main ()
{
	int opcao, qtde;
	float gasto;
	
	
	cout<<"CARDAPIO LANCHONETE"<<endl;
	cout<<"ESPECIFICACAO     PRECO UNITARIO"<<endl;
	cout<<"100 CACHORRO QUENTE  10,50 "<<endl;
	cout<<"101 BAURU SIMPLES    10,00 "<<endl;
	cout<<"102 BAURU C/OVO      12,50 "<<endl;
	cout<<"103 HAMBURGER        13,00 "<<endl;
	cout<<"104 CHEESEBURGUER    15,50 "<<endl;
	cout<<"105 REFRIGERANTE     5,00  "<<endl;
	cout <<"Informe o codigo do produto: ";cin>>opcao;
	cout<<"Quantas unidades do produto? ";cin>> qtde;
	switch (opcao)
	{
		
		  case 100:
		  	gasto = qtde * 10.50;
			  break;
		  case 101:
		  	gasto = qtde * 10.00;
			  break;
		   	case 102:
		  	gasto = qtde * 12.50;
			  break;
		  case 103:
		  	gasto = qtde * 13.00;
			  break;
		  case 104:
		  	gasto = qtde * 15.50;
			  break;
		  case 105:
		  	gasto = qtde * 5;
			  break;						  
	}	
	
	cout<<"Valor gasto R$: "<< gasto;
	
	
	
	
	return 0;
}