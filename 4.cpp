#include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2, cod;
	float media, resto;
	cout << "Calculadora de Operações" << endl;
	cout << " " << endl;
	cout << "Escreva o primeiro número: ";
	cin >> num1;
	cout << "Escreva o segundo número: ";
	cin >> num2;
	cout << " " << endl;
	cout << "Escolha o código para a operação desejada:" << endl;
	cout << "1 - Média entre os números digitados" << endl;
	cout << "2 - Diferença do maior para o menor" << endl;
	cout << "3 - Produto entre os números digitados" << endl;
	cout << "4 - Divisão do primeiro pelo segundo" << endl;
	cout << " " << endl;
	cout << "Digite o código: ";
	cin >> cod;
	if(cod == 1)
	{
		media = (num1 + num2);
		media = (media/2);
		cout << " " << endl;
		cout << "A média dos números é: " << media << endl;
		cout << " " << endl;
	}
	if (cod == 2)
	{
		if (num1 > num2)
		{
			resto = (num1 - num2);
			cout << " " << endl;
			cout << "A diferença é: " << resto << endl;
		}
		else
		{
			resto = (num2 - num1);
			cout << " " << endl;
			cout << "A diferença é: " << resto << endl;
		}
	}
	if(cod == 3)
	{
		cout << " " << endl;
		cout << "O produto dos dois números é: " << (num1 * num2) << endl;
	}
	if(cod == 4)
	{
		if (num2 != 0)
		{
		cout << " " << endl;
		cout << "A divisão dos dois números é: " << (num1 / num2) << endl;	
		}
		else
		{
		cout << " " << endl;
		cout << "Não é possível fazer a divisão por 0." << endl;	
		}		
	}
	else
	{
		cout << " " << endl;
		cout << "Código Inválido" << endl;
	}
	return 0;
}