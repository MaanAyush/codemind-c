#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("%d ",sum);
    }
}