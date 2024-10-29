#include <iostream>
using namespace std;
int main()
{
	int n;
	float nota, soma=0;
	cout <<"Qual o numero de alunos? ";
	cin >> n;
	for(int i=1 ; i <=n; i++)
	{
		cout <<"informe a nota: "<< i <<": ";
		cin >> nota;
		soma += nota; // simbolo  += tem a mesma equivalencia DE soma= soma+nota
	}
	cout <<"Media= "<< soma/n;
	return 0;
}



// comando FOR (contador;condição;step)
//ex for(contador=1;contador<=5;1++) dentro das chaves {} vem os comendos
