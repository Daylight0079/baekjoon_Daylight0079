#include <stdio.h>

int main ()
{
    int n;
    int i;

    printf("수를 입력하세요 (1 ~ 15) : ");
    scanf(" %d", &n);       // 수 입력 받기
    
    printf("퇴사까지 %d일 \n", n);
    

    if (n >= 1 && n <= 15)
    {
        printf("성공\n");
        int array[n-1];
    	int array1[n-1];
    	int array2[n-1];
    	
    	for(i = 0; i <= n-1; i++)
    		array[i]= i + 1;
        
        for(i = 0; i <= n-1; i++) 	
        {
        	printf("걸리는 일 수 : ");
        	scanf(" %d\n", &array1[i]);
        	
        	printf("이익 : ");
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
        printf("수를 잘못 입력했습니다.");
        
    return 0;
}
