
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int len  =  2*n -1;
    int start =0,end = len-1;
    int a[len][len];
    int i,j;
    while(n!=0){
        for(i=start;i<=end;i++){
            for( j = start;j<=end;j++){
                if(i==start || i==end || j==start || j==end){
                    a[i][j]=n;
                }
            }
        }
        ++start;
        --end;
        --n;
        
    }
    for( i=0;i<len;i++){
        for( j=0;j<len;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
