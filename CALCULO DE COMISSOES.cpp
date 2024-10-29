#include <iostream>
#include<locale>
using namespace std;
int main ()
{
	float venda1, venda2,venda3, totalvendas;
   	string nome1, nome2, nome3;
   	float comis1, comis2,comis3;
	cout << "NOME DO CORRETOR : " <<endl;
	cin >> nome1;
	cout << "QUAL O VALOR DA VENDA? : "<<endl;
	cin >> venda1;
	cout << "NOME DO CORRETOR 2 : "<<endl;
	cin >> nome2;
	cout << "QUAL O VALOR DA VENDA? : "<<endl;
	cin >> venda2;
	cout << "NOME DO CORRETOR 3 : "<<endl;
	cin >> nome3;
	cout << "QUAL O VALOR DA VENDA : "<<endl;
	cin >> venda3;
	totalvendas = venda1 + venda2 + venda3;
		//calculo de comissoes
		if (venda1>50000)
			comis1 = venda1*0.12;
		else		
			if(venda1 >= 30000) 
				comis1 = venda1 * 0.095;		
			else			
				comis2 = venda2* 0.07;
			if (venda1>50000)
			comis2 = venda2*0.12;
		else		
			if(venda2 >= 30000) 
				comis2 = venda2 * 0.095;		
			else			
				comis2 = venda2 * 0.07;
			if (venda3>50000)
			comis3 = venda3*0.12;
		else		
			if(venda3 >= 30000) 
				comis3 = venda3 * 0.095;		
			else			
				comis3 = venda3 * 0.07;
			
cout <<"RELATORIO"<<endl;
cout <<"Corretor 1: " <<nome1<<endl;
cout<<"VENDA 1: "<<venda1<<endl;
cout<<"COMISSAO: "<<comis1<<endl;
cout <<"Corretor 2: " <<nome2<<endl;
cout<<"VENDA 2: "<<venda2<<endl;
cout<<"COMISSAO: "<<comis2<<endl;
cout <<"Corretor3: " <<nome3<<endl;
cout<<"VENDA 1: "<<venda3<<endl;
cout<<"COMISSAO: "<<comis3<<endl;	
cout <<"TOTAL DE VENDAS: "<<totalvendas;	
			

	return 0;
}