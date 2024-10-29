#include <iostream>
#include<locale>
#include<stdlib.h>
using namespace std;
int main()
{
	float n1,n2;
	char op;
	int menu=1;
	setlocale(LC_ALL,"portuguese");
	do{
		cout << "valor1: "; 
		cin >> n1;
		cout <<"operação (+ - * % C )"; cin >> op;
		cout << "valor2: ";
		cin >> n2;
		//cin >> n1 >> op >> n2;
		switch(op){
			case '+':
				cout <<" = " << (n1 + n2) <<endl;
				break;
			case '-':
				cout <<" = " << (n1 - n2) <<endl;
				break;
			case '*':
				cout <<" = " << (n1 * n2) <<endl;
				break;
			case '/':
				cout <<" = " << (n1 / n2) <<endl;
				if(n2==0)
					cout<<"erro de divisao por 0\n";
				break;
			case '%':
				cout <<" = " << (n1 * n2/100) <<endl;
				break;
		}
		cout<<"opção\n 1-nova Operação\n 2-Limpar\n 0 Sair\n";
		cin>>menu;
		cout<<endl;
		if(menu== 2)
			system("cls");
	}while(menu!=0);
	
	
	
	
	
	return 0;
}


	   	