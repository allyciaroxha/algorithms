#include <bits/stdc++.h>

using namespace std; 

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n;
    cin >> n;
    vector<int> building;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        building.push_back(a);
    }
    int maior=building[0];
    for(int i=1;i<n;i++){
        if(maior<building[i]){
            cout << i+1 << endl;
            return 0;
        } else{
            continue;
        }
    }
    cout << -1 << endl;