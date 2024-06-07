//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
                                                 
    // create a deque for storing the index
    deque<long long > q;
    vector<long long> ans;
    
    
    // proccess the first window 
    for(int i=0; i<K; i++){
        if(A[i]<0){
            q.push_back(i);
        }
    }
    
    // process the remaining window
    for(int i=K; i<N; i++){
        if(!q.empty()) {
            ans.push_back(A[q.front()]);
        } else {
            ans.push_back(0);
        }
        
        // removing the outbound numbers
        
        while(!q.empty() && (i-q.front()>=K) ){
            q.pop_front();
        }
        
        // insertion into window size if their value is less than 0
        if(A[i]<0){
            q.push_back(i);
        }
    }
    
    
    // processing the last window
    if(!q.empty()){
        ans.push_back(A[q.front()]);
    }
    else{
        ans.push_back(0);
    }
    
    return ans;
                                                 
 }