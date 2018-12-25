#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
typedef struct ngaythang{
	int ngay;
	int thang;
	int nam;
}ngaythang;
int KtNhuan(int year){
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
		return 0;
}
int NgayMax(int month, int year){
	int ngaymax;
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			ngaymax = 31;
			break;
		case 4: case 6: case 9: case 11:
			ngaymax = 30;
		case 2:
			if(KtNhuan(year))
				ngaymax = 29;
				ngaymax = 28;
		break;
	}
	return ngaymax;
}
int DateCheck(int d, int m, int y){
	if(d < 1 || d > 31 || m < 1 || m > 12 || y < 1)
		return 0;
	else
		if(KtNhuan(y)){
			if(d >= 1 && d <= 29)
				return 1;
			return 0;
		}
		else{
			if(d >= 1 && d <= 28)
				return 1;
			return 0;
		}
}
int SttNgay(int Day, int Month, int Year){
	int dem = Day;
	for(int i = 1; i <= Month - 1; i++)
		dem = dem + NgayMax(i, Year);
	return dem;
}
void NgayTuStt(ngaythang &a, int &stt){
	for(int i = stt; stt > 0; stt -= NgayMax(a.thang, a.nam))
		if(stt > NgayMax(a.thang, a.nam))
			a.thang++;
		else{
			if(stt == NgayMax(a.thang, a.nam)){
				a.thang++;
				a.ngay = 1;
				stt = 0;
			}
			else{
				a.ngay = stt;
				stt = 0;
			}
		}
	cout<<"Ngay sau khi chuyen la: "<<a.ngay<<"/"<<a.thang<<"/"<<a.nam<<endl;
}
void CongNgayThang(ngaythang &n, int x){
	cout<<"Nhap x: ";
	cin>>x;
	int kq = x + SttNgay(n.ngay, n.thang, n.nam);
	int nam = n.nam;
	if (kq <= 365)
		return NgayTuStt(nam, kq);
	else
		if(KtNhuan(nam)){
			if(kq == 366)
				return NgayTuStt(kq, nam);
			return NgayTuStt(kq - 366, nam + 1);
		}
		else return NgayTuStt(kq - 365, nam + 1);
}
int main(){
	string st;
	char t[4];
	cout<<"Nhap vao ngay thang nam: "; getline(cin, st);
	ngaythang x;
	
	t[0] = st[0];
	t[1] = st[1];
	
	x.ngay = atoi(t);
	t[0] = st[3];
	t[1] = st[4];
	
	x.thang = atoi(t);
	t[0] = st[6];
	t[1] = st[7];
	t[2] = st[8];
	t[3] = st[9];
	x.nam = atoi(t);
	
	if(KtNhuan(x.nam))
		cout<<"Nam "<<x.nam<<" la nam nhuan"<<endl;
	else
		cout<<"Nam "<<x.nam<<" khong la nam nhuan"<<endl;
	if(DateCheck(x.ngay, x.thang, x.nam)){
		int stt = SttNgay(x.ngay, x.thang, x.nam);
		cout<<"Ngay thu: "<<stt<<endl;
	}
	else
		cout<<"Nhap ngay sai!"<<endl;
	
	cout<<x.ngay<<"/"<<x.thang<<"/"<<x.nam;
}
