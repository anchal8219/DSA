//ladchat supremacy
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000007
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    ll ans=1;
	    for(ll i=2;i<n;i+=2){
	        ll ct=0;
	        ll x=s[i-1]-'0';
	        ll y=s[i-2]-'0';
	        ll z=s[i]-'0';
	        //cout<<ct<<" ";
	        if((ll)(x&y)==z)ct++;
	        if((ll)(x^y)==z)ct++;
	        if((ll)(x|y)==z)ct++;
	        ans*=ct;
	        ans%=MAX;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
