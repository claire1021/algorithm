/*bubble sort*/

void bubble_sort(int a[],int n)  {
	int i,j,temp,tag;

	for(i=0;i<n-1;i++){
		tag = 1;
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				  temp = a[j];
				  a[j] = a[j+1];
				  a[j+1] = temp;
				  tag = 0;
			}
		}
		if(tag)  break;
	}
}
