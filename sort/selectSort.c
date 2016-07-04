/*selection sort*/

void selectSort(int a[],int n)  {
	int i,j,min,tmp;

	for(int i=0;i<n-1;i++){
		min = i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min = j;
			}
		}
		tmp = a[min];
		a[min] = a[i];
		a[i] = tmp;
	}
}