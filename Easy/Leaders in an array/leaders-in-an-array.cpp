//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution {
public:
    bool isLeader(vector<int> &ans, int i, int n, int a[]) {
        for (int j = n - 1; j > i; j--) {
            if (a[i] < a[j]) {
                return false;
            }
        }
        return true;
    }

    void solve(vector<int> &ans, int i, int n, int a[]) {
        // base case
        if (i < 0) {
            return;
        }

        
        if (isLeader(ans, i, n, a)) {
            ans.push_back(a[i]);
        }

        // 1 case hum solve karenge, baki recursion dekhega
        solve(ans, i - 1, n, a);
    }

    // Function to find the leaders in the array.
    vector<int> leaders(int a[], int n) {
        vector<int> ans;
        int i = n - 1;
        solve(ans, i, n, a);
        reverse(ans.begin(), ans.end());  
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends