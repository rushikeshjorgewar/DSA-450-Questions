#include <iostream>
using namespace std;

// que - merge sort using recursion .
// time complexity - O(nLogN);
// space complexity - O(LogN);

void merge(int *first, int *second, int len1, int len2, int *mArr, int s, int e)
{

    // indexes for two array.
    int i1 = 0;
    int i2 = 0;
    int mid = s + (e - s) / 2;

    int mi = s;
    // adding elements of first array in main array.
    
    while (i1 < len1)
    {
        mArr[mi++] = first[i1++];
    }
    // updating mi.
    mi = mid + 1;
    // adding elements of second array in main array.

    while (i2 < len2)
    {
        mArr[mi++] = second[i2++];
    }
    
    // reversing elements to get sorted array.

    for (int i = s; i <= e; i++)
    {

        for (int j = i + 1; j <= e; j++)
        {

            if (mArr[i] > mArr[j])
            {
                int temp = mArr[i];
                mArr[i] = mArr[j];
                mArr[j] = temp;
            }
        }
    }
}
void mergeSort(int *mArr, int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int mi = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = mArr[mi++];
    }

    int *second = new int[len2];
    mi = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        second[i] = mArr[mi++];
    }

    merge(first, second, len1, len2, mArr, s, e);
}

int main()
{

    int arr[6] = {2, 10, 1, 9, 5, 8};
    int n = 6;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}