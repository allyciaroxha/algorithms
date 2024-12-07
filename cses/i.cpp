#include <bits/stdc++.h>

using namespace std; 

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
const int MOD = 1e9 + 7;

int main(){ _
    int n;
    cin >> n;
    vector<int> poss(n+1,0);
    poss[0]=1;

    for(int i=0;i<=n;i++){
        for(int face=1;face<=6;face++){
            if(i-face>-0){
                poss[i]=(poss[i]+poss[i-face]) % MOD;
            }
        }
    }
    cout << poss[n] << endl;
}