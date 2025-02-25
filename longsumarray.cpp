#include<bits/stdc++.h>
using namespace std;
int longestSumarry(vector<int> &a, long long k){
    map<long long, int> preSumMap; //sotres prefix sum and their first occurrence indices
    long long sum = 0; //trakes the running sum of elements
    int maxlen = 0 ; // stores the length of the longest subrarray with sum K.
    for(int i = 0; i< a.size(); i++){
        sum += a[i];
        if(sum == k){
            maxlen = max(maxlen, i +1);
        }
   long long rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end()){
        int len = i - preSumMap[rem];
        maxlen = max(maxlen, len);
    }
    if(preSumMap.find(sum) == preSumMap.end())
    {
    preSumMap[sum] = i; 
    }
}
    return maxlen;
}
    int main() {
        vector<int> arr = {1, 1, 4, 2, 1, 1};
        long long k = 3;
    
        cout << "Longest subarray length with sum " << k << " is: " 
             << longestSumarry(arr, k) << endl;
        return 0;
    }
