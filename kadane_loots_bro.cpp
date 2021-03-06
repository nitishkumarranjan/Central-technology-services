	// C++ program to print largest contiguous array sum
#include<iostream>
using namespace std;
 










/*

find the maximum sum such that no two elements 
are adjacent.
Dynamic Programming is the efficient technique to solve this. 
The algorithm can be given as follows:
Maintain an auxiliary array loot.
loot[0] = arr[0]
loot[1] = arr[1]
loot[i] = max(loot[i - 1], loot[i - 2] + arr[i]),  2 <= i < n
loot[n - 1] gives the maximum amount of money the thief can take away.

*/
// NOT ADJACENT 
int FindMaxSum(int arr[], int n)
{
  int incl = arr[0];
  int excl = 0;
  int excl_new;
  int i;
 
  for (i = 1; i < n; i++)
  {
     /* current max excluding i */
     excl_new = (incl > excl)? incl: excl;
 
     /* current max including i */
     incl = excl + arr[i];
     excl = excl_new;
  }
 
   /* return max of incl and excl */
   return ((incl > excl)? incl : excl);
}

int maxSubArraySum(int a[], int size)
{
    int max_so_far = 0, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}
 
/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is \n" << max_sum;
    return 0;
}