#include <iostream>
using namespace std;
int main() 
//verificar se numeros sao multiplos EX
{
 	  setlocale(LC_ALL,"portuguese")
	  int a, b;
	  cout<<"Informe um valor inteiro: ";
	  cin>> a;
	  cout<<"Informe um seundo valor inteiro: ";
	  cin>> b;
	  if((a%b==0) || (b%a==0))
	  	cout << "S�o muitiplos";
	  else
	  {
		  cout << "N�o s�o m�ltiplos";
	  }	
	  											// && = AND (e)
	  											// || = or (ou)
	   	
						  	            	// numerico = int,float,double
						   	   	   	   	   	// literal = char,string  
						   	   	   	   	   		// logico = bool(precisa da biblioteca; stdbool.h)
											   	// tipo_variavel nome_variavel;
											 	// Char usa uma letra String usa textos				 	   	   	   	   	   	   	   	
												 	// endl ou \n para quebrar linhas
	
return 0;		
}