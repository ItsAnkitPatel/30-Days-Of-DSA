#include <iostream>
using namespace std;

int main(){
    //All these ways are allowed in C++ to make an array
    // int hello[] = {};
    // int marks[10];
    // int arr[] = {1,2,3};
    int dost [10] ;
    std::fill(dost,dost+1,5); //This 'fill' will replace all values with constant value we want
    //std::fill(start,end,constantvalue)    
    for(int i : dost){
        cout<<i<<endl;
    }

return 0;
}
