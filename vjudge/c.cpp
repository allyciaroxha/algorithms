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
    vector<int> numbers;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int a;
        cin >> a;
        auto it = lower_bound(numbers.begin(), numbers.end(), a);
        int x = it - numbers.begin();
        if(numbers[x]==a){
            cout << "Yes " << x+1 << endl;
        } else{
            auto it = upper_bound(numbers.begin(), numbers.end(), a);
            int x = it - numbers.begin();
            cout << "No " << x+1 << endl;
        }
    }
}