#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin>>n;

	string arr[n];
	unordered_map<string, int> mp;

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	for(int i = 0; i < n; i++){
		auto it = mp.find(arr[i]);
		if(it == mp.end()){
			mp.insert({ arr[i], 0 });
			cout<<"OK"<<endl;
		} else {
			it->second += 1;
			mp.insert({ arr[i]+to_string(it->second), 0 });
			cout<<arr[i]+to_string(it->second)<<endl;
		}
	}



	return 0;
}