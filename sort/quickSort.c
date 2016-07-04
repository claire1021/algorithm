/*quick sort*/
int partition(int a[],int start,int end){
	int pivot = a[end];
	int partitionIndex = start;        //set partition index as start initially
	int tmp;

	for(int i=start;i<end-1;i++){
		if(a[i]<=pivot){
			tmp = a[i];
			a[i] = a[partitionIndex];
			a[partitionIndex] = tmp; 
			partitionIndex = partitionIndex+1;
		}
	}
	tmp = a[end];
	a[end] = a[partitionIndex];
	a[partitionIndex] = tmp;
	return partitionIndex;
}

void quick_sort(int a[],int start,int end){

	if(start<end){
		int partitionIndex = partition(a,start,end);
		quick_sort(a,start,partitionIndex-1);
		quick_sort(a,partitionIndex+1,end);
	}
}