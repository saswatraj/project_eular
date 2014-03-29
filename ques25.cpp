#include<iostream>
#include<vector>
using namespace std;

vector<int> add(vector<int> num1,vector<int> num2)
{
	vector<int> num3;
	int carry = 0,sum=0,d1,d2;
	while(!((num1.size()==0)&&(num2.size()==0)))
	{
		if(num1.size()>0){
			d1 = num1.back();
			num1.pop_back();
		}
		else
			d1 = 0;
		if(num2.size()>0){
			d2 = num2.back();
			num2.pop_back();
		}
		else
			d2 = 0;
		sum = d1 + d2 + carry;
		num3.insert(num3.begin(),sum%10);
		carry = sum/10;
	}
	while(carry!=0)
	{
		num3.insert(num3.begin(),carry%10);
		carry = carry / 10;
	}
	return num3;
}

int main()
{
	vector<int> v1;
	v1.push_back(1);
	vector<int> v2;
	v2.push_back(1);
	vector<int> v3;
	int count = 2;
	while(v3.size()!=1000)
	{
		v3 = add(v1,v2);
		count++;
		v1 = v2;
		v2 = v3;
	}
	cout << count << endl;
	return 0;
}
