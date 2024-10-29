#include <iostream>
using namespace std;
int main()
{
	int voto, fulano, beltrano,ciclano,branco;
	char op='5';
	while (op=='5')
	{
		cout <<"ENQUETE TECTECH\n";
		cout <<"1- fulano\n";
		cout <<"2- ciclano\n";
		cout <<"3- beltrano\n";
		cout <<"4- nulo\n";
		cout <<"5- branco\n";
		cout <<" informe sua opcao: "; cin>> voto;
		//qualifica o voto
		 cout <<"DESEJA LER NOVO (S/N): ";cin>>op;
	}	
	return 0;
}