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
    while(n--){
        string a,b,c;
        cin >> a >> b >> c;
        bool possible=true;
        for(int i=0; i<a.length();i++){
            if(c[i]!=a[i] && c[i]!=b[i]){
                possible=false;
                break;
            }
        }
        if(possible==true){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}