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
	
	cout<<x.ngay<<"/"<<x.thang<<"/"<<x.nam;
}
