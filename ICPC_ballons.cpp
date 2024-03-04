#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int n;
    cin>>n;
    long long int sum=0;
    for(int i=2;i<n;i=i+2){
        sum = sum+pow((x*1.00),(i*1.00));

    }
    cout<<sum;
    return 0;
}
