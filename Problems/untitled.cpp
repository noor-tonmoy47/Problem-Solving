#include<bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ara[n];
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> ara[i];
		}
		bool flag = false;
		for (int i = 1; i < n; ++i)
		{
			/* code */
			if(ara[i] - ara[i-1] > 3){
				flag = true;
				break;
			}
		}
		if(flag) cout << "NO" <<"\n";
		else cout << "YES" <<"\n";
	}
}