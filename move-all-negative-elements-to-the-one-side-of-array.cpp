#include <iostream>
using namespace std;
void display(int arr[], int right){
   
  // Loop to iterate over the element
  // of the given array
  for (int i=0;i<right;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = n-1 ;
    while (left<=right)
  {
    // Condition to check if the left
    // and the right elements are 
    // negative
    if (arr[left] < 0 && arr[right] < 0)
      left+=1;
     
    // Condition to check if the left 
    // pointer element is positive and 
    // the right pointer element is negative
    else if (arr[left]>0 && arr[right]<0)
    {
      int temp=arr[left];
      arr[left]=arr[right];
      arr[right]=temp;
      left+=1;
      right-=1;
    }
     
    // Condition to check if both the 
    // elements are positive
    else if (arr[left]>0 && arr[right] >0)
      right-=1;
    else{
      left += 1;
      right -= 1;
    }
  }

   display(arr,n);
}