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
	int calcul = NushCeEAsta();
	std::cout << calcul << "\n";
	int n, m;
	std::cin >> n;
	std::cout << "\n";
	std::cin >> m;
	std::cout << "\n";
}