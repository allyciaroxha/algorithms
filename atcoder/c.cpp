#include <bits/stdc++.h>

using namespace std; 

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
const int MOD = 1e9 + 7;

int main(){ _
    int n, aux;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin >> numbers[i];
    }
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<n;i++){
        aux = numbers[i]+1;
        if(aux!=numbers[i+1]){
            cout << aux << endl;
            break;
        }
    }
}