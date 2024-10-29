#include <iostream>
#include <locale>
using namespace std;
int main ()
{
	//Peso ideal
	setlocale(LC_ALL,"portuguese");
	float altura;
	char sexo;
	cout << "INFORME SUA ALTURA: "; cin >> altura;
	cout << "INFORME SUA SEXO (F/M): "; cin >> sexo;
	if(sexo == 'F' || sexo== 'f') 
		cout << "Peso ideal= " << (62.1*altura - 44+7);
	else
	
		if(sexo == 'M' || sexo== 'm') 
		cout << "Peso ideal= " << (72.1*altura - 58 );
		   
		   else 
		   		 cout <<"REINICIE A APLICAÇÃO E TENTE NOVAMENTE";	
		
				
	return 0;
}