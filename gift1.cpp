/*
ID: itidsta1
PROG: gift1
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
#include <string.h>
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

vector <string> names;
vi final;
int n;

int index(string name)
{
	rep(i,0,n)
	{
		if(names[i]==name)
			return i;
	}
}

ofstream fout ("gift1.out");
ifstream fin ("gift1.in");

int main() 
{
   	fin>>n;	//total number of members
   	
   	string name;
   	
   	//read name of all members and initialize final gain or loss as zero
   	rep(i,0,n)
   	{
   		fin>>name;
   		names.pb(name);
   		final.pb(0);
   	}
   	
   	int initial_money,num_frnds;
   	
   	rep(i,0,n)
   	{
   		fin>>name;
   		fin>>initial_money>>num_frnds;
   		
   		int to_each_frnd;
   		
   		if(num_frnds>0)
   		{
   			to_each_frnd = initial_money/num_frnds;
   			int i= index(name);					//get the reference index to the name of giver
   			final[i] -= to_each_frnd * num_frnds;	//subtract the amount given to frnds
   		}
   		
   		rep(j,0,num_frnds)
   		{
   			fin>>name;
   			final[index(name)] += to_each_frnd;	//add the amount recieved
   		}
   	}
   	
   	rep(i,0,n)
   	{
   		fout<<names[i]<<" "<<final[i]<<endl;
   	}
   	
   	
    	return 0;
}
