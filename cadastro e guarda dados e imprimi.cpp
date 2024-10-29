#include <iostream>
using namespace std;
struct TProduto{
	string nome;
	float preco;
	float quantidade;
	
};
	
int main()
{
	   TProduto prodl;
	   cout <<"Nome do produto: "; cin>>prodl.nome;
	   cout <<"Preco: ";cin>>prodl.preco;
	   cout <<"Quantidade: ";cin>>prodl.quantidade;
	   cout<<endl;
	   cout<<"DADOS CADASTRADOS \n";
	   cout<<"Nome do produto: "<<prodl.nome<<endl;
	   cout<<"Preço: "<< prodl.quantidade<<endl;
	   
	   TProduto prods [5];
	   for (int x=0; x<5; x++)// ++ tambem poder ser lido como x+1
	   {
	   	cout <<"Nome do produto: ";cin>>prods[x].nome;
	   	cout<<"Preço: ";cin>>prods[x].preco;
	   	cout<<"Quantidade: ";cin>>prods[x].quantidade;
	   }
	   cout<<"Quantidade de dados cadastrados: \n";
	   for(int i=0; i<5; i+1)
	   {
	   	cout <<"Nome do produto: ";cin>>prods[i].nome;
	   	cout<<"Preço: ";cin>>prods[i].preco;
	   	cout<<"Quantidade: ";cin>>prods[i].quantidade;
	   }	   	
	return 0;
}


