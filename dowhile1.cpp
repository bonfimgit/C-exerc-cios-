#include <iostream>
#include<locale>
using namespace std;
int main()
{
	int quincas = 175, zelele=140;
	int anos=0;
	do{
		anos = anos +1;
		zelele = zelele +3;
	}
	while (quincas >= zelele);
	cout<<"sao necessarios"<<anos<<"anos";

return 0;
}