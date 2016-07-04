/*insertion sort*/


void insertSort(int a[],int n)  {
	int i,j,target;

	for(i=1;i<n;i++){
		j = i;
		target = a[i];
		while(j>0 &&  target<a[j-1]){
			a[j] = a[j-1];
			j--;
		}
		a[j] = target;
	}
}