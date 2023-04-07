//cài đặt phương pháp sắp xếp nhanh, link tham khảo: https://duongdinh24.com/thuat-toan-quick-sort/

// Hàm phân đoạn
int partition(int a[], int low, int high){
    int pivot = a[high];     // Chọn pivot là phần tử cuối cùng
    int right = high-1, left = low;    // Chọn left, right
    while(true){                         // Trong khi còn đúng (left < right)
        while(left<=right && a[left]<pivot) left++;     // Tìm left thích hợp
        while(right>=left && a[right]>pivot) right--;   // Tìm right thích hợp
        if(left>=right)              // left >= right dừng
            break;
        swap(a[left], a[right]);     // Đổi chỗ
        left++;                     // Xét phần tử tiếp theo
        right--;
    }
    swap(a[left], a[high]);            // Đổi chỗ pivot về giữa mảng
    return left;                       // Trả về vị trí của pivot  
}
// Hàm quick sort
void quickSort(int a[], int low, int high){
    if(low < high)  //Mảng có nhiều hơn 0 phần tử
    {
        int pivot = partition(a, low, high);  // Chia đôi mảng
        quickSort(a,low, pivot-1);           // Đệ quy bên trái
        quickSort(a, pivot+1, high);         // Đệ quy bên phải
    }    
}
// Hàm đổi giá trị hai phần tử
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
