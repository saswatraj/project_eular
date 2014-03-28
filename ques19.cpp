#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	int ans = 0;
	for(int year=1901;year<2001;year++)
		for(int month=0;month<12;month++)
		{
			tm time_in = { 0,0,0,1,month,year - 1900};
			time_t time_temp = mktime(&time_in);
			tm const *time_out = localtime(&time_temp);
			if(time_out->tm_wday == 0)
				ans++;
		}
	cout << ans << endl;
	return 0;
}
