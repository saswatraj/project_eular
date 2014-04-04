#include<iostream>
#include<cmath>
using namespace std;

bool arr[1000000];

int main()
{
		const int limit = 1000000;
		for(int i=0;i<limit;i++)
				arr[i] = true;
		for(int i=2;i<sqrt(limit);i++)
				if(arr[i])
						for(int j=i*i;j<limit;j+=i)
								arr[j] = false;
		arr[0] = false;
		arr[1] = false;
		int ans = 2;
		for(int i=2;i<limit;i++)
				if(arr[i])
				{
						//check if 2 or 5 in number
						int copy=i;
						int multiplier = 1;
						int reject_flag = 0;
						int total_digits = 0;
						while(copy!=0)
						{
								int digit = copy % 10;
								copy = copy /10;
								if((digit == 2)||(digit == 5))
								reject_flag = 1;
								multiplier*=10;
								total_digits++;
						}
						multiplier/=10;
						copy = i;
						int primes = 0;
						int rotations = 0;
						//get all rotations of the number
						while(rotations != total_digits)
						{
								int digit = copy % 10;
								copy = copy / 10;
								copy += (multiplier*digit);
								rotations++;
								if(reject_flag==1){
										arr[copy] = false;
										continue;
								}
								if(arr[copy])
								primes++;
								//cout << copy << endl;
						}
						//cout << "-----------------" << endl;
						if(primes == total_digits){
								ans++;
								cout << i << endl;
						}
				}
		cout << ans << endl;
		return 0;
}
								
