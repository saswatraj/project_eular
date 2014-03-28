#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdlib>

using namespace std;

int main()
{
    int digs[60]={0};
    int pos = 60;
    string num[100];
    ifstream infile("input.txt");
    if(infile.is_open()){
        string line;
        int i=0;
        while(getline(infile,line)){
            num[i] = line;
            i+=1;
        }
        //
        //    for(int i=0;i<100;i++)
        //        cout<<num[i]<<endl;
        //

        int sum = 0;
        int carry = 0;
        //add the digits
        for(int i=49;i>=0;i--){
                sum = 0;
            for(int j=0;j<100;j++){
                sum = sum + (num[j][i]-'0');
            }
                sum += carry;
                digs[pos] = sum%10;
                pos --;
                carry = sum/10;
                if(i==0){
                    sum = sum/10;
                    while(sum!=0){
                        digs[pos] = sum%10;
                        pos -- ;
                        sum = sum /10;
                    }
                }
        }
        //print the digits
        bool is_nz = false;
        int ct = 0;
        for(int i=0;i<60;i++)
        {
            if(digs[i]!=0)
                is_nz = true;
            if(is_nz){
                ct++;
                cout<<digs[i];
                if(ct==10)
                    break;
            }
        }
        infile.close();
    }
    return 0;
}
