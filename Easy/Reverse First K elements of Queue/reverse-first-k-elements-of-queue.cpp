//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    void kReverse(queue<int> &q,int k){
        if (q.empty()) {
            return;
        }
        int qSize= q.size();
        
        int size = min(qSize, k);
        
        stack<int> st;
        for(int i=0; i<size; i++){
            int f = q.front();
            q.pop();
            st.push(f);
        }
        
        while(!st.empty()){
            int r = st.top();
            st.pop();
            q.push(r);
        }
        
        int rem = q.size() - k;
        for(int i=0; i<rem; i++){
            int f = q.front();
            q.pop();
            q.push(f);
        }
    }
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        kReverse(q,k);
        return q;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends