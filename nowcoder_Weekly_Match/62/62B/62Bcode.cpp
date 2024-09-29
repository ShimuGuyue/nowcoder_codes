#include <iostream>

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
    int64_t n, x;
	std::cin >> n >> x;
	int64_t ans(0);
	while (n--)
	{
		int a;
		std::cin >> a;
		if (x == 0)
			continue;
		if (x > 0)
			x -= a;
		else if (x < 0)
			x += a;
		ans += a;
	}
	std::cout << ans << std::endl;
}