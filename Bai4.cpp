#include <iostream>
#include <fstream>
using namespace std;
fstream f;
struct Cap{											//* khai bao struct Cap *
	int dinh;
	int tang;
};
void DocFile(int a[10][10],int n){					//* khai bao ma tran a *
	
	for(int i = 0; i < n; i++)
		for(int j= 0; j < n; j++)
			f>>a[i][j];								//* doc cac phan tu cua ma tran a *
	f.close();
}
void XuatDT(int a[10][10],int n){					//* xuat do thi trong file dothi.txt *
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout<<a[i][j]<<" ";						//* xuat phan tu a[i][j] ra man hinh *
			cout<<endl;
	}
}
void TaoMoi(int a[10][10], int &n1){				//* tao moi mot do thi *
	cout<<"Nhap n1: ";
	cin>>n1;
	f.open("dothi1.txt", ios::out);					//* mo file dothi1.txt de ghi *
	f<<n1<<endl;
	for(int i = 0; i < n1; i++){
		for(int j = 0; j < n1; j++){
			cout<<"Trong so "<<i<<" den "<<j<<": ";
			cin>>a[i][j];
			f<<a[i][j]<<" ";						//* ghi a[i][j] vao file dothi.txt *
		}
		f<<endl;
		f.close();
	}
}

int main(){
	int n, n1;
	int a[10][10];
	f.open("dothi.txt", ios::in);					//* mo file dothi.txt de doc *
	f>>n;
	DocFile(a,n);
	XuatDT(a,n);
	TaoMoi(a,n1);
	XuatDT(a,n1);
}
