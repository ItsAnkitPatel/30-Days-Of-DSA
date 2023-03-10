**Date :** `17-01-2023`
## Lecture : 12 Summary
### Topic : Binary Search
[📍Video Link](https://www.youtube.com/watch?v=YJeoQBevNVo&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=12&t=3s&ab_channel=CodeHelp-byBabbar)

If we take Linear search to find our target value in an array the time complexity it will take is O(n) in worst case. <br>
Because we are comparing our target value with each index value of an array.

To beat this O(n) complexity for searching our target in an array we have another algorithm which is much more efficient than Linear search.
>i.e. Binary Search

Binary search divides an array in half and search in that section only and we keep repeating this until we find our target in the array<br>
or we left with only one index in the end.

>**Note :** Binary search works only in _monotonic function_(sound very fancy right ?) ,means the values should be in increasing order or decreasing order<br>
>Inshort binary search works only on sorted(increasing or decreasing order) array only.

Execution of binary search

1. We will take two pointer approach , we will use two variables name as _start_  & _end_ 

2. **start** will point to the starting index of array i.e 0

3. **end** will point to the last index of array i.e array of length -1 -> means **n-1**

4. After that we will take the mid index by adding start & end and divide the sum by 2 i.e (start+end)/2

5. If your target value is equal to the mid index then congrats you find your target value if not then you have two cases<br><br>
 5.1. Case 1: If your target value is less than the **mid** index of array then we will move our **end** to _mid - 1_ index and the **start** will be same as before.<br><br>
 5.2. Case 2: If your target value is greater than the **mid** index of array then we will move our **start** to _mid + 1_ index and the **end** will be same as before.

6. Then we will repeat step 4 & 5 again

7. If your _start_ and _end_ crossed each other than your target value is not present in the given array.

<br>

The worst case time complexity of Binary search is : **O(log n)** 

There is an issue with this way of finding mid index i.e **mid =(start + end)/2**

Suppose what if the _start_ value is 2<sup>31</sup> & _end_ value is 2<sup>31</sup> - 1 , when we add these values we actually crossed the range of integer and we know that the integer range is only 2<sup>31</sup> - 1 and since array indexes cannot be negative so we do not need to worry about negative range of integer .

**So what is the solution ?**
>We will tweak the formula a little bit i.e : **mid = start + (end-start)/2**

It is better to be on safe side rather than worry about if your test cases will pass or not because of mid calculation.
