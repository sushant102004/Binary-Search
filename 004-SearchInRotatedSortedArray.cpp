/*
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
*/

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int size, int target){
    int s = 0, e = size - 1, m = 0;
    while(s <= e){
        m = s + (e - s) / 2;
        if(arr[m] == target) return m;
        if(arr[m] >= arr[s]){
        if(arr[m] >= target && arr[s] <= target) e = m-1;
        else s = m + 1; }
            else{
                if(arr[m] <= target && arr[e] >= target) s = m + 1;
                else e = m - 1;
            }
        }
    return -1;
}

int main(){
    // int arr[] = {4, 5, 6, 7, 0, 1, 2};
    // int arr[] = {1, 3};
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int ans = binarySearch(arr, target, size);

    cout << ans;

    return 0;
}