#include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int num, i, div=0;
	cout << "Verificador de N�meros Primos" << endl;
	cout << "Digite um n�mero: ";
	cin >> num;
	for(i=2; i<=num/2; i++ )
	{
		if (num % i == 0)
			div++;
	}
	if (div==0)
	cout << num << " � um n�mero primo." << endl;
	else
	cout << num << " n�o � um n�mero primo." << endl;	
	return 0; 
	// Bom dia, tarde ou noite pra quem ta lendo o c�digo
}