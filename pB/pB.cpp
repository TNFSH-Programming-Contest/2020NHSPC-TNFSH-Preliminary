#include <iostream>
#include <vector>
using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, m;
    cin >> n >> k >> m;
    
    vector<int> a(n), b(n);
    for (int i=0; i<n; i++)
        cin >> a[i];
    
    for (int i=0; i<n; i++)
        cin >> b[i];
    
    auto div_ext = [](int a, int b)
    {
        return (a/b) + bool(a%b);
    };
    
    auto test = [&](int t)
    {
        int sum = 0;
        for (int i=0; i<n; i++)
        {
            int k_left = max(k - t*a[i], 0LL);
            sum += div_ext(k_left, b[i]);
        }
        
        return (sum <= m);
    };
    
    {
        int a = 0, b = 1e9;
        while (a < b)
        {
            int c = (a + b)/2;
            if (test(c))
                b = c;
            else
                a = c + 1;
        }
        
        cout << a << '\n';
    }
}
