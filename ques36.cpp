#include<iostream>
#include<vector>
using namespace std;

bool isPalindromeb2(int n,int base)
{
		int copy = n;
		int rev = 0;
		while(copy!=0)
		{
				int digit = copy % base;
				rev = rev*base + digit;
				copy = copy/base;
		}
		return  rev == n;
}


int main()
{
		const int limit = 1000000;
		unsigned long long ans = 0;
		for(int i=1;i<limit;i++)
		{
				if(isPalindromeb2(i,10) && isPalindromeb2(i,2))
				{
						//cout << i << endl;
						ans+=i;
				}
		}
		cout << ans << endl;
		return 0;
}
