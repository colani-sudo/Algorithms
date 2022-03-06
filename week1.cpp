#include <iostream>

using namespace std;

int* sort (int* A, int n)
{
// index i divide A[] to 2 partitions
// A[0…i-1] are sorted, A[i…n-1] are unsorted
    for (int i = 1; i < n; ++i)
    {
        int j = i, val = A[j];
        while (j > 0 && !(A[j-1] <= val))
        {
            A[j] = A[j-1];
            --j;
        }
            A[j] = val;
    }
    return A;
}

int main(){

    int nums[] = {5,7,2,14,4,1,16,10};
    sort(nums, 8);
    for(int i=0; i<8; i++)
        cout << nums[i] << " ";
    cout << endl;
    return 0;
}