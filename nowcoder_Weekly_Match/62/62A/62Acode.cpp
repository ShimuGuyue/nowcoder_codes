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
	std::string s;
	std::cin >> s;
	std::cout << s[1] << s[0] << s[2] << s[3] << s[4] << std::endl;
}