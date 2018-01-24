// quicksort implementation - using last element as pivot
#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}

int partition(int a[], int low, int high)
{
	int i = low - 1;
	int pivot = a[high];
	for (int j = low; j<high;j++)
	{
		if(a[j]<=pivot){
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[++i], a[high]);
	return i;
}

void quicksort(int a[], int low, int high)
{
	if(low<high)
	{
		int pi = partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main ()
{
	int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;


}
