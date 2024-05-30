#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }

    // brutt method
    int hash[100]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]] += 1;
    }

    int times;
    cin>> times;
    while(times--)
    {
        int num;
        cin>> num;
        cout<<"number of times "<< num <<" appear is :" << hash[num]<<endl;
    }

    return 0;
}
