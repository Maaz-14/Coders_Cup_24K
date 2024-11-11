#include<stdio.h>
#include<string.h>
int main(){
    long int n;
    scanf("%ld", &n);
    if(n < 1 || n > 100000) return 1;

    char str[n][100];
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    int count[4];
    for(int i=0; i<4; i++){
        count[i]=0;
    }
    for(int i=0; i<n; i++){
        if(strcmp(str[i], "AC") == 0) count[0]++;
        else if(strcmp(str[i], "WA") == 0) count[1]++;
        else if(strcmp(str[i], "TLE") == 0) count[2]++;
        else if(strcmp(str[i], "RE") == 0) count[3]++;
    }
    printf("AC x %d\n", count[0]);
    printf("WA x %d\n", count[1]);
    printf("TLE x %d\n", count[2]);
    printf("RE x %d\n", count[3]);

    return 0;
}
