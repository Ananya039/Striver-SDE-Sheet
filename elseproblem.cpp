//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m){
        if(n<m)
        return "lesser";
        else if(n==m)
        return "equal";
        else
        return "greater";
    }
    int main(){
        int n,m;
        cin>> n>> m;
        cout << compareNM(n,m)<< endl;
        return 0;
    }
};
