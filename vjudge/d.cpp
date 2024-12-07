#include <bits/stdc++.h>

using namespace std; 

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;

int main(){ _
    int n;
    cin >> n;
    map<pair<int, int>, string> code;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        string a;
        cin >> x >> y >> a;
        code[{x, y}] = a;
    }
    
    int t;
    cin >> t;
    vector<pair<int, int>> pares(t);
    
    for (int i = 0; i < t; i++) {
        cin >> pares[i].first >> pares[i].second;
    }

    for (const auto& par : pares) {
        if (code.find(par) != code.end()) {
            cout << code[par] << endl;
        }
    }

    return 0;
}