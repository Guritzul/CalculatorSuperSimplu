#include <iostream>

int NushCeEAsta()
{
	int calcul = 10 - 5;
	return calcul;
}

void Adunare(float a , float b)
{
	std::cout << a + b;
}

void Scadere(float a, float b)
{
	std::cout << a - b;
}

void Inmultire(float a, float b)
{
	std::cout << a * b;
}

void Impartire(float a, float b)
{
	std::cout << a / b;
}

int main() 
{
	int n, m;
	std::cout << "Tastati primul numar: "; std::cin >> n;
	std::cout << "Tastati al doilea numar: "; std::cin >> m; std::cout << "\n";

	char c;
	std::cout << "Tasteaza unul din calculele pe care vrei sa le efectuezi [+, -, *, /]: "; std::cin >> c;

	switch (c)
	{
	case '+':
		Adunare(n, m);
		break;
	case '-' :
		Scadere(n, m);
		break;
	case '*':
		Inmultire(n, m);
		break;
	case '/':
		Impartire(n, m);
		break;
	default:
		break;
	}
	std::cout << "\n"; int calcul = NushCeEAsta(); std::cout << calcul << "\n";
}