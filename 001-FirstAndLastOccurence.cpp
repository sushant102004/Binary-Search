/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
*/

#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

int leftMost(int arr[],int size, int target) {
    int start = 0;
    int end = size;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(target == arr[mid]){
            ans = mid;
            end = mid - 1;
        } else if(target > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;            
        }
    }
    return ans;
}

int rightMost(int arr[], int size, int target){
    int start = 0;
    int end = size;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(target == arr[mid]){
            ans = mid;
            start = mid + 1;
        } else if(target > arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {5, 7, 7, 8, 8, 10};
    int left = leftMost(arr, 6, 8);
    int right = rightMost(arr, 6, 8);

    cout << left << " " << right;
    return 0;
}