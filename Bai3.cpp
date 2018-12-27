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
void LD(string name, int score){
	ofstream f("Luudiem.txt"); // luu diem
	f<<name<<endl;
	f<<"diem: "<<score;
}
void LayDe(){
	ifstream f("DE1.txt"); // doc file text
	int sl;
	De de;
	string s; // khai bao bien tam
	getline(f,s); sl = atoi(s.c_str());			 // doi sl tu string sang int
	for(int i = 0; i < sl; i++){ 				
		getline(f,s); de.cau = s; cout<<s<<endl;
		getline(f,s); de.A = s; cout<<s<<endl;		//gan gia tri vao bien tam s
		getline(f,s); de.B = s; cout<<s<<endl;
		getline(f,s); de.C = s; cout<<s<<endl;
		getline(f,s); de.DA = s;
		dsda.push_back(de);
	}
}
void Xuat(De bd){
	ifstream f("DE1.txt");
	int SL;
	int diem = 0;
	string dapan, x;
	getline(f,x); SL = atoi(x.c_str()); 
	for(int i = 0; i < SL; i++){
		cout<<"Nhap cau tra loi "<<i+1<<": ";
		cin>>dapan;
		if(KiemTra(dapan, bd.DA) == true){
			cout<<"That's right!"<<endl;
			diem++;
		}
		else
			cout<<"Oh Noooooooooo!"<<endl;
	}
	string ten;
	LD(ten, diem);
	
}
int main(){
	De bode;
	LayDe();
	Xuat(bode);
}
