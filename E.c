#include<stdio.h>
#include<string.h>
int main(){
    long int n,y;
    scanf("%ld%ld", &n, &y);
    if(n<1 || n>200000) return 1;
    if(y<0 || y>200000) return 1;
    char str[n+1];
    scanf("%s", str);
    for(int i=0; str[i] != '\0'; i++){
        if(y!=0){
            if(str[i] == 'x'){
                y--;
            }
        }
        if(str[i] == 'o'){
                y++;
        }
    }
    printf("%d", y);
    return 0;
}
