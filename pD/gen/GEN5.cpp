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

mt19937 mt_rand;

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
signed main(int argc, char* argv[])
{
	const int seed=atoi(argv[1]);
	mt_rand.seed(seed);
	int T=atoi(argv[2]);
	//generate data
	string sub="05_";
	bool ON=0;
	if(0<=T && T<=3)
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
	if(4<=T && T<=6)
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
	if(7<=T && T<=8)
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
		for(int i=0;i<20;i++)
			a[rnd(0,n-1)]=rnd(1,mav);
		for(int i=0;i<n;i++)cout<<a[i]<<' ';
		cout<<endl;
	}
	if(9<=T && T<=10)
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

