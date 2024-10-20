using namespace std;
#include <iostream>
#include <math.h>

void fun(double mat[3][3], float numero);
void carica(double mat[3][3]);
void stampa(double mat[3][3]);
void det(double mat[3][3]);

int main()
{

	double matrice[3][3];
	float num;
	int a = 0;

	cout << "Carica la matrice : " << endl;
	carica(matrice);

	cout << "Cosa vuoi fare? \n";
	cout << "1. Calcolo determinante   2.Moltiplicazione per un numero" << endl;
	cin >> a;

	if (a == 1) {
		det(matrice);
	}
	else if (a == 2) {

		cout << "NUM = ";
		cin >> num;

		fun(matrice, num);
		stampa(matrice);
	}
	else {
		cout << "Rispondi con 1 o 2" << endl;
	}

}

void fun(double mat[3][3], float numero) {
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			mat[j][i] = mat[j][i] * numero;
		}
}

void carica(double mat[3][3]) {

	cout << "Inserisci un valore alla volta, e ogni volta premi Enter." << endl;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			cout << " riga: " << i + 1 << " colonna: " << j + 1 << " ";
			cin >> mat[i][j];
		}

}

void stampa(double mat[3][3]) {

	for (int i = 0; i < 3; i++) {
		cout << "|";
		for (int j = 0; j < 3; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << "| \n";
	}
}

void det(double mat[3][3]) {
	float det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) +
				mat[0][1] * (mat[1][2] * mat[2][0] - mat[1][0] * mat[2][2]) +
				mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
	cout << det;
}