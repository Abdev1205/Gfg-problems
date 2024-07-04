//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void solve(long long &factorial, vector<long long> &ans, long long n,long long i){
        if(factorial >= n){
            return;
        }
        // cout << factorial << " " << i << endl;
        
        factorial*=i;
        if(factorial <=n){
            ans.push_back(factorial);
            solve(factorial, ans, n, i+1);
        }
        
    }
    
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        long long factorial = 1;
        vector<long long> ans;
        long long i=1;
        solve(factorial, ans, n,i);
        if(ans.size()==0){
            ans.push_back(1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends