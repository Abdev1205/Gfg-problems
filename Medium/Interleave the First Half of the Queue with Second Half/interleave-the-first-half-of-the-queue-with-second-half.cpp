//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        // create a 1 new queue for first half
        queue<int>q1;
        int qSize = q.size();
        int mid = q.size()/2;
        
        for(int i=0; i<q.size(); i++){
            int f = q.front();
            q.pop();
            q1.push(f);
        }
        
        // now pushing value in queue ffor next half;
        int nextHalf = qSize-mid;
        for(int i=0; i<nextHalf; i++){
            int q1f = q1.front();
            int qf = q.front();
            q.push(q1f);
            q1.pop();
            q.push(qf);
            q.pop();
        }
        
        vector<int> ans;
        for(int i=0; i<qSize; i++){
            int f = q.front();
            ans.push_back(f);
            q.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends