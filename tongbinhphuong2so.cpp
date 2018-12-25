#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    long S = 0;
    printf("\n Nhap vao so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("\n Nhap vao so nguyen thu hai: ");
    scanf("%d", &b);
    S = a*a+b*b;
    printf("\n Tong binh phuong 2 so a va b la: S = %d^2 + %d^2 = %d", a, b, S);
    getch();
}
