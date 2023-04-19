//New approach for series.
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    if(num%2==0) sum=-num/2;
    //(1-2)+(3-4)+(5-6).....((n-1)-n)..-n/2
    else sum=-num/2+num;
    //(1-2)+(3-4)....7.....-n/2+n
    cout<<sum;
    return 0;
}
//1-2+3-4+5-6....upto..n
//Sample Input: 5
// Output: 3