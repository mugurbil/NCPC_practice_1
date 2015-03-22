
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

// calculates the average of two numbers
double avg (int a, int b)
{	
	double c = 0; 
	for (int k=a; k<b+1; k++)
	{
		c += k;
	}
	c = c/ double(b-a+1);
	return c;
}
// determines who's probability of winning is higher
// they both have two die
// Gunnar's die have sides a1 to b1 and a2 to b2
// Emma's die have sides c1 to d1 and c2 to d2
int main() 
{
	int a1,b1,a2,b2,c1,d1,c2,d2;
	cin >> a1 >> b1 >> a2 >> b2;
	cin >> c1 >> d1 >> c2 >> d2;
	double ab = avg(a1,b1)+avg(a2,b2);
	double cd = avg(c1,d1)+avg(c2,d2);
	if( ab == cd) cout << "Tie" << endl;
	else if( ab > cd) cout << "Gunnar" << endl;
	else if( cd > ab) cout << "Emma" << endl;
	return 0;
}
