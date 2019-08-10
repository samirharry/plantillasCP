#include <bits/stdc++.h>

#define debug(x) cout<<#x<<" => "<<x<<endl;

#define debugArray(x,n) for(ll i = 0 ; i < n ; i++) cout<<#x<<"["<<i<<"]"" => "<<x[i]<<endl;

using namespace std;

typedef long long ll;



ll elevaON (ll a,ll n){
	ll answer = 1LL;
	for(ll i=1LL;i<=n;i++){
		answer = a*answer;
	}
	return answer;
}

ll binaryExponentiationRecursive( ll base, ll expo){
	if( expo == 0){
		return 1;
	}
	ll valAct = binaryExponentiationRecursive(base,expo/2);
	if(expo %2 == 0){
		return valAct*valAct;
	}else{
		return valAct*valAct*base;
	}
}

ll binaryExponentiationIterative(ll base,ll expo){
	ll answer = 1LL;
	while( expo>0){
		if(expo & 1){
			answer = answer*base;
		}
		expo >>= 1;
	}
	return answer;
}

int main(){
/*Escribir codigo aqui*/
	ll num,pot;
	cin>>num;
	cin>>pot;
	cout<<num<<" elevado a la "<<pot<<"\n";
	cout<<"es "<<binaryExponentiationIterative(num,pot)<<"\n";
	return 0;
}