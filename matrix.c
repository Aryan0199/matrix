#include <stdio.h>
int main(){
    int arr[3][3],i,j;
    printf("Enter the elements\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }
    printf("The matrix formed is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n");
    }
    int sum1=*(*(arr+0)+0)+*(*(arr+1)+1)+*(*(arr+2)+2);
    int sum2=*(*(arr+0)+2)+*(*(arr+1)+1)+*(*(arr+2)+0);
    printf("The sum of left-diagonal elements is %d\n",sum1);
    printf("The sum of right-diagonal elements is %d",sum2);
    return 0;

}
