/*test main*/
void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	printf("\n");
}


int main()
{	
	int a[] = {7,6,5,4,3,2};
	int len = sizeof(a)/sizeof(a[0]);
	printf("before sort--------\n");
	printArray(a,len);

//	bubbleSort(a,len);
//	selectSort(a,len);
//	insertSort(a,len);
//	mergeSort(a,len);
	quickSort(a,0,len-1);
	printf("afters sort--------\n");
	printArray(a,len);

	system("pause");
	return 0;
}

