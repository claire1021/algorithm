/*merge sort*/

void merge(int *A,int *L,int lCount,int *R,int rCount){
	int i,j,k;
	i = 0; j = 0; k = 0;
	while(i<lCount && j<rCount){
		if(L[i]<R[j])  A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i<lCount) A[k++] = L[i++];
	while(j<lCount) A[k++] = R[j++];
}

void mergeSort(int *A,int n){
	int i,j,mid,*L,*R;
	mid = n/2;
	if(n<2)  return;

	L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((n-mid)*sizeof(int));

	for(i=0;i<mid;i++) L[i] = A[i];
	for(i=mid;i<n;i++) R[i-mid] = A[i];

	mergeSort(L,mid);
	mergeSort(R,n-mid);
	merge(A,L,mid,R,n-mid);

	free(L);
	free(R);

}
