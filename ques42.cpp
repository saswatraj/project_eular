//format the file using format.cpp from ques22
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;


int getVal(string s)
{
		int val = 0;
		for(int i=0;i<s.size();i++)
				val += ( s[i] - 'A' + 1 );
		return val;
}

int main()
{
		int arr[400]={0};
		int start = 1;
		int n = 1;
		while(start < 400)
		{
				start = 0.5 * n * ( n + 1 );
				arr[start] = 1;
				n++;
		}
		ifstream infile("words1.txt");
		if(infile.is_open())
		{
				string s;
				int ans = 0;
				while(getline(infile,s))
				{
						int val = getVal(s);
						if(arr[val] == 1)
								ans++;
				}
				cout << ans << endl;
				infile.close();
		}
		return 0;
}
