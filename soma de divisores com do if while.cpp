#include <iostream>
#include<locale>
using namespace std;
int main()
{
	int num;
	cout <<"informe um valor inteiro: ";
	cin>>num;
	int contador=1, soma=0;
	do{
		if(num % contador ==0)
		{
			soma+= contador;
			cout<<contador<<" ";
		}
		contador++;
	}
	while (contador < num);
	cout<<endl;
	cout<<"soma dos divisores = "<< soma;
	return 0;
}