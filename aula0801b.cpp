/*
2- Crie um aplicativo que leia os valores de dois vetor inteiros, some e 
insira seus valores num outro vetor.
*/
#include <iostream>
using namespace std;
int main()
{
	const int tam =10;
	float vet1[tam], vet2[tam], vet3[tam];
	for(int i=0; i< tam; i++)//leitura do primeiro vetor
	{
		cout<<"Digite o valor para vetor1: "; 
		cin>>vet1[i];
		
	}
	for(int i=0; i< tam; i++)//leitura do segundo vetor
	{
		cout<<"Digite o valor para vetor2: "; 
		cin>>vet2[i];
		
	}
	for(int i=0; i< tam; i++)//imprime o vetor3
	{
		vet3[i]= vet1[i]+vet2[i];
		cout<< vet3[i] << " ";
	}
		
	return 0;
}