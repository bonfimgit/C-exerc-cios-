#include <iostream>
using namespace std;

int main()
{
	int soma, sub, mult, op, n1, n2;
	float div;
	setlocale(LC_ALL,"portuguese");
	cout << "PRIMEIRO VALOR: "<< endl;
	cin >> n1;
	cout <<"SEGUNDO VALOR: "<< endl;
	cin >> n2;
	cout <<"SELECIONE A OPERA��O"<< endl;
	cout <<"1- SOMA" << endl;
	cout <<"2- SUBTRA��O"<< endl;
	cout <<"3- MULTIPLICA��O"<< endl;
	cout <<"4- DIVIS�O"<< endl;
	cout <<"5- PORCENTAGEM"<<endl;
	cin >> op;
	switch(op)
	{
	case 1: op = (n1 + n2); 
		break;
	case 2: op = (n1 - n2) ;
		break;
	case 3: op = (n1*n2);
		break;
	case 4: op = (n1/n2);
		break;
	default:	
		cout <<"Opera��o inexistente";
			   break;	
	
	}
		
	
	
	
	
	return 0;
}