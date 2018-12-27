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
void DocDe(){
	ifstream f("DE1.txt"); // do file text
	int sl;
	De de;
	string s, tl; // khai bao bien tam
	getline(f,s); sl = atoi(s.c_str()); // doi sl tu string sang int
	for(int i = 0; i < sl; i++){ //gan gia tri vao bien tam s
		getline(f,s); de.cau = s; cout<<s<<endl;
		getline(f,s); de.A = s; cout<<s<<endl;
		getline(f,s); de.B = s; cout<<s<<endl;
		getline(f,s); de.C = s; cout<<s<<endl;
		getline(f,s); de.DA = s; cout<<s<<endl;
		dsda.push_back(de);
		cout<<"Nhap dap an: "; getline(cin, tl);
		
	} 
}
int main(){
	DocDe();
}
