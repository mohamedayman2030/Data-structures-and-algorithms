//this code is implementation of merge sort algorithm. merge sort algorithm is O(nlogn).
void merge (int arr[], int low, int high){
    int mid=(low+high)/2;
    int l_size=mid-low+1;
    int r_size=high-mid;
    int pos=low;
    int left_arr[l_size];
    int right_arr[r_size];
    for(int i=0;i<l_size;i++)
    left_arr[i]=arr[low+i];
    for(int i=0;i<r_size;i++)
    right_arr[i]=arr[mid+1+i];
    int i=0,j=0;
    while(i<l_size && j<r_size){
        if(left_arr[i]<=right_arr[j])
        arr[pos++]=left_arr[i++];
        else
        arr[pos++]=right_arr[j++];
    }
    while(i<l_size)
    arr[pos++]=left_arr[i++];
    while(j<r_size)
    arr[pos++]=right_arr[j++];
}

void mergeSort (int arr[], int low, int high){
    if(low==high)
    return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high);
}