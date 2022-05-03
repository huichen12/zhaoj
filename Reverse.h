typedef int DataType;

void Reverse(DataType a[], int n, DataType b[])
{
	int i;
	for(i=0; i<n; i++)
	{
		b[i] = a[n-1-i];
		
	}
}

void Reverse(DataType a[], int n)
{
	int i, m = n/2;
	DataType temp;
	
	for(i=0; i<m; i++)
	{
		temp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = temp;
	}
	
}
