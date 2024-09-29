#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

void solve(void);

int main(void)
{
	int t(1);
	//std::cin >> t;
	while (t--)
	{
		solve();
		//std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
	const double PI(3.141592653589);
    int n, k;
	std::cin >> n >> k;
	std::vector<double> flag;
	for (int i(0); i < n; ++i)
	{
		double x, y, r;
		std::cin >> x >> y >> r;
		double len(sqrt(x * x + y * y));
		if (len >= r)
		{
			flag.push_back(0);
		}
		else
		{
			len = r - len;
			flag.push_back(len * PI * r * r);
		}
	}
	std::sort(flag.begin(), flag.end());
	double ans(0);
	for (int i(0); i < flag.size() - k; ++i)
	{
		ans += flag[i];
	}
	std::cout << std::fixed << std::setprecision(10) << ans << std::endl;
}