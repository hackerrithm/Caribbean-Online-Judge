#include<iostream>
using namespace std;

void quickSort(int list[], int low, int high)
{
	int pivot, i, j, temp;
	if (low < high)
	{
		pivot = low;
		i = low;
		j = high;
		while (i<j)
		{
			while (list[i] <= list[pivot] && i <= high)
			{
				i++;
			}
			while (list[j] > list[pivot] && j >= low)
			{
				j--;
			}
			if (i<j)
			{
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
		temp = list[j];
		list[j] = list[pivot];
		list[pivot] = temp;
		quickSort(list, low, j - 1);
		quickSort(list, j + 1, high);
	}
}

int main()
{
	int n, q;
	int arr1[1000];
	cin >> n;
	for (q = 0; q<n; q++)
	{
		cin >> arr1[q];
	}
	quickSort(arr1, 0, n - 1);
	for (q = 0; q<n; q++)
	{
		cout << arr1[q] << endl;
	}
	return 0;

}