#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    string s="aaaabbbbcccdde";
    int count=0,flag=0;
    map<char,int>m;
    for(int i=0;i<s.size();i++)
    m[s[i]]++;
    for(auto i:m){
        if(i.second%2==0)
        count+=i.second;
        else{
            count+=i.second-1;
            flag=1;
        }
    }
    cout<<count+flag;
    return 0;
}