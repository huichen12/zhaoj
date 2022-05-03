void BubbleSort(DataType a[], int n)
{
	int i, j, flag=1;
	int temp;
	
	for(i = 1; i<n && flag=1; i++)
	{
		flag = 0;
		for(j = 0; j < n-i; j++)
		{
			if(a[j] > a[j+1])
			{
				flag = 1;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
 } 
