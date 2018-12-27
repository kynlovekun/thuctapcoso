#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <vector>
using namespace std;

struct De{										//khai bao cau truc De
	string cau;
	string A, B, C;
	string DA;
};
struct Player{ 									//khai bao cau truc nguoi choi
	string ten;
	int diem;
};
vector<De> dsda; 								//tao vector danh sach dap an
vector<Player> dsplayer; 						// tao vector danh sach nguoi choi
bool KiemTra(string a, string b){
	if(a.compare(b) == 0)
		return true;
	return false;
}
void LD(string name, int score){
	ofstream f("Luudiem.txt"); 					// luu diem
	f<<name<<endl;
	f<<"diem: "<<score;
}
void LayDe(){
	ifstream f("DE1.txt"); 						// doc file text
	int sl;
	De de;
	string s; 									// khai bao bien tam
	getline(f,s); sl = atoi(s.c_str());			// doi sl tu string sang int
	for(int i = 0; i < sl; i++){ 				
		getline(f,s); de.cau = s;
		getline(f,s); de.A = s; 				//gan gia tri vao bien tam s
		getline(f,s); de.B = s; 
		getline(f,s); de.C = s; 
		getline(f,s); de.DA = s;
		dsda.push_back(de);
	}
}
void Xuat(De bd, int &diem){
	string dapan;
	cout<<bd.cau<<endl;
	cout<<bd.A<<endl;
	cout<<bd.B<<endl;
	cout<<bd.C<<endl;
	cout<<"Nhap cau tra loi: ";
	cin>>dapan;
}
void DocDe(){
	De bd;
	Player n;
	n.diem = 0;
	for(int i = 0; i < bd.siz)
}
int main(){
	De bode;
	LayDe();
	Xuat(bode);
}
