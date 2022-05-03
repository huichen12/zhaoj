void QuickSort(DataType a[], int low, int high)
//�õݹ鷽��������Ԫ��a[low]~a[high]���п������� 
{
	int i = low, j = high;
	DataType temp = a[low];//ȡ��һ������Ԫ��Ϊ���е����ı�׼����Ԫ�� 
	
	while(i < j)
	{
		while(i < j && temp.key <= a[j].key)	j--;//��������Ҷ�ɨ�� 
		if(i < j)
		{
			a[i] = a[j];
			i++;
		}
		
		while (i < j && a[i].key < temp.key)	i++;//����������ɨ�� 
		if(i < j)
		{
			a[j] = a[i];
			j--;
		}
	}
	
	a[i] = temp;
	
	if(low < i)	QuickSort(a, low, i-1);		//������Ӽ��Ͻ��еݹ� 
	if(i < high) QuickSort(a, j+1, high); 	//���Ҷ��Ӽ��Ͻ��еݹ� 
}
