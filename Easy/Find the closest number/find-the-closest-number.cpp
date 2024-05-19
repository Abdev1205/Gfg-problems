//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int closest = arr[0];
        int min_diff = abs(arr[0] - k);

        for (int i = 1; i < n; ++i) {
            int diff = abs(arr[i] - k);
            if (diff <= min_diff) {
                min_diff = diff;
                closest = arr[i];
            }
        }

        return closest;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends