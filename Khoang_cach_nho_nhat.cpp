#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	while(x--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int k=1000000;
		for(int i=0;i<n;i++){
			int l=i;
			int r=l+1;
			k=min(k,abs(a[r]-a[l]));
		}
		cout<<k<<endl;
	}
}

