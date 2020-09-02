#include<bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define lson (root<<1)
#define rson (root<<1|1)
#define ALL(X) X.begin(),X.end()
#define endl '\n'
using namespace std;
typedef pair<int,int> pii;

const int seed=chrono::high_resolution_clock::now().time_since_epoch().count();;
mt19937 mt_rand(seed);

int rnd(int l,int r)
{
	return mt_rand()%(r-l+1)+l;
}
int rnd_(int x)
{
	return mt_rand()%x;
}
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
int a[1000020];
signed main()
{
	//generate data
	bool ON=1;
	string sub="04_";
	for(int T=0;T<=4;T++)
	{
		if(ON)
		{
			string name=sub+tostring(T)+".in";
			freopen(name.c_str(),"w",stdout);
		}
		int n=rnd(19e4,20e4),mav=1e9;
		cout<<n<<endl;
		for(int i=0,j=n-1;i<=j;i++,j--)
		{
			a[i]=a[j]=rnd(1,mav);
		}
		random_shuffle(a,a+n,rnd_);
		for(int i=0;i<n;i++)cout<<a[i]<<' ';
		cout<<endl;
	}
	for(int T=5;T<=7;T++)
	{
		if(ON)
		{
			string name=sub+tostring(T)+".in";
			freopen(name.c_str(),"w",stdout);
		}
		int n=rnd(19e4,20e4),mav=rnd(1000,3000);
		cout<<n<<endl;
		for(int i=0,j=n-1;i<=j;i++,j--)
		{
			a[i]=a[j]=rnd(1,mav);
		}
		random_shuffle(a,a+n,rnd_);
		for(int i=0;i<n;i++)cout<<a[i]<<' ';
		cout<<endl;
	}
	for(int T=8;T<=9;T++)
	{
		if(ON)
		{
			string name=sub+tostring(T)+".in";
			freopen(name.c_str(),"w",stdout);
		}
		int n=rnd(19e4,20e4),mav=rnd(10,300);
		cout<<n<<endl;
		for(int i=0,j=n-1;i<=j;i++,j--)
		{
			a[i]=a[j]=rnd(1,mav);
		}
		random_shuffle(a,a+n,rnd_);
		for(int i=0;i<n;i++)cout<<a[i]<<' ';
		cout<<endl;
	}
	return 0;
}

