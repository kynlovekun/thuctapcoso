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
vector<De> dsda; 							
bool KiemTra(string a, string b){
	if(a.compare(b) == 0)
		return true;
	return false;
}
void LD(string name, int score){				//luu diem
	fstream f;
	f.open("Luudiem.txt", ios::out); 					
	f<<name<<endl;
	f<<"diem: "<<score;
}
void LayDe(){
	ifstream f("DE1.txt"); 						// doc file text
	int sl;
	De de;
	int diem = 0;
	string s, tl, urname; 									// khai bao bien tam
	getline(f,s); sl = atoi(s.c_str());			// doi sl tu string sang int
	cout<<"Kimi no Nawa? :";
	getline(cin, urname);
	for(int i = 0; i < sl; i++){ 				
		getline(f,s); de.cau = s; cout<<s<<endl;
		getline(f,s); de.A = s; cout<<s<<endl;				//gan gia tri vao bien tam s va xuat ra man hinh
		getline(f,s); de.B = s; cout<<s<<endl;
		getline(f,s); de.C = s; cout<<s<<endl;
		getline(f,s); de.DA = s;
		cout<<"Nhap cau tra loi: ";
		getline(cin,tl);
		if(KiemTra(de.DA, tl)){
			cout<<"That's right!"<<endl;
			diem++;
		}
		else
			cout<<"Oh Nooooooooo!"<<endl;
		dsda.push_back(de);
	}
	cout<<"Your points: "<<diem<<endl;
	LD(urname, diem);
}
int main(){
	LayDe();
}
