//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    string compareNum(int A,int B){
        // code here 
        if(A > B) 
        cout << A << " is greater than " << B;
        else if(A < B) 
        cout << A << " is less than " << B;
        else 
        cout << A << " is equals to " << B;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B;
        cin >> A>>B;
        Solution ob;
        cout << ob.compareNum(A,B) << endl;
    }
    return 0; 
} 

// } Driver Code Ends