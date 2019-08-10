#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;


/*
	a>b;
	complexity O(log(min(a,b)))
*/

ll gcdRecursive(ll a, ll b);
ll gcdIterative(ll a, ll b);
ll lcm(ll a, ll b);

ll gcdRecursive(ll a, ll b){
	return b?gcdRecursive(b,a%b):a;
}

ll gcdIterative(ll a, ll b){
	while(b){
		a%=b;
		swap(a,b);
	}
	return a;
}

ll lcm(ll a, ll b){
	return a/(gcdIterative(a,b))*b;
}