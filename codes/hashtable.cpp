#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int MAXN = 111;

int n, m, k;
bool is_ignored[MAXN];
bool is_tracked[MAXN];

void solve() {
	cin >> n >> m >> k;
	memset(is_ignored, 0, sizeof(is_ignored));
	memset(is_tracked, 0, sizeof(is_tracked));
	for (int i = 0; i < m; i++) {
		int a; cin >> a;
		is_ignored[a] = true;
	}
	for (int i = 0; i < k; i++) {
		int a; cin >> a;
		is_tracked[a] = true;
	}
	int answer_1 = 0;
	int answer_2 = 0;
	for (int a = 1; a <= n; a++) {
		answer_1 += (int)( is_ignored[a] &&  is_tracked[a]);
		answer_2 += (int)(!is_ignored[a] && !is_tracked[a]);
	}
	cout << answer_1 << " " << answer_2 << "\n";
}

int main() {
	int t; scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		solve();
	}
	return 0;
}
