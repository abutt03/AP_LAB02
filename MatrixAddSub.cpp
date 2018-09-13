#include <iostream>
#include <vector>

using namespace std;

vector < vector <double> > add(vector < vector <double> > matA, vector < vector <double> > matB, int row, int col)
{
	vector < vector <double> > matC;
	for (int i = 0; i< row; i++) {
		for (int j = 0; j<col; j++) {
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}

	return matC;
}


vector < vector <double> > sub(vector < vector <double> > matA, vector < vector <double> > matB, int row, int col)
{
	vector < vector <double> > matC;
	for (int i = 0; i< row; i++) {
		for (int j = 0; j<col; j++) {
			matC[i][j] = matA[i][j] - matB[i][j];
		}
	}

	return matC;
}

//int matC[2][2];


int main()
{

	vector <vector<double> > matA;
	vector <vector<double> > matB;
	vector <vector<double> > matC;


	for (int i = 0; i <= 5; i++) {
		for (int j = 0; j <= 5; j++) {
			cout << "B[" << i << "][" << j << "]=";

			cin >> matA[i][j];
		}
	}

	for (int i = 0; i<5; i++) {
		for (int j = 0; j< 5; j++) {
			cout << "B[" << i << "][" << j << "]=";

			cin >> matB[i][j];
		}
	}



	//mat_add(matA, matB);
	matC = sub(matA, matB, 5, 5);

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << matC[i][j] << "\t";
		}
		cout << "\n";
	}



	return 0;
}