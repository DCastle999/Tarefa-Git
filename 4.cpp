#include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2, cod;
	float media, resto;
	cout << "Calculadora de Opera��es" << endl;
	cout << " " << endl;
	cout << "Escreva o primeiro n�mero: ";
	cin >> num1;
	cout << "Escreva o segundo n�mero: ";
	cin >> num2;
	cout << " " << endl;
	cout << "Escolha o c�digo para a opera��o desejada:" << endl;
	cout << "1 - M�dia entre os n�meros digitados" << endl;
	cout << "2 - Diferen�a do maior para o menor" << endl;
	cout << "3 - Produto entre os n�meros digitados" << endl;
	cout << "4 - Divis�o do primeiro pelo segundo" << endl;
	cout << " " << endl;
	cout << "Digite o c�digo: ";
	cin >> cod;
	if(cod == 1)
	{
		media = (num1 + num2);
		media = (media/2);
		cout << " " << endl;
		cout << "A m�dia dos n�meros �: " << media << endl;
		cout << " " << endl;
	}
	if (cod == 2)
	{
		if (num1 > num2)
		{
			resto = (num1 - num2);
			cout << " " << endl;
			cout << "A diferen�a �: " << resto << endl;
		}
		else
		{
			resto = (num2 - num1);
			cout << " " << endl;
			cout << "A diferen�a �: " << resto << endl;
		}
	}
	if(cod == 3)
	{
		cout << " " << endl;
		cout << "O produto dos dois n�meros �: " << (num1 * num2) << endl;
	}
	if(cod == 4)
	{
		if (num2 != 0)
		{
		cout << " " << endl;
		cout << "A divis�o dos dois n�meros �: " << (num1 / num2) << endl;	
		}
		else
		{
		cout << " " << endl;
		cout << "N�o � poss�vel fazer a divis�o por 0." << endl;	
		}		
	}
	else
	{
		cout << " " << endl;
		cout << "C�digo Inv�lido" << endl;
	}
	return 0;
}