//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    typedef long long int ll;

    long long int minValue(vector<int> &arr1, vector<int> &arr2) {
        // code here
        // for max value 
        priority_queue<int> maxHeap;
        priority_queue<int , vector<int> , greater<int> > minHeap;
        
        /// add all t he value of arr1 inmin heap
        for(auto a:arr1){
            minHeap.push(a);
        }
        
        // add all the value of arr2 in max heap
        for(auto a:arr2){
            maxHeap.push(a);
        }
        
        // now store the producat value value
        long long int ans = 0;
        
        while(!maxHeap.empty() || !minHeap.empty()){
            int small = minHeap.top();
            int large = maxHeap.top();
            ans+= small * large;
            // cout<<"operation is : "<<small<<" * "<<large<<" and ans = "<<ans<<endl;
            
            // remove both top value
            minHeap.pop();
            maxHeap.pop();
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        long long int ans = ob.minValue(arr1, arr2);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends