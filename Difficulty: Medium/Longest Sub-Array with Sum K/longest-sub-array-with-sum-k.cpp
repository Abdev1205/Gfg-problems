//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int n, int k) 
    { 
        map<int,int> preMapSum;
        int maxLength=0;
        int sum =0;
        
        for(int i=0; i<n; i++){
            // get  sum 
            sum += A[i];
            
            if(sum==k){
                maxLength = max(maxLength,i+1);
            }
            
            // remasining 
            int rem = sum - k;
            
            if(preMapSum.find(rem)!=preMapSum.end()){
                int len = i - preMapSum[rem];
                maxLength = max(maxLength, len);
            }
            
            // if sum not found then update the value
            if(preMapSum.find(sum)==preMapSum.end()){
                preMapSum[sum] = i;
            }
        }
        
        return maxLength;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends