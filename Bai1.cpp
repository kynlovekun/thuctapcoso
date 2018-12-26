#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
using namespace std;
	FILE* f=fopen("intput.dat", "rb");
typedef struct Contact{
	char ten[30];
	bool gioitinh;
	char sdt[11];
	char email[30];
	char diachi[50];
};
char *FileName = "input.dat";
vector <Contact> db;
void DocDBTuFile();
void GhiDBTuFile();
void ThemMoi(Contact c);
void Xuat(Contact c);
void LietKe();
int main(){
	cout<<"Danh Ba"<<"\n";
	DocDBTuFile();
	LietkeDB();
	Contact c1;
	strcpy(c1.ten, "Thanh Thanh");
	strcpy(c1.sdt, "01206162312");
	strcpy(c1.email, "kynlovekun1@gmail.com");
	strcpy(c1.diachi, "98 Doan Tran Nghiep");
	Contact c2;
	strcpy(c2.ten,"Nhu Kha");
	strcpy(c2.sdt,"09684236587");
	strcpy(c2.email,"vongocnhukha@gmail.com");
	strcpy(c2.diachi,"34 Mai An Tiem");
	ThemMoi(c1);
	ThemMoi(c2);
	cout<<"Danh Ba sau khi nhap: \n";
	LietkeDB();
	char tenx[30];
	cout<<"Nhap ten can xoa: "<<endl;
	cin>>tenx;
	XoaContact();
}
void DocDBTuFile(){
	db.clear();
	FILE *f;
	f = fopen(FileName, "rb");
	if(f != NULL){
		while(!fsof(f)){
			Contact c;
			fread(&c, sizeof(Contact), 1, f);
			db.push_back(c);
		}
		fclose(f);
		db.pop_back();
	}
}
void GhiDBVaoFile(){
	int size = db.size();
	FILE *f;
	f = fopen(FileName, "wb");
	Contact c;
	for(int i = 0; i < size; i++){
		c = db[i];
		fwrite(&c, sizeof(Contact), 1, f);
	}
	fclose(f);
}
void ThemMoi(Contact c){
	db.push_back(c);
	GhiDBVaoFile();	
}
void XuatDB(Contact c){
	cout<<c.ten;
	cout<<c.sdt;
	cout<<c.email;
	cout<<c.diachi
}
void LietkeDB(){
	int size = db.size();
	for(int i = 0; i < size; i++)
		XuatDB(db[i]);
}
void XoaContact(){
//tim contact m co sdt trong danh ba
//xoa m
//ghi danh ba vao file
	int size = db.size();
	char m[30];
	for(int i = 0; i < size; i++){
		c = db[i];
		if(m == c.ten){
			m = c.ten;
			delete m;
		}
		else
			cout<<"not found"<<endl;
	GhiDBVaoFile();
}
//void CapNhat(Contact c){
//tim contact m co sdt c.sdt
//cap nhat c vao m
//ghi danh ba vao file}

