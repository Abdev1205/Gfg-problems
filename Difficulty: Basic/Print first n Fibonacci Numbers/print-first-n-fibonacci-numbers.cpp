//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    
    void fibb(vector<long long> &ans, int i) {
        if (i == 0) {
            return;
        }
        
        int op = ans[ans.size()-1] + ans[ans.size()-2];
        ans.push_back(op);
        fibb(ans, i-1);
    }
    
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> ans;
        if (n == 0) return ans;
        if (n >= 1) ans.push_back(1);
        if (n >= 2) ans.push_back(1);

        for (int i = 2; i < n; ++i) {
            ans.push_back(ans[i-1] + ans[i-2]);
        }
        
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
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends