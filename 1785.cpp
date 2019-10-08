#include <bits/stdc++.h>

#define ll long long
#define dd double
#define mp make_pair
#define sz size()
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	if (n >= 1000) cout << "legion";
	else if (n >= 500) cout << "zounds";
	else if (n >= 250) cout << "swarm";
	else if (n >= 100) cout << "throng";
	else if (n >= 50) cout << "horde";
	else if (n >= 20) cout << "lots";
	else if (n >= 10) cout << "pack";
	else if (n >= 5) cout << "several";
	else cout << "few";
	
	return 0;
	
}
