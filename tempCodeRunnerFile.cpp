##include<bits/stdc++.h>

using namespace std;
int mian (){
	int n ; cin >> n;
	int a[]={0,3,4,2,7,2};
	set<int> se;
	for(int i = 0 ; i < n ; i++){
		se.insert(i);
	}
	cout << se.size() ;
}