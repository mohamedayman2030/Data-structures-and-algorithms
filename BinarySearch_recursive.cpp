//BinarySearch using recursion , Binary search is O(logN)
int BinarySearch(int arr[], int low, int high, int key){
   if (high<low)
   return -1;
   int mid=(low+high)/2;
   if(arr[mid]==key)
   return mid;
   if(arr[mid]<key)
   return BinarySearch(arr,mid+1,high,key);
   if(arr[mid]>key)
   return BinarySearch(arr,low,mid-1,key);
    
    
    
}
