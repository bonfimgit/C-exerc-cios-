#include <iostream>
using namespace std;
int main()
//ler numero e perguntar se � par ou impar, positivo ou negativo
{	
	setlocale(LC_ALL,"portuguese");
	int n1;
	cout << "Informe n1: ";
	cin >> n1;

	if(n1%2==0)
	{
		if(n1<0)
			cout << n1 << " � par negativo";
		else 
			if(n1>0)
			cout << n1 << " � par positivo";
			else
				cout << "N1 � par neutro";
				
			
	}
	else
	{
	if(n1<0)
			cout << n1 << "� impar negativo";
		else 
			cout << n1 <<" � impar positivo";	   	   	
	}
	

	return 0;
}