/*Leia um vetor . Contar e escrever quantos valores pares e impares ele possui.*/

#include <iostream>

using namespace std;


void ler_vetor(int* v, int tam) {
	for (int i = 0; i < tam; i++)
	{
		cout << "informe os elementos: ";
		cin >> v[i];
	}

}

int par(int* v, int tam) {
	int cont = 0;
	for (int i = 0; i < tam; i++){
		if (v[i] % 2 == 0)
			cont++;
	}

	return cont;
}

int impar(int* v, int tam) {
	int contimpar = 0;
	for (int i = 0; i < tam; i++)
	{
		if (v[i] % 2 != 0)
			contimpar++;
	}

	return contimpar;
}

int primos(int* v, int tam) {
	int cont = 0;
	if (tam <= 1)
		return 0;
		for (int i = 2; i*i<tam; i++){
			if (tam % i == 0)
				return 0;
			cont++;


	}
	return cont;
}




int main() {
	int tam;
	cout << "informe o tamanho do vetor: ";
	cin >> tam;

	int* vetor = new int[tam];

	ler_vetor(vetor, tam);

	int pares = par(vetor, tam);
	int impares = impar(vetor, tam);

	int primo = primos(vetor, tam);

	cout << "existe " << pares << " valores pares." << endl;

	cout << "existe " << impares << " valores impares." << endl;

	cout << "existe " << primo << " valores primos.";




}