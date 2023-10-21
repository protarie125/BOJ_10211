#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

constexpr auto Inf = int{ 987'654'321 };

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		int n;
		cin >> n;

		vi dp(n, -Inf);
		for (auto i = 0; i < n; ++i) {
			if (0 == i) {
				cin >> dp[i];
				continue;
			}

			int x;
			cin >> x;

			dp[i] = max(dp[i - 1] + x, x);
		}

		cout << *max_element(dp.begin(), dp.end()) << '\n';
	}

	return 0;
}