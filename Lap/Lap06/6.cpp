#include <stdio.h>

int main() {
    int NUM;
    
    printf("put number: ");
    scanf("%d", &NUM);
    if (NUM == 0)
    {
        printf(" Error Error Error Error Error Error Error Error Error Error Error ErrorError Error Error Error Error Error Error Error Error Error Error ErrorError Error Error Error Error Error Error Error Error Error Error ErrorError Error Error Error Error Error Error Error Error Error Error ErrorError Error Error Error Error Error Error Error Error Error Error Error");
    	printf("\n I say put number\nAre you Stupid??");
	}
    else if (NUM % 2 == 1) 
	{
    
        for (int i = 1; i <= NUM; i += 2) 
		{
            printf("%d ", i);
        }
    } 
	else if (NUM % 2 == 0 )
	{
        for (int i = NUM; i >= 0; i -= 2) 
		{
            printf("%d ", i);
        }
    }
   
    return 0;
}

