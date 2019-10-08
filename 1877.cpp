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
	
	string a, b;
	
	cin >> a >> b;
	
	int aNum = 0, bNum = 0, base = 1000;
	
	for (int i = 0; i < 4; ++i){
		 
		 aNum += base * (int(a[i]) - 48);
		 bNum += base * (int(b[i]) - 48);
		 base /= 10;
		 
	}
	
	for (int i = 0; i < 100000; ++i){
		 
		 if (i % 2 == 0 && i == aNum) {
		 	 
		 	 cout << "yes";
		 	 return 0;
		 	 
		 }
		 
		 if (i % 2 == 1 && i == bNum) {
		 	 
		 	 cout << "yes";
		 	 return 0;
		 	 
		 }
		 
	}
	
	cout << "no";
	
	return 0;
	
}
