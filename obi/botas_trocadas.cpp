#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

using namespace std;
 int main(){ _
   // 41   5E  6D min(E,D)
   int n; cin >> n;
   vector<pair<int,int>> botas(61,{0,0}); // {E,D}
   for(int i=0; i<n; i++){
      int tam; cin>> tam;
      char pe; cin >> pe;
      if(pe=='E'){
         botas[tam].f++;
      } else{
         botas[tam].s++;
      }
   }
   int resposta = 0;
   for(int i=0; i<botas.size();i++){
      resposta += min(botas[i].f, botas[i].s);
   }
   cout << resposta << endl;
   // 1 2 3 4 5
   // 1 1 3 8 4
   // 2 1 6 12 8
 }