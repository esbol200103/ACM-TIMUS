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
	
	dd a;
	
	vector <dd> v;
	
	while (cin >> a){
		
		 v.push_back(a);
		
	}
	
	for (int i = v.sz - 1; i >= 0; --i){
		 
		 cout.precision(4);
		 cout << fixed << sqrt(v[i]) << endl;
		 
	}
	
	return 0;
	
}
