#include <iostream>
#include <cmath>

void solve(void);

int main(void)
{
	int t(1);
	std::cin >> t;
	while (t--)
	{
		solve();
		// std::cout << std::endl;
	}
	return 0;
}

void solve(void)
{
    int s;
    std::cin >> s;
    double flag(sqrt(s));
    if (flag == static_cast<int>(flag))
        std::cout << 0 << std::endl;
    else
        std::cout << 3 << std::endl;
}