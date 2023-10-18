#include <iostream>
#include <vector>

using namespace std;

int main(){
	int m, n;
	
	cout<<"masukan jumlah baris: ";
	cin>>m;
	cout<<"masukan Jumlah kolom: ";
	cin>>n;
	
	vector<vector<int>> matrix(m, vector<int>(n));
	
	cout<<"masukan elemen matriks\n";
	for (int i = 0; i<m; i++){
		for (int j = 0; j<n; j++){
			cin>>matrix[i][j];
			
		}
	}
	
	cout<<"Matriks inputnya\n";
	for (int i = 0; i<m; i++){
		for (int j = 0; j<n; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	vector<vector<int>>transpose(n, vector<int>(m));
	
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			transpose[i][j] = matrix[j][i];
		}
	}
	
	cout<<"matriks transpose nya\n";
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cout<<transpose[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}