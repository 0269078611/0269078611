#include <iostream>
using namespace std;

void rec_max_min(int* arr, int n, int* max, int* min, int i)
{
	if (i<n)
	{
		if (arr[i] < *min)
			*min = arr[i];
		if (arr[i] > *max)
			*max = arr[i];
		rec_max_min(arr, n, max, min, i + 1);
	}
}

int main()
{
	int arr[] = { 45,67,8,33,2,3,-1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0], min = arr[0], i=0;

	rec_max_min(arr, n, &max, &min, i);

	cout << "max " << max << endl;
	cout << "min " << min << endl;
}
