//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        if(s.size()<3){
            int n=stoi(s);
            return n%8==0 ? 1 : -1;
        }
        int lastDigits=stoi(s.substr(s.size() -3));
        return lastDigits % 8 == 0 ? 1:-1;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends