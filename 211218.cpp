#include <stdio.h>

int main ()
{
    int n;
    int i;

    printf("���� �Է��ϼ��� (1 ~ 15) : ");
    scanf(" %d", &n);       // �� �Է� �ޱ�
    
    printf("������ %d�� \n", n);
    

    if (n >= 1 && n <= 15)
    {
        printf("����\n");
        int array[n-1];
    	int array1[n-1];
    	int array2[n-1];
    	
    	for(i = 0; i <= n-1; i++)
    		array[i]= i + 1;
        
        for(i = 0; i <= n-1; i++) 	
        {
        	printf("�ɸ��� �� �� : ");
        	scanf(" %d\n", &array1[i]);
        	
        	printf("���� : ");
			scanf(" %d\n", &array2[i]);
		}
		
		for(i = 0; i <= n-1; i++)
		{
			printf("%d ", array[i]);
			printf("%d ", array1[i]);
			printf("%d \n", array2[i]);
		}
    }
    else
        printf("���� �߸� �Է��߽��ϴ�.");
        
    return 0;
}
