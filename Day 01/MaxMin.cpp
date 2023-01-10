#include <iostream>
using namespace std;
// Print the Max and min value in the array

void approach1(int arr[], int size)
{
    int max = 0;
    int min = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    min = arr[0]; // We will take value first value so that comparing between elements will be easy
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "The max value is : " << max << endl;
    cout << "The min value is : " << min << endl;
}

void approach2(int arr[], int size)
{
    int max = 0;
    int min = 0;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            min = max;
            max = arr[i];
        }else{
            min = arr[i];
        }
    }
    cout << "The max value is : " << max << endl;
    cout << "The min value is : " << min << endl;
}
int main()
{

    int arr[] = {4, 5, 7, 3, 10, 2, 1};
    int n = sizeof(arr) / sizeof(int); // --> 20/4 = 5
    // One way is you can run loops two times
    // the first loop will print the max value present in the array
    // the second loop will print the min value present in the array

    approach1(arr, n);

    // Second way is to use single for loop
    approach2(arr, n);
    return 0;
}