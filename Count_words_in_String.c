#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^
]s",str);
    int c=0;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]==32){
            c++;
        }
    }printf("%d",c+1);
}