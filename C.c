#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    int flag = 0;
    scanf("%s", str);
    for(int i=0; str[i] != '\0'; i++){
        if(i % 2 == 0 && (str[i] >= 'a' && str[i] <='z')) flag = 1;
        else if(i % 2 != 0 && (str[i] >= 'A' && str[i] <='Z')) flag = 1;
        else{
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}
