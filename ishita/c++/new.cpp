#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
int n; 
    cin>>n; 
  vector<int>v;
  
  for(int i=0;i<n;i++){
  int temp;
  cin>>temp;
  v.push_back(temp);
  }
  vector<int>::iterator it;
  it=v.begin();
  for(it=v.begin;it!=v.end();++it){
  cout<<*it;}
  return 0;
}