// C program for iterative implementation
// of the above approach

#include <stdio.h>

// Function to implement lower_bound
int lower_bound(int arr[], int N, int X)
{
    int mid;

    // Initialise starting index and
    // ending index
    int low = 0;
    int high = N;

    // Till low is less than high
    while (low < high)
    {
        mid = low + (high - low) / 2;

        // If X is less than or equal
        // to arr[mid], then find in
        // left subarray
        if (X <= arr[mid])
        {
            high = mid;
        }

        // If X is greater arr[mid]
        // then find in right subarray
        else
        {
            low = mid + 1;
        }
    }

    // if X is greater than arr[n-1]
    if (low < N && arr[low] < X)
    {
        low++;
    }

    // Return the lower_bound index
    return low;
}

// Function to implement upper_bound
int upper_bound(int arr[], int N, int X)
{
    int mid;

    // Initialise starting index and
    // ending index
    int low = 0;
    int high = N;

    // Till low is less than high
    while (low < high)
    {
        // Find the middle index
        mid = low + (high - low) / 2;

        // If X is greater than or equal
        // to arr[mid] then find
        // in right subarray
        if (X >= arr[mid])
        {
            low = mid + 1;
        }

        // If X is less than arr[mid]
        // then find in left subarray
        else
        {
            high = mid;
        }
    }

    // if X is greater than arr[n-1]
    if (low < N && arr[low] <= X)
    {
        low++;
    }

    // Return the upper_bound index
    return low;
}

// Function to implement lower_bound
// and upper_bound of X
void printBound(int arr[], int N, int X)
{
    int idx;

    // If lower_bound doesn't exists
    if (lower_bound(arr, N, X) == N)
    {
        printf("Lower bound doesn't exist");
    }
    else
    {

        // Find lower_bound
        idx = lower_bound(arr, N, X);
        printf("Lower bound of %d is"
               "% d at index % d\n ",
               X,
               arr[idx], idx);
    }

    // If upper_bound doesn't exists
    if (upper_bound(arr, N, X) == N)
    {
        printf("Upper bound doesn't exist");
    }
    else
    {

        // Find upper_bound
        idx = upper_bound(arr, N, X);
        printf("Upper bound of %d is"
               "% d at index % d\n ",
               X,
               arr[idx], idx);
    }
}

// Driver Code
int main()
{
    // Given array
    int arr[] = {4, 6, 10, 12, 18, 20};
    int N = sizeof(arr) / sizeof(arr[0]);

    // Element whose lower bound and
    // upper bound to be found
    int X = 6;

    // Function Call
    printBound(arr, N, X);
    return 0;
}
