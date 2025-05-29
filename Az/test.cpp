#include<bits/stdc++.h>
using namespace std;

#define int long long
int mod = 1e9 + 7;

int binpow(int a, int b) {
	if(b == 0) return 1;
	if(b % 2 == 1) return (a * binpow(a, b-1)) % mod;
	else {
		int x = binpow(a, b/2);
		return (x * x) % mod;
	}
}

int inverse(int x) {    // O(log(mod))
	return binpow(x, mod-2);
}

int fact[1000100];
int precompute() {
	fact[0] = 1;
	for(int i=0; i<=1000000; i++) {
		fact[i] = (fact[i-1] * i) % mod;
	}
	return 0;
}

int ncr_fact(int n, int r) {    // O(log(mod))
	int num = fact[n];
	int den = (fact[n-r] * fact[r]) % mod;
	return (num * inverse(den)) % mod;
}

signed main() {
	precompute();
	int q;
	cin >> q;

	while(q--) {
		int n, r;
		cin >> n >> r;
		cout << ncr_fact(n, r) << '\n';
	}
	
	return 0;
}

