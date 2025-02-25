#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target){
    map<int, int> mpp;
    for(int i = 0; i <n ; i++){
     int a = book[i];
     int more = target - a;
     if(mpp.find(more) != mpp.end()){
        return "yes";
     } 
     mpp[a] = i;
    }
    return "No";
}

int main(){
    vector<int> arr= {4, 5, 8, 2};
    int target = 10;

    cout << "Longest subarray length with sum " << target << " is: " 
             <<read(arr.size(),arr, target) << endl;
        return 0;

}