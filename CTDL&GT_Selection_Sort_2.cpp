//ví dụ phương pháp chọn trực tiếp
#include <stdio.h>
void Nhap(int a[],int n){//ham nhap mang
    for(int i=0; i<n; i++){
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[],int n){//ham xuat mang
    for(int i=0; i<n; i++){
        printf("%d \t",a[i]);
    }
}
void SelectionSort(int a[], int n){//thuat toan chon truc tiep
    for(int i=0; i<n-1; i++)
    {
        int min = i;//thiet lap phan tu hien tai la vi tri min
        for (int j = i+1; j<n; j++){
            if (a[j]<a[min]){//kiem tra phan tu tiep theo co nho hon vi tri min khong neu co doi min 
                min = j;
            }
        }
        // doi cho cac phan tu trong mang
        int tg = a[i];
        a[i] = a[min];
        a[min] = tg;
    }
    printf("\nMang sau khi sap xep la:\n");    
    Xuat(a,n);    
}
int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
    SelectionSort(a,n);
}
