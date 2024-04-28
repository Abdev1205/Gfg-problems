//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    
    int findMiddle(Node *&slow, Node *&fast) {
        int counter = 0;
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            counter++;
        }
        return counter;
    }
    
    Node* deleteMid(Node* head)
    {
        // Your Code Here
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        Node* slow=head;
        Node* fast=head;
        int middle=findMiddle(slow,fast);
        // cout<<"Middle len "<<middle<<endl;
        
        Node* curr=head;
        for(int i=1; i<middle; i++){
            curr=curr->next;
        }
        // cout<<"Curr data :"<<curr->data<<endl;
        
        Node* forward=curr;
        forward=forward->next->next;
        curr->next=forward;
        return head;
    }
};

//{ Driver Code Starts.



void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		Solution obj;
		head = obj.deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends