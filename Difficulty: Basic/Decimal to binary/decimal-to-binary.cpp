//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    // your code here
    bitset<32> binary(N);
    std::string binaryStr = binary.to_string();
    std::size_t pos = binaryStr.find('1');
    
    // Print the substring from the first '1' or "0" if N is 0
    if (pos != std::string::npos) {
        std::cout << binaryStr.substr(pos);
    } else {
        std::cout << "0" << std::endl;
    }
        
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends