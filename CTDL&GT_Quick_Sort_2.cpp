//ví dụ phương pháp sắp xếp nhanh mảng arr[] = { 10, 7, 8, 9, 1, 5 } , link tham khảo: https://dnmtechs.com/thuat-toan-sap-xep-nhanh-quicksort/
#include <iostream>

using namespace std;

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];    //taking the last element as pivot
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		// so sanh phan tu hien tai voi pivot
		//neu nho hon thi doi cho
		if (arr[j] <= pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Ham in mang ra man hinh */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Mang truoc khi sap xep:" << endl;
	printArray(arr, n);

	quickSort(arr, 0, n - 1);

	cout << endl;
	cout << "Mang sau khi duoc sap xep:";
	cout << endl << endl;

	printArray(arr, n);
	
	cin.get();
	getchar();

	return 0;
}
