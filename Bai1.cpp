#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
using namespace std;
typedef struct {						// khai bao struct Contact
	char ten[30];
	bool gioitinh;
	char sdt[11];
	char email[30];
	char diachi[50];
}Contact;
vector <Contact> db;					// tao vector danh ba(db)
void DocDBTuFile();						// ham doc danh ba tu file
void GhiDBVaoFile();					// ham ghi danh ba vao file
void ThemMoi(Contact c);				// ham them moi 1 lien he vao danh ba
void LietkeDB();						// ham de xuat danh ba ra man hinh
void XoaContact(char m[]);						// ham xoa lien he trong danh ba
void TimKiem(char tten[]);			// ham tim kiem lien he trong danh ba
int main(){
	DocDBTuFile();
	Contact c1;
	strcpy(c1.ten, "Thanh Thanh");
	strcpy(c1.sdt, "01206162312");
	strcpy(c1.email, "kynlovekun1@gmail.com");
	strcpy(c1.diachi, "98 Doan Tran Nghiep");
	c1.gioitinh = 1;
	ThemMoi(c1);
	Contact c2;
	strcpy(c2.ten,"Nhu Kha");
	strcpy(c2.sdt,"09684236587");
	strcpy(c2.email,"vongocnhukha@gmail.com");
	strcpy(c2.diachi,"34 Mai An Tiem");
	c2.gioitinh = 2;
	ThemMoi(c2);
	cout<<"Danh Ba sau khi nhap: \n";
	LietkeDB();
	cout<<"-------------------------------------------"<<endl;
	cout<<"Danh ba sau khi xoa contact x: "<<endl;
	XoaContact("Thanh Thanh");
	LietkeDB();
	cout<<"Lien he can tim la: "<<endl;
	TimKiem("Nhu Kha");
}
void DocDBTuFile(){
	db.clear();									// bo di tat ca cac phan tu cua vector
	FILE *f;
	f = fopen("input.dat", "rb");
	if(f != NULL){
		while(!feof(f)){
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
	f = fopen("input.dat", "wb");
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
void LietkeDB(){
	for(int i = 0; i < db.size(); i++){
		cout<<"Ten: "<<db[i].ten<<endl;
		cout<<"So dien thoai: "<<db[i].sdt<<endl;
		cout<<"Email: "<<db[i].email<<endl;
		cout<<"Dia chi: "<<db[i].diachi<<endl;
		cout<<"Gioi tinh la: "<<db[i].gioitinh<<endl;
	}
}
void XoaContact(char m[]){
	for(int i = 0; i < db.size(); i++){
		if(strcmp(db[i].ten, m) == 0)
			db.erase(db.begin()+i);
	}
}
void TimKiem(char tten[]){
	for(int i = 0; i < db.size(); i++){
		if(strcmp(db[i].ten, tten) == 0){
			cout<<"Ten: "<<db[i].ten<<endl;
			cout<<"So dien thoai: "<<db[i].sdt<<endl;
			cout<<"Email: "<<db[i].email<<endl;
			cout<<"Dia chi: "<<db[i].diachi<<endl;
		}
	}
}


