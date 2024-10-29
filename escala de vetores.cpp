#include <iostream>
#include <locale>
using namespace std;
int main()
{
	const int tam =10;
	float vetor1[tam],vetor2[tam],vetor3[20];
	for(int i=0; i<tam;i++)
	{
		cout<<"digite o valor para vetor1: ";
		cin>>vetor1[i];
		vetor3[i] = vetor1[i];	
	}
	cout<<endl;
	for(int i=0; i<tam; i++)
	{
		cout<<"digite o valor para vetor2: ";
		cin>>vetor2[i];
		vetor3[i+10] = vetor2[i];
	}
	for(int i=0; i<2*tam; i++)
		cout<< vetor3[i]<< " ";
	
	return 0;
}
