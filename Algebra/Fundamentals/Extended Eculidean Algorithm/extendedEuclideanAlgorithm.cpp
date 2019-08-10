#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;
#define debugArray(x,n) for(ll i=0;i<n;i++) cout<<#x<<"["<<i<<"] => "<<x[i]<<endl;

typedef long long ll;
typedef long double ld;
using namespace std;


/*
	Teniendo dos numeros a y b;
	sea d el minimo comun multplo de a y b entonces es posible encontrar dos numeros enteros tal
	que a*x+b*y = d

*/

ll gcdEuclidesExtended(ll a, ll b, ll &x, ll &y){
	if(a ==0){
		x = 0;
		y = 1;
		return b;
	}
	ll x1,y1;
	ll d = gcdEuclidesExtended(b%a,a,x1,y1);
	x = y1 -(b/a)*x1;
	y = x1;
	return d;
}