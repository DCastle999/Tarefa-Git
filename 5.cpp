#include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int num, i, div=0;
	cout << "Verificador de Números Primos" << endl;
	cout << "Digite um número: ";
	cin >> num;
	for(i=2; i<=num/2; i++ )
	{
		if (num % i == 0)
			div++;
	}
	if (div==0)
	cout << num << " é um número primo." << endl;
	else
	cout << num << " não é um número primo." << endl;	
	return 0; 
	// Bom dia, tarde ou noite pra quem ta lendo o código
}