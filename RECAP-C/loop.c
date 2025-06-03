#include <stdio.h>

int main()
{
    // int j;
    // scanf("%d", &j);
    // int array[j];
    // for (int i = 0; i < j; i++)
    // {
    //     int value;
    //     scanf("%d", &value);
    //     array[i] = value;
    // };
    // for (int i = 0; i < j; i++)
    // {
    //     printf("%d ", array[i]);
    // };

    // int num1;
    // scanf("%d", &num1);
    // int array[num1];
    // for (int i = 0; i < num1; i++)
    // {
    //     scanf("%d", &array[i]);
    // };
    // int num2;
    // scanf("%d", &num2);
    // int isFound = 0;
    // for (int i = 0; i < num1; i++)
    // {
    //     if (array[i] != num2)
    //     {
    //         continue;
    //     }
    //     isFound = 1;
    //     break;
    // };

    // if (isFound == 1)
    // {
    //     printf("Number Found %d", num2);
    // }
    // else
    // {
    //     printf("Number Not Found");
    // }

    // print the n numbers in i*i
    // int num1 ;
    // scanf("%d",&num1);
    // for(int i=0;i<num1;i++){
    //     printf("%d * %d = %d\n",i,i,i*i);
    // };

    // int num1;
    // scanf("%d",&num1);
    // for(int i=0;i<num1;i+=1){
    //     printf("%d * 2 = %d\n",i,i*2);
    // };
    // int num1;
    // scanf("%d", &num1);
    // for(int i=0;i<num1;i++){
    //     printf("%d ",i);
    // };
    // printf("\n");
    // for(int i=1;i<num1;i+=2){
    //     printf("%d ",i,i);
    // };
    // printf("\n");
    // for(int i=2;i<num1;i+=2){
    //     printf("%d ",i,i);
    // };
    // printf("\n");
    // for (int i = num1; i > 0; i--)
    // {
    //     printf("%d ", i);
    // };
    // printf("\n");
    // for (int i = num1; i > 0; i -= 2)
    // {
    //     printf("%d ", i);
    // };
    // printf("\n");
    // for (int i = num1 - 1; i > 0; i -= 2)
    // {
    //     printf("%d ", i);
    // }
    int n, i, sum=0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    };
    printf("sub : %d", sum);
    return 0;
};