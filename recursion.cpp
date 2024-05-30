#include<bits/stdc++.h>
using namespace std;

void print(int n,int i)
{
        if(i>n)
            return;

        cout<< " kavita ";
        print(n,i+1);
}

void p_number(int i,int n)
{
    if(i>n)
        return;
    cout<< i << " ";
    p_number(i+1,n);
}

// last one is present first here
void printnum(int i,int n)
{
    if(i<1)
        return;
    printnum(i-1,n);
    cout<< i << " ";
}

void parametrised(int i,int sum)
{
    if(i<1)
    {
        cout<< "parameetrised sum is :" <<sum<< endl;
        return ;
    }

    parametrised(i-1,sum+i);
}

int functional(int i)
{
    if(i==0)
        return 0;
    else
        return i+functional(i-1);
}


int factorial(int i)
{
    if(i==1)
        return 1;
    return i*factorial(i-1);
}


void Reverse(int arr[],int i, int n)
{
    if(i>=n/2)
        return;

    swap(arr[i],arr[n-1-i]);
    Reverse(arr,i+1,n);

}

bool s_rev(string &s,int i)
{

    if(i>=s.size()/2)
        return true;
   if(s[i] != s[s.size()-1-i]);
    return false ;

   return s_rev(s,i+1);

}

int fibonacci(int arr[],int n)
{
    if(n<=1)
        return n;

  return  fibonacci(arr,n-1)+fibonacci(arr,n-2);

}

int main()
{
   /* int n,sum=0;
    cout<< "enter the number of times name to be printed "  ;
    cin>> n;
    print(n,1);
    cout<< endl;
    p_number(1,n);
     cout<< endl;
    // backtrack
    printnum(n,n);
    cout<< endl;
    parametrised(n,sum);
  int summ=  functional(n);
     cout<< "functional sum is :"<<summ << endl;

     // print factorial of n
 cout <<  factorial(n)<< endl;

//L4

// reverse an array
int n;
cout<< "enter size of array :";
cin>> n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>> arr[i];
 }

 Reverse(arr,0,n);

for(int i=0;i<n;i++)
 {
     cout<< arr[i]<< " "<<endl;
 }


// check pallindrome of string
string s;
cout<< "Enter the string :";
getline(cin,s);


cout<< s <<endl;
cout<< s_rev(s,0);

*/

// L5
// multiple recursion call

// fibonacci
int n;cin>> n;
int arr[n];

arr[0]=0;arr[1]=1;
cout<<fibonacci(arr,n);



 return 0;
}
