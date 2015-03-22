
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

int main() 
{
	int n, m;
	cin >> n >> m;
	int lounge [n];
	int p=1;
	for( int k=0; k<m; k++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if( c == 2) 
		{
			if ( lounge[a] == -1)
			{ 
				p =0 ;
				break;
			}
			if ( lounge[b] == -1)
			{ 
				p =0 ;
				break;
			}			 
			lounge[a] = 1;
			lounge[b] = 1;
		}
		if( c == 0 )
		{			
			if ( lounge[a] == 1)
			{ 
				p =0 ;
				break;
			}
			if ( lounge[b] == 1)
			{ 
				p =0 ;
				break;
			}	
			lounge[a] = -1; 
			lounge[b] = -1;
		}
		if ( c == 1 )
		{
			if ( lounge[a] == -1)
			{ 
				if ( lounge[b] == -1)
				{ 
					p =0 ;
					break;
				}
				lounge[b] = 1;
			}
			else if ( lounge[a] == 1)
			{ 
				if ( lounge[b] == 1)
				{ 
					p =0 ;
					break;
				}
				lounge[b] = -1;
			}
			else if ( lounge[b] == -1)
			{ 
				lounge[a] = 1;
			}
			else if ( lounge[b] == 1)
			{ 
				lounge[a] = -1;
			}
			else
			{
				lounge[a] = 1;
				lounge[b] = -1;
			}
		}
	}
	if ( p == 0 )
	{
		cout << "impossible" << endl;
	}
	else 
	{
		int count = 0;
		for (int i=0; i<n; i++)
		{
			if ( lounge[i] == 1)
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}