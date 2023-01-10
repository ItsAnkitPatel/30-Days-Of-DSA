#include <iostream>
using namespace std;
void update(int num[],int size){
    num[0] = 10;
    num[1] = 20;
    for(int j =0; j<size;j++){
        cout<<num[j]<<" ";
    }
}

int main(){
    int arr[] ={1,2,3,4,5};
    cout<<"Before update"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After update"<<endl;
    update(arr,5);
    cout<<endl;

return 0;
}
