#include <iostream>

using namespace std;

int main()
{
	int a[100][100], n, ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			if(a[i][j] == 1) ans++;
		}
	}
	cout << ans/2;
    return 0;
}
