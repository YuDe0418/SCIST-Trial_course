#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ans = 1e6;
    for (int i = 0; i<n; i++){
        int x; cin >> x;
        if (x < ans){
            ans = x;
        }
        
    }
    cout << ans;
}