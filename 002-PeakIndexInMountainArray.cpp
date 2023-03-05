/*
Input: arr = [0,1,0]
Output: 1
*/

#include<iostream>
#include <bits/stdc++.h>

using namespace std; 

int main(){
    int arr[] = {0, 2, 1, 0};
    int start = 0;
    int end = 4;
    int mid = start + (end - start) / 2;


    while(start <= end){
        if(arr[mid] < arr[mid + 1]) start = mid + 1;
        else if(arr[mid] > arr[mid + 1]) end = mid - 1;
        mid = start + (end - start) / 2;
    }

    cout << mid;

    return 0;
}