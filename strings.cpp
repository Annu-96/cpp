#include<bits/stdc++.h>

using namespace std;

int search(int arr[], int n, int num){
    int i;
    for(i = 0 ; i < n ; i++){
        if(arr[i] == num)
        return i;
    }
    return -1;

}
int main(){
    int arr[] = { 1, 2, 9, 8};
    int num = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = search(arr, n, num);
     cout << " " << val;
 }
