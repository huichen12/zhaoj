void Delete(int a[], int *n, int i)
{
	int j;
	if(i < 0 || i >= *n) return 0;					//ɾ��λ�ô��󷵻� 
	for(j = i+1; j < *n; j++) a[j-1] = a[j];		//˳����λ�				
	(*n)--;											//����Ԫ�ظ�����һ 
	return 1;										//ɾ���ɹ����� 
 } 
