#include<bits/stdc++.h>
using namespace std;

// selction sort
// selct minimum and swap it
void selectionsort(int A[],int n)
{
    for(int i=0;i<n-1;i++)          // run for  n times
    {
        int miin=i;
        for(int j=i;j<n;j++)        // run for n,n-1,n-2,n-3.... 2  times
        {
            if(A[j]<A[miin])
            miin =j;
        }                       // TC is n + n^2==O( n^2) BWA

        int temp = A[miin];
        A[miin]=A[i];
        A[i] = temp;


    }
}

int partitionn(vector<int> &a,int low,int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;

    if(i<j)
    {
        while(a[i] <= pivot && i<= high-1)
            i++;
        while(a[j]>pivot && j>= low+1)
            j--;

        if(i<j)
            swap(a[i],a[j]);

    }
    swap(a[j],pivot);

    return j;
}


void quicksort(vector<int> &a,int low,int high)
{
    if(low< high)
    {
       int p= partitionn(a,low,high);
       quicksort(a,low,p-1);
       quicksort(a,p+1,high);
    }
}

// bubble sort
// swap with adjacent if smaller
 void bubblesort(int arr[],int n)
 {

     for(int i=0;i<n-1;i++)
     {
         for(int j=0;j<n-1-i;j++)
         {
             if(arr[j]> arr[j+1])
             {
                 int temp= arr[j+1];
                 arr[j+1]= arr[j];
                 arr[j]= arr[j+1];
             }
         }

    }

 }




int main()
{
  int n;
    cin>> n;
 /*
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }


   // selection(A,n);
  //  bubblesort(A,n);
   for(int i=0;i<n;i++)
    {
        cout << A[i] <<" ";
    }

  */
    vector<int> a(n,0);
    for(auto &it:a)
        cin>> it;

  quicksort(a,0,n);

    for(auto it:a)
        cout<< it<< " ";
}
