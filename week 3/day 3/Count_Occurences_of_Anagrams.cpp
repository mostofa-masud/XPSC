//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution {
public:
    int search(string pat, string s) {
        map<char, int> mp;
        for (auto u : pat) {
            mp[u]++;
        }
        
        int n = s.size();
        int k = pat.size();
        int cnt = 0;
        
        map<char, int> m;
        
        int i = 0, j = 0;
        while (j < n) {
          
            m[s[j]]++;
            
            if (j - i + 1 == k) {
               
                if (m == mp) {
                    cnt++;
                }
                
                m[s[i]]--;
                if (m[s[i]] == 0) {
                    m.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends