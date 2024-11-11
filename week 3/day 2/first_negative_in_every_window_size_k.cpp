//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> FirstNegativeInteger(vector<int> &ar, int k)
    {
        vector<int> v;
        int n = ar.size();
        queue<int> q;
        int l = 0, r = 0;
        while (r < n)
        {
            if (ar[r] < 0)
                q.push(ar[r]);
            if (r - l + 1 == k)
            {
                if (!q.empty())
                    v.push_back(q.front());
                else
                    v.push_back(0);

                if (!q.empty() && ar[l] == q.front())
                    q.pop();
                l++;
            }
            r++;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends