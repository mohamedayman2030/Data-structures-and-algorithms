//this code is bubble sort. the complexity time of this algorith is O(n2).

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
    
}

void BubbleSort(int arr[],int n){
    int i,j;
	bool swapped;
    for(i=0;i<n-1;i++){
		swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);
			swapped=true;
        }
    }
	if(swapped==false)
		break;
    }
    
}
