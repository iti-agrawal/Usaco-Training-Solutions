/*
ID: itidsta1
PROG: ride
LANG: C++                 
*/

#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits.h>

using namespace std;

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define vi vector<int>
#define pb push_back
#define ll long long int
#define gi(x) scanf("%d",&x)
#define ii pair<int,int>
#define CLEAR(x,val) memset(x,val,sizeof(x))
#define SZ(v) (v).size()
#define MOD 1000000009

//convert string to final number
int fun(string str)
{
	int ret=1,n=str.length();
	
	rep(i,0,n)
	{
		ret = ( ret * (1+str[i]-'A') ) % 47 ;
	}
	
	return ret;
}

ofstream fout ("ride.out");
ifstream fin ("ride.in");

int main() 
{
    string a, b;
    fin >> a >> b;
    fout << ((fun(a)==fun(b)) ? "GO" : "STAY")<< endl;
    return 0;
}
