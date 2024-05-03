//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for(char c : x){
            if(c == '(') s.push(')');
            else if(c == '{') s.push('}');
            else if (c == '[') s.push(']');
            else if(!s.empty() && s.top() == c) s.pop();
            else if(!s.empty() && s.top() != c) return false;
            else s.push(c);
        }
        return s.empty();
    }

};


//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends