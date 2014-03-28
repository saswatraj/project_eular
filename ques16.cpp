#include<iostream>
#include<queue>

using namespace std;

int main()
{
	//start with 15
	int power = 15;
	queue<int> number;
	number.push(8);
	number.push(6);
	number.push(7);
	number.push(2);
	number.push(3);
	while(power!=1000){
		queue<int> next;
		int carry = 0;
		int digit;
		while(!number.empty()){
			digit = number.front();
			digit = digit * 2;
			number.pop();
			digit += carry;
			//cout << digit%10 <<endl;
			next.push(digit%10);
			carry = digit/10;
		}
		if(carry!=0)
			next.push(carry);
		power++;
		number = next;
	}
	int ans = 0;
	while(!number.empty()){
		int tmp = number.front();
		//cout << tmp;
		number.pop();
		ans += tmp;
	}
	cout << endl << ans << endl;
	return 0;
}



