#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    scanf("%[^
]s",str);
    int sum=0;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]>='0'&&str[i]<='9') { 
            sum+=(str[i]-'0');
        }
    }
    printf("%d",sum);
}