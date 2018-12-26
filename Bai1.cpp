#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
typedef struct Contact{
	char ten[30];
	bool gioitinh;
	char sdt[11];
	char email[30];
	char diachi[50];
};
vector <Contact> db;
fstream f("input.dat");
// Thêm moi contact vào danh ba
void ThemMoi(Contact c){
//them vao danh ba
	cout<<"Nhap Ten: ";
	cin.getline(c.ten, 30);
	cout<<"Gioi Tinh: ";
	cin.getline(gt);
		if(gt == "N" || gt == "n")
			return true;
		return false;
	cout<<"So dien thoai: ";
	cin.getline(c.sdt, 11);
	cout<<"Email: ";
	cin.getline(c.email, 30);
	cout<<"Dia chi: ";
	cin.getline(c.diachi, 50);
//ghi danh ba vao file	
}
void LietkeDB(){
//in cac phan tu cua danh ba ra man hinh
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
