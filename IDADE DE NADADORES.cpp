#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"portuguese");
	int i;
	cout << "Informe a idade: ";
	cin >> i;
	if (i >=5 && i <=7)
		cout << "Infantil A";
	else
		if (i >=8 && i <10)
			cout << "Infantil B";
		else
			if (i >= 11 && i <13)
				cout << "Juvenil A";
			else
				if (i >= 14 && i <17)
					cout << "Juvenil B";
				else
					if (i > 18)
						cout << "Adulto";
				
				
			
			
		
return 0;
}
