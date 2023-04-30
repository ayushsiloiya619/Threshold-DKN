#iinclude<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<char(i + 'A');
  }
  cout<<endl;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<char(j+'A');
    }
    for(int j=i-1;j<=nst;j++){
      cout<<char(j+"A");
    }
    nst=nst+2;
    int k=1;
    for(int j=i-1;j<=n;j++){
      cout<<char(j+"A");
    }
    cout<<endl;
  }
  return 0;
}