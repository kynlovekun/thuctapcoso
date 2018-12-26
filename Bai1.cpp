#include <iostream>
#include <vector>
#include <fstream>
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
	cout<<c.gioitinh;
	cout<<c.sdt;
	cout<<c.email;
	cout<<c.diachi
}
void LietkeDB(){
	int size = db.size();
	for(int i = 0; i < size; i++)
		XuatDB(db[i]);
}
void CapNhat(Contact c){
//tim contact m co sdt c.sdt
//cap nhat c vao m
//ghi danh ba vao file
}
void XoaContact{
//tim contact m co sdt trong danh ba
//xoa m
//ghi danh ba vao file
}
int main(){
	
}
