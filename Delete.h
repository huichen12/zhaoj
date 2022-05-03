void Delete(int a[], int *n, int i)
{
	int j;
	if(i < 0 || i >= *n) return 0;					//删除位置错误返回 
	for(j = i+1; j < *n; j++) a[j-1] = a[j];		//顺次移位填补				
	(*n)--;											//数组元素个数减一 
	return 1;										//删除成功返回 
 } 
