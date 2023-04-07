//cài đặt thuật toán tìm kiếm tuyến tính
int LinearSearch(int a[], int n, int x)
{
	int i=0;
	while((i<n)&&(a[i]!=x)){
		i++;
	}
	if(i==n){
		return -1;//Tìm không thấy x
	}
	else{
		return i;//Tìm thấy x
	}
}
