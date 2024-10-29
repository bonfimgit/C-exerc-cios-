#include <iostream>
using namespace std;
struct TEstudante
{
	string nome, matricula;
	int idade;
	string curso, email;
};
int main()
{
	TEstudante estudante[4];
	cout<< "Cadastro de estudante \n";
	for (int i=0; i<4; i+1)
	{
		cout<<"Nome: ";
		getline(cin, estudante[i].nome);
		cout<<"Matricula: "; cin>> estudante[i].matricula;
		cout<<"Idade: "; cin>> estudante[i].idade;
		cout<<"Curso: "; cin>> estudante[i].curso;
		cin.ignore();
		getline(cin, estudante[i].curso);
		cout<<"E-mail: ";cin>>estudante[i].email;
		cin.ignore();
	}	
	cout<<endl;
	cout<<"Consulta de Estudante\n";
	string mat;
	cout <<"Informe a matricula para consulta: ";cin>>mat;
	for(int i=0; i<4; i++)
	{
		if(estudante[i].matricula==mat)
		{
			   cout<<"Nome: "<< estudante[i].nome;	
			   cout<<"Idade: "<< estudante[i].idade;
			   cout<<"Curso: "<< estudante[i].curso;
			   cout<<"E-mail: "<< estudante[i].email;
		}
	}
	return 0;
}