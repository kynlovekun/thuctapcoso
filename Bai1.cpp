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
		while()
	}
}
void ThemMoi(Contact c){
	db.push_back(c);	
}
//ghi danh ba vao file
void GhiDB(){
	for(int i = 0; i < db.size(); i++)
		fwrite(&db[i], sizeof(db))
}
void XuatDB(Contact c){
	cout<<c.ten;
	cout<<c.gioitinh;
	cout<<c.sdt;
	cout<<c.email;
	cout<<c.diachi
}
//in cac phan tu cua danh ba ra man hinh
void LietkeDB(){
	DocFile();
	for(int i = 0; i < sizeof)
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
