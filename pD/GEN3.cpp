#include<bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define lson (root<<1)
#define rson (root<<1|1)
#define ALL(X) X.begin(),X.end()
#define CLR(x,y) memset(x,y,sizeof(x))
#define endl '\n'
using namespace std;
typedef pair<int,int> pii;

const int seed=chrono::high_resolution_clock::now().time_since_epoch().count();;
mt19937 mt_rand(seed);

int rnd(int l,int r)
{
	return mt_rand()%(r-l+1)+l;
}
signed rnd_(int x)
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
int b[1000020];
signed main()
{
	//generate data
	string sub="03_";
	bool ON=1;
	for(int T=0;T<=8;T++)
	{
		if(ON)
		{
			string name=sub+tostring(T)+".in";
			freopen(name.c_str(),"w",stdout);
		}
		int n=rnd(19e4,20e4),mav=1e6;
		//int n=rnd(9,10),mav=1e6;
		cout<<n<<endl;
		for(int i=1;i<=mav;i++)b[i]=i;
		random_shuffle(b+1,b+mav+1,rnd_);
		int p=1;
		for(int i=0;i<n;i+=2)a[i]=a[i+1]=b[p++];
		if(n%2)a[n-1]=b[p++];
		random_shuffle(a,a+n,rnd_);
		for(int i=0;i<n;i++)cout<<a[i]<<' ';
		cout<<endl;
	}
	for(int T=9;T<=9;T++)
	{
		if(ON)
		{
			string name=sub+tostring(T)+".in";
			freopen(name.c_str(),"w",stdout);
		}
		int n=rnd(19e4,20e4),mav=1e6;
		//int n=rnd(9,10),mav=1e6;
		cout<<n<<endl;
		for(int i=1;i<=mav;i++)b[i]=i;
		random_shuffle(b+1,b+mav+1,rnd_);
		int p=1;
		a[0]=b[p++];
		a[1]=b[p++];
		for(int i=2;i<n;i+=2)a[i]=a[i+1]=b[p++];
		if(n%2)a[n-1]=b[p++];
		random_shuffle(a,a+n,rnd_);
		for(int i=0;i<n;i++)cout<<a[i]<<' ';
		cout<<endl;
	}
	return 0;
}

