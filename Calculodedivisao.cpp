#include <iostream>
#include<locale>
using namespace std;
int main()
{
float n1,n2
	cout<<"Informe o primeiro numero: ";
	cin >> n1;
	cout << "Informe o segundo numero: ";
	cin >> n2;
	
	if (n2==0)
		cout<<"Divisor incorreto";
	else
	{
		
		cout<< "Resultado: "<<(n1/n2);
		
	}
			
	return 0;
}