/*
    Rotate array by given index number.
    Input: nums = [1,2,3,4,5,6,7], k = 3
    Output: [5,6,7,1,2,3,4]
    Explanation:
    rotate 1 steps to the right: [7,1,2,3,4,5,6]
    rotate 2 steps to the right: [6,7,1,2,3,4,5]
    rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    vector<int>temp(size);

    for(int i = 0; i < size; i++){
        temp[(i + k) % size] = arr[i];
    }

    for(int i = 0; i < size; i++){
        cout << temp[i] << " ";
    }
    
    return 0;
}