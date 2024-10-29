#include <iostream>
using namespace std;
int main()
//ler numero e perguntar se é par ou impar, positivo ou negativo
{	
	setlocale(LC_ALL,"portuguese");
	int n1;
	cout << "Informe n1: ";
	cin >> n1;

	if(n1%2==0)
	{
		if(n1<0)
			cout << n1 << " É par negativo";
		else 
			if(n1>0)
			cout << n1 << " É par positivo";
			else
				cout << "N1 é par neutro";
				
			
	}
	else
	{
	if(n1<0)
			cout << n1 << "é impar negativo";
		else 
			cout << n1 <<" é impar positivo";	   	   	
	}
	

	return 0;
}