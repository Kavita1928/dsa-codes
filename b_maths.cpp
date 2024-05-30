#include<bits/stdc++.h>

using namespace std;


int main()
{
   // chechk reverse

    int n,digit,sum=0;
    cin>>  n;
 /*   int num=n;

    while(n!=0)
    {
        digit = n%10;
        n=n/10;
        sum = sum*10 + digit;

    }

    cout<< sum <<endl ;


    if(sum == num)
        cout<< "it's pallindrome " <<endl;

    else
        cout<< "not a pallindrome "<< endl;


// Armstrong
    int A=num;
    long summ=0,dig ;

    while(A!=0)
    {
        dig = A%10;
        A=A/10;
        summ = summ + dig*dig*dig;
    }
     cout<< num << endl;
     if(summ == num)
        cout<< "it's Armstrong " <<endl;

     else
        cout<< "not a Armstrong "<< endl;
*/


/*
// print all divisors

// O(n)
int n;
cin>>  n;

for(int i=1;i<=n;i++)
{
    if(n%i == 0)
        cout<< i << " ";
}

//  for less time

   vector<int> v;
for(int i=1;i<=sqrt(n);i++)                // O(sqrt(n)
{
    if(n%i == 0)
     {
        v.emplace_back(i);
         if(n/i != i)
          v.emplace_back(n/i);
     }
}
        // sorting takes O(n logn): n is number of factors
     sort(v.begin(),v.end());
// O(number of factors)
for(auto i : v)
     {
         cout<< i << " ";
     }


// prime number
int Count=0;
for(int i=1;i<=sqrt(n);i++)
{
    if(n%i ==0){
        Count++;
        if(n/i != i)
        Count++;
    }

}
if(Count == 2)
cout<< "prime";

else
    cout<< "not prime";
*/

// hcf /gcd
int n2,gcd=0 ;
cin>> n2;
 for(int i=min(n,n2); i !=0 ;i--)
 {
     if(n%i ==0 && n2 % i == 0)
     {
        gcd=i;
        break;
     }
 }
cout<< gcd<< endl;

// euclidean algo

// gcd(a,b)= gcd(a-b,b)  : a>b
// keep on doing this till one become zero and other one is gcd and a > b in each step
// so  we do (a%b,b) or (greater % smaller , smaller)
int a=n,b=n2;
while(a>0 && b>0)
{
    if(a>b)
        a=a%b;
    else
        b=b%a;
}

if(a==0)
    cout<< b<< endl;
else
    cout<< a<< endl;
    return 0;
}

