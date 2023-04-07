Ví dụ tìm kiếm tuyến tính
#include <stdio.h>
void Nhap(int a[],int n){
    for(int i=0; i<n; i++){
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[],int n){
    for(int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}
int LinearSearch(int a[], int n, int x){
    for(int i=0; i<n; i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
    int x;
    printf("\nNhap phan tu can tim:");
    scanf("%d",&x);
    if(LinearSearch(a,n,x)==-1){
        printf("Khong tim thay %d trong mang!",x);
    }else{
        printf("\nVi tri cua %d trong mang la: %d",x, LinearSearch(a,n,x));
    }    
}
