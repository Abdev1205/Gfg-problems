//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // Add 1 to the last element of the array
        arr[N - 1]++;
        
        // Handle carry-over
        int carry = 0;
        for (int i = N - 1; i >= 0; i--) {
            arr[i] += carry;
            carry = arr[i] / 10;
            arr[i] %= 10;
        }
        
        // If there is a carry-over after processing the first element, insert a new element at the beginning
        if (carry > 0) {
            arr.insert(arr.begin(), carry);
        }
        
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends