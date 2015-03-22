#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <complex>
#include <ctime>
#include <cassert>

using namespace std;

typedef long long ll;
typedef vector<int> VI;
typedef pair<int, int> PII;

#define REP(i,s,t) for(int i=(s);i<(t);i++)
#define FILL(x,v) memset(x,v,sizeof(x))

const int INF = (int)1E9;
#define MAXN 100005

// sums the digits of the numbers up to d
long sumIt(long d)
{
	long sum = 0;
	long a = d/10;
	long b = d%10;
	long c = 0;
	sum += a*45 + b*(b+1)/2;
	for(int i=1;i<15;i++)
	{	
		long k = 1;
		for(int j=0;j<i;j++) k=k*10;
		b = a%10;
		a = a/10;
		c = d%k;
		sum += a*45*k;
		sum += b*(b-1)/2*k + b*(c+1);
	}
	return sum;
}
// sums the digits of numbers from a to b
int main() 
{
	int n;
	cin >> n;
	for( int j=0;j<n;j++)
	{
		long a,b;
		cin >> a >> b;
		if( a>0) a--;
		cout << sumIt(b) - sumIt(a) << endl;
	}
	return 0;
}