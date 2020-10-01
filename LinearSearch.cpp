int LinearSearch(int arr[], int low, int high, int key){
    //the worst case here is O(N) - find the key at last element-, and the best case is O(1) - find the key at first element -
    if (high<low)
    return -1; //if not found
    
    
    if (arr[low]==key)
    return low; //  if the element exist at low position
    
    
    return LinearSearch(arr,low+1,high,key); // increase low to check the next element
    
    
    
    
}