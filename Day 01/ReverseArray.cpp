#include <iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int j = size -1;
    for(int i =0; i < j; i++){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    
}
int main()
{
    int arr[] = {4, 8, 9, 6, 5, 1};
    int n = sizeof(arr)/sizeof(int);
    // reversed array : 1,5,6,9,8,4

    // One way is make another of same size 
    // and start copying last values into the first index in new array
    int newArr[n] ;
    int j = n-1;
    for(int i =0; i <n;i++){
        newArr[i] = arr[j];
        j--;
    }

    //printing the array
    for(int i: newArr){
        cout<<i<<" ";
    }
    cout<<endl;

    //second way is by swapping the last index with first index 
    //second index to last second index and so on
    //In this approach we are actually doing changes in the original array
    reverseArray(arr,n);
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
