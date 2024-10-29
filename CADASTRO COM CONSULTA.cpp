#include <iostream>
using namespace std;
int main()

{
	   string nome[20],tel[20],email[20];
	   string busca;
	   bool achei=false;
	   
	   int opc, indice=0,posicao=0;
	   do{
		   	   cout<<"agenda telefonica\n ";
		   	   cout<<"1-cadastro\n2-consulta\n3-sair\n";
		   	   cout<<"qual sua opcao? ";cin>> opc;
		   	   switch(opc)
		   	   {
				  	case 1://cadastro
					 if(indice <=19)
					 {
					 	cout<<"informe o nome: ";
					 	cin >> nome [indice];
					 	cout<<"informe o telefone: ";
					 	cin >> tel[indice];
					 	cout<<"informe o email: ";
						cin >> email[indice];
						indice = indice +1;
						cout<<"cadastro efetuado com sucesso!\n";  
					 }//if	
					 else
					 {
						 cout<<"memoria cheia!\n";
					 }	
					 break;
				 case 2://consulta
				 	cout <<"informe o nome para a consulta: ";
				 	cin.ignore();
				 	getline(cin,busca);
				 	while(posicao < indice)
					 {
					 { if(nome[posicao] == busca)
					 	  cout<<"Email: "<<email[posicao]<<endl;
					 	  cout<<"Telefone: "<<tel[posicao]<<endl;
					 	  achei= true;
					 	  	  break;
					 	
					 }	
					 	 posicao++;
					 }
					 if(!achei)cout<<"nome nao cadastrado!\n";
					 posicao=0;
				     achei= false;
				     break;
				 case 3:
				 	cout<<"FIM";
				 	 break;
				  
				  default:
				  	cout<<"opcao invalida\n";
				  	break;
		  }
		  cout<<endl;
	   }while(opc !=3);
 return 0;	   	   
}