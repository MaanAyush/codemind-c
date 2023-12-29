#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]%2==0) even=even+arr[i][j];
            else odd=odd+arr[i][j];
        }
        
    }
    printf("%d %d",even,odd);
}