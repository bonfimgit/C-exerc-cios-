#include <iostream>
using namespace std;
int main()
{
	int num, soma=0;
	float pacote;
	cout <<"Quantos usuarios serao?";
	cin >> num;
	int  idade[num];
	cout<<"Qual valor do pacote: ";
	cin >> pacote;
	for (int i=1; i <=num; i++)
	{
		cout <<"idade do usuario" << i <<" : ";
		cin >> idade [i-1];
		soma += idade[i-1];
	}
	float val= pacote/soma;
	for (int i=1; i <=num; i++)
			cout <<"usuario"<< i <<" : "<< val*idade[i-1]<<endl;
	return 0;
}

//VETOR É REPRESENTADO POR ESSE SIMBOLO [] E SEMPRE COMEÇA DO ZERO

//Crie um programa que leia o numero de usuaios de um determinado pacote no
//spotify, leia a idade de casa usuario e divida o valor do pacote considerando
//uma proporção da idade:
//exemplo:
//3 usuarios, sendo um com 18 anos, outro com 17 e outro com 12; o valor do pacote
//49,90/(18+17+12)
//usuario1 = val*18
//usuario2 = val*17
//usuario 3 = val*12
