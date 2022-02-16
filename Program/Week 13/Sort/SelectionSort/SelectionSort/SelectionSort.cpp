
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void InsertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        printArray(arr, 8);

    }
}



void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {

                swap(arr[i], arr[j]);
            }
        }
        printArray(arr, 6);
    }

}
void swap(int* larger, int* smaller) {
    int temp = *larger;
    *larger = *smaller;
    *smaller = temp;
}
/*
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted 
void mergeSort(int arr[], int l, int r) {
    if (l >= r) {
        return;//returns recursively
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

*/



int partition(int arr[], int low, int high)
{
    int pivot = arr[high/2]; // pivot  
    int i = (low - 1); // Index of smaller element  

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before  
        // partition and after partition  
        printArray(arr, 8);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
        
    }
}

int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
/*
// A function to do counting sort of arr[] according to 
// the digit represented by exp. 
void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array 
    int i, count[10] = { 0 };

    // Store count of occurrences in count[] 
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] now contains actual 
    //  position of this digit in output[] 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array 
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now 
    // contains sorted numbers according to current digit 
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// The main function to that sorts arr[] of size n using 
// Radix Sort 
void radixsort(int arr[], int n)
{
    // Find the maximum number to know number of digits 
    int m = getMax(arr, n);

    // Do counting sort for every digit. Note that instead 
    // of passing digit number, exp is passed. exp is 10^i 
    // where i is current digit number 
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

*/

int main()
{
	cout << "===================== " << "Insertion Sort" << "=====================" << endl;

	//Insertion Sort
	int Insertarr[] = { 35,85,12,55,48,77,23,69 };
	InsertionSort(Insertarr, (sizeof(Insertarr) / sizeof(Insertarr[0])));

	cout << "\n===================== " << "Selection Sort" << "=====================" << endl;
	// Selection Sort
	//int Selectionarr[] = { 7,12,24,4,19,32 };
	//selectionSort(Insertarr, (sizeof(Insertarr) / sizeof(Insertarr[0])));

    /*
	//Merge Sort
    int MergeArr[] = { 20,80,40,25,60,40 };
    mergeSort(MergeArr, 0, (sizeof(MergeArr) / sizeof(MergeArr[0])));
    */
	//Quick Sort
    cout << "\n===================== " << "Quick Sort" << "=====================" << endl;

    int arr[] = { 35,85,12,55,48,77,23,69 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    /*
	//Radix Sort 
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call 
    radixsort(arr, n);
    */
}
