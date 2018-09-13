#include <iostream>

using namespace std;

public static void main() {

	int matA[10][10];

	//Initialize Matrix and Displays it
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matA[i][j] = x;
			cout << matA[i][j] << "\t";
			x++;
		}
		cout << "\n";
	}
	cout << "\n\n\n";

	//Takes Transpose
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matB[j][i] = matA[i][j];
		}
		cout << "\n";
	}

	//Display Tranpose
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << matB[i][j] << "\t";
		}
		cout << "\n";
	}

}
