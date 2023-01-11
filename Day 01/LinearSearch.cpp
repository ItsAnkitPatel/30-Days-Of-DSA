#include <iostream>
using namespace std;
bool elementPresentOrNot(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target){
            return true;
        }
    }
    return false;
    
}
int main(){
    int arr[] = {2,3,7,1,4,5,9,11,10};
    int size = sizeof(arr)/sizeof(int);
    //Find whether 1 is present in the array or not
    int target = 1;
    bool isPresent = elementPresentOrNot(arr,size,target);
    if(isPresent){
    cout<<" 1 present in the array : Yes"<<endl;

    }else{

    cout<<" 1 present in the array : No"<<endl;
    }
return 0;
}
