#include <iostream>
#include <fstream>
using namespace std;
fstream f;
void DocFile(int a[10][10],int n){					// khai bao ma tran a
	
	for(int i = 0; i < n; i++)
		for(int j= 0; j < n; j++)
			f>>a[i][j];								//doc cac phan tu cua ma tran a
	f.close();
}
void XuatDT(int a[10][10],int n){					//xuat do thi trong file dothi.txt
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout<<a[i][j]<<" ";						//xuat phan tu a[i][j] ra man hinh
			cout<<endl;
	}
}
int main(){
	int n;
	int a[10][10];
	f.open("dothi.txt", ios::in);				// mo file dothi.txt de doc
	f>>n;
	DocFile(a,n);
	XuatDT(a,n);
}
