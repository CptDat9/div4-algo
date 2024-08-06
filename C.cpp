#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool canshower(int n, int s, int m, vector<pair<int, int>>& tasks) {
    sort(tasks.begin(), tasks.end());
    
    if (tasks[0].first >= s) {
        return true;
    }
    
    for (int i = 1; i < n; i++) {
        if (tasks[i].first - tasks[i - 1].second >= s) {
            return true;
        }
    }
    
    if (m - tasks[n - 1].second >= s) {
        return true;
    }
    
    return false;
}
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        
        vector<pair<int, int>> tasks(n);
        for (int i = 0; i < n; i++) {
            cin >> tasks[i].first >> tasks[i].second;
        }
        
        if (canshower(n, s, m, tasks)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
