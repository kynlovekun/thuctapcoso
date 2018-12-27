#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <vector>
using namespace std;

struct De{	//khai bao struct
	string cau;
	string A, B, C;
	string DA;
};
vector<De> dsda;
bool KiemTra(string a, string b){
	if(a.compare(b) == 0)
		return true;
	return false;
}
void LD(string name, string score){
	ofstream f("Luudiem.txt"); // luu diem
	f<<name<<endl;
	f<<"diem: "<<score;
}
void LayDe(){
	ifstream f("DE1.txt"); // do file text
	int sl;
	De de;
	string s; // khai bao bien tam
	getline(f,s); sl = atoi(s.c_str());			 // doi sl tu string sang int
	for(int i = 0; i < sl; i++){ 				//gan gia tri vao bien tam s
		getline(f,s); de.cau = s;
		getline(f,s); de.A = s; 
		getline(f,s); de.B = s; 
		getline(f,s); de.C = s; 
		getline(f,s); de.DA = s;
		dsda.push_back(de);
	}
}
void Xuat(De bd){
	int diem = 0;
	string dapan;
	cout<<bd.cau<<endl;
	cout<<bd.A<<endl;
	cout<<bd.B<<endl;
	cout<<bd.C<<endl;
	cout<<"Nhap cau tra loi: ";
	cin>>dapan;
	if()
}
int main(){
	LayDe();
}
