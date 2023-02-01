//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long count=0;
    
 void merge(long long arr[], long long p, long long q, long r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  long long n1 = q - p + 1;
  long long n2 = r - q;

  long long  L[n1], M[n2];
  
//   if(arr[p]>arr[q]){
//       count++;
//   }
  
//   if(arr[q]>arr[r]){
//       count++;
//   }
  
//   if(arr[p]>arr[q]){
//       count++;
//   }

  for (long long  i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (long long j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
    
    

   //Maintain current index of sub-arrays and main array
  long long i, j, k;
  i = 0;
  j = 0;
  k = p;

//   Until we reach either end of either L or M, pick larger among
//   elements L and M and place them in the correct position at A[p..r]
   
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      count=count+n1-i;
      arr[k] = M[j];
      j++;
    }
    k++;
  }

//   When we run out of elements in either L or M,
//   pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
   }

 }   
    
void mergeSort(long long  arr[] ,long long l, long long r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    long long  m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}
   
    long long int inversionCount(long long arr[], long long N)
    {
       
       mergeSort(arr,0,N-1);
       return count;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends