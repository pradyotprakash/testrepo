#include <iostream>
#include <vector>
#include <vector>
using namespace std;

long recurse(int n, string s){
  string p1,p2;
  for(int i=0;i<s.length()-1;++i){
    if(s[i]=='1' && s[i+1]=='1'){p1+='0';}
    else if(s[i]=='1' && s[i+1]=='0'){p1+='1';++i}
    else if(s[i]=='0' && s[i+1]=='1'){}
  }
}

int main(){
  int n;
  string s;
  while(cin>>n){
    cin>>s;
    cout<<"No. of occurrences : "<<recurse(n,s)<<endl;  
  }
}
