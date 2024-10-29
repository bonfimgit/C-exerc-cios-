#include <iostream>
using namespace std;
int main()
{
	int op=0, filme1=0, filme2=0, filme3=0,voto=0;
	int mbom=0, bom=0, neutro=0, ruim=0;
	char aux 's', 'n';
	while(op!=5)
	{
		
	}	
	{
		
	cout <<"1- Pesquisa Filme\n";
	cout <<"2- Pesquisa Profissão\n";
	cout <<"3- Pesquisa Feriado\n";
	cout <<"4- Resultados\n";
	cout <<"5- Sair\n";
	cout <<"Informe sua opcao: "; cin>> op;
	switch (op) // do menu principal
	{
				
		case 1:
			cout <<"QUAL FILME É DO SEU INTERESSE ?\n";
			cout <<"1- DIVERTIDAMENTE 2\n";			
			cout <<"2- MEU MALVADO FAVORITO 4\n";
			cout <<"3- DEADPOOL & WOLVERINE\n";
			cout <<"informe sua opcao"; cin >> voto;
			switch(voto) // dos filmes
			{
				case 1: filme1 = filme1 +1; // ou filme1++
					break;
				case 2: filme2 = filme2 +1;
					break;
				case 3: filme3 = filme3 +1;
					break;
				default:
					cout<<"Opcao invalida!!\n";
			}
				
			break;
		
		case 2:
			cout<<"LEVANTAMENTO DE DADOS NA AREA DE TI\n";
			cout<<"1 - MUITO BOM\n";
			cout <<"2 - BOM\n";
			cout <<"3 - NEUTRO\n";
			cout <<"4 - RUIM\n";
			cout<<"informe a opcao\n"; cin>> voto;
			switch(voto) // profissao
			{
				case 1: mbom++;
					break;
				case 2: bom++;
					break;
				case 3: neutro++;
					break;
				case 4: ruim++;
					break;
				default:
					cout<<"Opcao invalida!!\n";
					
			}
			break;
		case 3:
			cout <<"QUAL SEU INTERESSE NO FERIADO DO DIA 06/08\n";
				cout <<"informe a opcao\n"; cin>>voto;
				switch(voto)
				{
				case 1:
					s;
					break;
				case 2:
					n;
					break;
				default:
					cout<<"Opcao invalida!!\n";
					
				}
			
			break;
		case 4:
			cout<<"pesquisa filme\n ";
			cout<<"divertidamente : "<<filme1<<"votos\n";
			cout<<"meu malvado favorito: "<<filme2<< "votos\n";
			cout<<"deadpool & wolverine: "<<filme3<<"votos\n";
			cout<<endl;
			cout<<"Trabalho TI\n";
			cout<<"MUITO BOM: "<<mbom<<"votos\n";
			cout<<"BOM"<<bom<<"votos\n";
			cout<<"NEUTRO"<<neutro<<"votos\n";
			cout<<"RUIM"<<ruim<<"votos\n";
			cout<<endl;
		default:
			break;
			
	}	
			
	}		
			
	
	return 0;
	}
	

