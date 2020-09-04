#include<bits/stdc++.h> 
using namespace std; 
#define int long long  
int a[100000]; 
  
signed main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
      
    int N; 
    cin >> N; 
      
    int sum = 0; 
    for (int i=0;i<N;i++) { 
        cin >> a[i]; 
        sum += a[i]; 
    } 
    int M; 
    cin >> M; 
    while (M--) { 
        int l, r, w; 
        cin >> l >> r >> w; 
          
        sum += (r-l+1) * w; 
        cout << sum << endl; 
    } 
}