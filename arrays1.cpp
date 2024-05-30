#include<bits/stdc++.h>
using namespace std;

// Q1- largets element
 int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(),arr.end());
        return arr[n-1];
    }

// Q2- second largets element;
int print2largest(int arr[], int n)
{

	    int largest =arr[0];
	    int slargest=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i] > largest)
	        {
	            slargest = largest;
	            largest = arr[i];
	        }

	        if( arr[i] < largest && arr[i] > slargest)
	        {
	            slargest = arr[i];
	        }
	  	}

	  	return slargest;
}

//Q3 - Check if the array is sorted and rotated


// Q8 - move zeroes to last
 void moveZeroes(vector<int>& nums)
  {
       int n = nums.size();
       int lastnz=0;
       for(int i=0;i<n;i++)
       {
            if(nums[i] != 0)
            {
                nums[lastnz]=nums[i];
                lastnz++;
            }
       }

       for(int i=lastnz++; i<n ;i++)
       {
        nums[i]=0;
       }
 }

//Q9  linear search

// Q10 find Union of two array

 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> st;

        for(int i=0;i<n;i++)
        {
            st.insert(arr1[i]);
        }

        for(int i=0;i<m;i++)
        {
            st.insert(arr2[i]);
        }

        vector<int> arr;
        for (auto & it: st)
          arr.push_back(it);

         return arr;
}

// Q`11  find the missing number
//1- hasing - store every number in hash travese it and  // TC - O(n) SC-O(n)
// 2- summation --> natural number sum upto max number  -- sum of given array // TC - O(n), SC-O(1)
// 3- x0r



// Q12  find maximum consecutive ones
 int findMaxConsecutiveOnes(vector < int > & nums) {
      int cnt = 0;
      int maxi = 0;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
          cnt++;
        } else {
          cnt = 0;
        }

        maxi = max(maxi, cnt);
      }
      return maxi;
    }
};

//Q14
int missingNumber(vector<int>&a, int N) {

    sort(a.begin(),a.end());
    int i=1;
    for( i=1;i<=a[N-1];i++)
    {
      if (a[i-1] != i) {
        return i;
        break;
      }
    }
    return N;
}

int main()
{

    int n;
    cin>> n;

    vector<int> a(n,0);

    for(auto &it: a)
        cin >> it;

     int big = largest_element(a,n);


//  int miss =  missingNumber(a,n);

    cout << big;
}
