
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

const int INF = (int)1E10;
#define MAXN 100005

// check if the train data is correct
// n = number of stops
// c = passenger capacity of the train
// N = number of passengers on the train
// p = boolean to state if it is possible
// l = number of passengers leaving the train
// e = number of passengers entering the train
// s = number of passengers who stayed in the station
int main() 
{
    int n;
    unsigned long c;
	cin >> c >> n;
    unsigned long N = 0;
    int p = 1;
    for (int k=0; k<n; k++)
    {
        unsigned long l,e,s;
        cin >> l >> e >> s;
        if ( l > N )
        {
            p = 0;
            break;
        }
        if ( (N+e-l) > c )
        {
            p = 0;
            break;
        }
        N = N+e-l;
        if ( s > 0 )
        {
            if ( c != N )
            {
                p = 0;
                break;
            }
        }
        if ( k==(n-1))
        {
            if ( s != 0 ) p=0;
            if ( e != 0 ) p=0;
            if ( N != 0 ) p=0;
        }
    }
    if ( p == 0 ) cout << "impossible" << endl;
    else cout << "possible" << endl;
	return 0;
}
