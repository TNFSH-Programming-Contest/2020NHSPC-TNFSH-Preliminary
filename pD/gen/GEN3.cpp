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

mt19937 mt_rand;

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
signed main(int argc, char* argv[])
{
	const int seed=atoi(argv[1]);
	mt_rand.seed(seed);
	int T=atoi(argv[2]);
	//generate data
	string sub="03_";
	bool ON=0;
	if(0<=T && T<=8)
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
	if(9<=T && T<=9)
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

