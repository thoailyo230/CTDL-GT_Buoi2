#include<stdio.h>
int factorial(int n)
{
   if(n==0)
      return(1);
   return(n*factorial(n-1));
}
int main()
{
   int num, fact;
   printf("\nNhap so can tinh giai thua:");
   scanf("%d",&num);
   fact =factorial(num);
   printf("\nGiai thua cua %d la: %d",num, fact);
   return 0;
}
//ví dụ đệ quy tuyến tính: tính giai thừa, link tham khảo: https://freetuts.net/de-quy-tuyen-tinh-2946.html
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
