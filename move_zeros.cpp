#include<bits/stdc++.h>
using namespace std;

vector<int> movesZeros(int n, vector<int> a){
    // temporary error
    vector<int> temp;
    //copy non - zero elements
    //from original  -> to temp
    for(int i = 0 ; i < n ; i++){
         if(a[i] != 0)
         temp.push_back(a[i]);
    }
    // number of non - zero element.

    int nz = temp.size();
    //copy elements from temp
    //fill first nz fields of
    //original array:

    for(int i = 0 ; i< nz ; i++){
        a[i] = temp[i];
    }
    //fill rest of the cells with  0:

    for(int i = nz; i< n ; i++){
        a[i] = 0;
    }
    return a;
}

int main(){
    vector<int> arr = {1, 0, 3, 6, 0, 9, 7, 0, 0, 7};
    int n = 10;
    vector<int> ans = movesZeros(n, arr);
    for(auto &it : ans){
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}

