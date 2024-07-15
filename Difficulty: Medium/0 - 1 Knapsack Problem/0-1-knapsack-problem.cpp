//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    
    int solve(int wt[], int val[], int n, int c,vector<vector<int>> &dp){
        // base case
        if(n==0){
            if(wt[0]<=c){
                return val[0];
            }
            else{
                return 0;
            }
        }
        
        // check value in dp
        if(dp[n][c]!=-1){
            return dp[n][c];
        }
        
        int include =0;
        
        if(wt[n] <= c){
            include = val[n] + solve(wt,val,n-1,c-wt[n],dp);
        }
        
        int exclude = 0 + solve(wt,val,n-1,c,dp);
        
        dp[n][c] = max(include,exclude);
        return dp[n][c];
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
       int ans = solve(wt,val,n-1,W,dp);
       return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends