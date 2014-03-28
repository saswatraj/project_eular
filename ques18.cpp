#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
	ifstream infile("input.txt");
	int matrix[15][15];
	for(int i=0;i<15;i++)
		for(int j=0;j<15;j++)
			matrix[i][j] = 0;
	if(infile.is_open())
	{
		string line;
		int i = 0,j = 0;
		while(getline(infile,line))
		{
			j = 0;
			const char* tmp = line.c_str();
			char *temp =(char *) malloc(sizeof(char)*line.size());
			strcpy(temp,tmp);
			char *p = strtok(temp," ");
			while(p){
				matrix[i][j] = atoi(p);
				p = strtok(NULL," ");
				j++;
			}
			i++;
		}
		//finished reading the inputs
		/*for(int l=0;l<15;l++){
			for(int m=0;m<15;m++)
				cout<<matrix[l][m]<<" ";
			cout << endl;
		}*/
		infile.close();
		//start from bottom
		for(int l=13;l>=0;l--)
			for(int m=0;m<=l;m++)
				matrix[l][m] += max(matrix[l+1][m],matrix[l+1][m+1]);
		cout << matrix[0][0] << endl;
	}
	return 0;
}
