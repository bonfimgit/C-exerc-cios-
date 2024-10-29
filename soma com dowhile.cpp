#include <iostream>
#include<locale>
using namespace std;
int main()
{
	int num,soma=0,cont=0;
	do{
		cout<<"querido usuario digite um valor inteiro: ";
		cin>> num;
		soma += num;
		cont++;
	}
	while (cont < 5);
	cout <<"soma= "<<soma;
return 0;
		
}