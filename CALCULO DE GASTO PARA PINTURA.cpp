#include <iostream>
#include <locale>
using namespace std;
int main ()
{
	float valor_lata = 235, litros, alt, comp, gasto;
	cout << "INFORME A ALTURA DO MURO: ";
	cin >> alt; 
	cout <<"INFORME A COMPRIMENTO: ";
		cin >> comp;
	litros = (alt*comp) / 4; // calcula qtde de litros para pintar o metro
	gasto = litros *(valor_lata/18);
	cout << "SERAO NECESSARIOS " << litros << " QUE SAO R$ "<<
		  gasto; 	
	
	return 0;
}