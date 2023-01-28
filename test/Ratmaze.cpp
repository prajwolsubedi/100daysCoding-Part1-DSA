

// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    private: 
    
    bool isOpen(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m){
            if((x >= 0 && x < n) && (y >=0 && y < n) && (visited[x][y] == 0) && (m[x][y] == 1)){
                return true;
            }
            else
                return false;
        }
            void solve(vector<vector<int>> &m, int n,vector<string> &ans, int x, int y,
                        vector<vector<int>> visited, string path){
                //Base case
                if(x == n-1 && y==n-1){
                    ans.push_back(path);
                    return ans;
                }
                
                visited[x][y] = 1;
                // path -> D, L, R, U
                
                //Down
                int newx = x + 1;
                int newy = y;
                if(isOpen(newx, newy, n, visited, m)){
                    path.push_back('D');
                    solve(m,n,ans,newx,newy,visited,path);
                    path.pop_back();
                }
                
                //Left
                newx = x;
                newy = y - 1;
                if(isOpen(new x, new y, n, visited, m)){
                    path.push_back('L');
                    solve(m,n,ans,newx,newy,visited,path);
                    path.pop_back();
                }
                
                
                //Right
                newx = x;
                newy = y + 1;
                if(isOpen(new x, new y, n, visited, m)){
                    path.push_back('R');
                    solve(m,n,ans,newx,newy,visited,path);
                    path.pop_back();
                }
                
                //Up
                newx = x - 1;
                newy = y;
                if(isOpen(new x, new y, n, visited, m)){
                    path.push_back('U');
                    solve(m,n,ans,newx,newy,visited,path);
                    path.pop_back();
                }
                visited[x][y] = 0;
            }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        
        if(m[0][0] == 0){
            return ans;
        }
        
        int srcx = 0;
        int srcy = 0;
        
        vector<vector<int>> visited = m;
        //initializing visited array with 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        solve(m,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}