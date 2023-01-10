**Date :** `10-01-2023`
## Lecture : 9 Summary
### Topic : Introduction to Arrays
[📍Video Link](https://www.youtube.com/watch?v=sNrLlmOIn-c&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=9)

**<details><summary>Why start from lecture 9 ?</summary>**

If you are new to my journey you may ask to me why I started from Lecture 9 🤨

  
**The answer is :** because I already completed last 8 lectures in my 📍[30-Days-Of-C++](https://github.com/ItsAnkitPatel/30-Days-Of-cpp/tree/main/Day%2016/Programming) repo already so writing all those again is not very useful(these are my thought)
<hr>
</details>


Arrays prove very powerful when we want to store many values of same datatype together without going through the hassle task of declaring each value with a variable name.

Inshort, Arrays is a datatype which help us to store similar type of datatypes together under a single variable.

Want a example for better understanding ? Here you go buddy.

```c++
int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
```
Did you saw the above code ? Does it look very tedious task to you too ? <br>
Then to confront this issue of yours we have a hero in programming world called array🦸 which came to make your programming life easier.
```c++
int arr[] = {4,5,6,7,8};
```
Tada😁

**Now how this array work behind the scenes ?**<br>
In memory arrays are stored in contiguous way means all values of array are in continue way and to access these all values<br>
we have a thing called **_index_** what are these for ? Well indexes provide us a way to access any value that is present inside an array.<br>
Indexing of array start from **0**.

```c++
int arr[] = {4,5,6,7,8};

           ___________________
          | 4 | 5 | 6 | 7 | 8 |
           ___________________
Index =    0    1   2   3   4

So the expression for range of any n number of array length we can derive is 
  0 to n - 1
  
e.g.
For array length of 5 is =  0 to 4 
```
**Now, in how many ways you can declare an array ?**
```c++
    int hello[] = {};
    int marks[10];
    int arr[] = {1,2,3}; //In this way you do not need to define the length of the array the compiler will automatically know it
    int dost[5] = {1,2,3,4,5};
    //There may me more ways I only shared which I got to know during my learning
```
**You may ask what if we defined the length of an array and try to enter values more than the length of an array ?**<br>
e.g.
```c++
int dost[5] ={1,2,3,4,5,6};
```
```c++
The compiler will give error during compile time (remember : Compile time error and runtime error are different things).
Compiler will say : too many initializers for int[5]
```

**If we write in this way :**

```c++
int arr[5] ;
```
And try to print each value the compiler will give us a garbage value(random negative or postive integer value will be given by the compiler in this case )

**If we write in this way :**

```c++
int arr[5] = {};
or
int arr[5] ={0};
Both will give same output
```
All the values will be initialized with zero. But this only happens in 0 case or when we don't give any value in the initializer.<br>
If you try to do it with other values e.g. 1 <br>
```c++
int arr[5] = {1};
```
The output will be
```c++
1
0
0
0
0
```
**So what are the ways to initialze all the members value with the same value which we want to give**.<br>
There are many ways of course but I know two ways till now and those are :<br>
1.Using loop<br>
2.By using `std::fill(startingIndex,endIndex,constantValue)`

**Loop example :**
```c++
int arr[5] ;
    for(int i =0; i < 4; i++){
        arr[i] = 10;
    }
```
**Another method**
```c++
int arr[5];
std::fill(arr,arr+5,10);
```
**How to print an array ?**
>You can use loop or foreach loop in where you don't need to give condition and increament value

**Point to remember :**
>When you pass array to an function you actually passing the address of the first element of the array through which you can traverse the whole array without any issue. So if you do any changes during function execution those changes will actually happen in original array.
```c++
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
```
**Output**
```
Before update
1 2 3 4 5 
After update
10 20 3 4 5 
```
This concept is called _pass by reference_.

**If you still don't understand then think in this way :** Suppose you have a file which is on your google drive and your friend have access of that file too so when your friend do any changes in that file then those changes will refelect on your side of file too.

<img src= "/media/gifs/easy.gif" height ="250">

**hope so**👀



