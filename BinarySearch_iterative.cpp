
//BinarySearch using iterative solution , this solution is O(logN)
int BinarySearch(int arr[], int low, int high, int key){
 while(low<high){
     int mid=(low+high)/2;
     if(arr[mid]<key)
     low=mid+1;
     else
     high=mid;
     
 }
    return high;
    
    
}