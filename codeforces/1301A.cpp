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

   int k;
   cin >> k;
   vector<int> months(12);
   for (int i = 0; i < 12; i++) {
      cin >> months[i];
   }

   if (k == 0) {
      cout << 0 << endl;
      return 0;
   }

   sort(months.rbegin(), months.rend());

   int soma = 0, meses_usados = 0;

   for (int i = 0; i < 12; i++) {
      soma += months[i]; 
      meses_usados++; 
      if (soma >= k) { 
         cout << meses_usados << endl; 
         return 0; 
      }
   }
    
   cout << -1 << endl; 
   return 0;
}