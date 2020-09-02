#include<bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define EM emplace
#define EM_back emplace_back
#define lson (root<<1)
#define rson (root<<1|1)
#define sz(x) ((int)x.size())
#define ALL(X) X.begin(),X.end()
#define endl '\n'
using namespace std;
typedef pair<int,int> pii;

mt19937 mt_rand;
int rnd(int l,int r)
{
	return mt_rand()%(r-l+1)+l;
}
/////////////////////////////////////////////////////
const int mod = 1e9+7;
int jie[1000020];
int qp(int a,int b)
{
	int ans=1;
	while(b)
	{
		if(b&1)ans=ans*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return ans%mod;
}
int inv(int x)
{
	return qp(x,mod-2);
}
int C(int n,int m)
{
	return jie[n]*inv(jie[n-m])%mod*inv(jie[m])%mod;
}
int solve()
{
	jie[0]=1;
	for(int i=1;i<=1e6;i++)jie[i]=jie[i-1]*i%mod;
	
	int n;
	cin>>n;
	unordered_map<int,int>mp;
	for(int i=0,x;i<n;i++)cin>>x,mp[x]++;
	int cnt=0;
	for(auto i:mp)cnt+=i.Y%2;
	if(cnt>1)return 0;
	int ans=1;
	if(cnt)for(auto &i:mp)if(i.Y%2)
	{
		ans=ans*i.Y%mod;
		i.Y--;
		break;
    }
    ans=ans*jie[n/2]%mod;
    for(auto i:mp)
    {
    	if(!i.Y)continue;
		ans=ans*C(i.Y,i.Y/2)%mod*jie[i.Y/2]%mod;
	}
	return ans%mod;
}
//////////////////////////////////////////////////////////
string tostring(int x,int sz=4)
{
	string s;
	while(x)
	{
		s+=(x%10)+'0';
		x/=10;
	}
	while(s.size()<sz)s+="0";
	reverse(ALL(s));
	return s;
}
signed main(int argc, char* argv[])
{
	cout<<solve()<<endl;
	return 0;
}

