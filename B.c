#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    if(t<1 || t>1439) return 1;
    int arr[t];
    int arr1[t];
    for(int i=0 ; i<t; i++){
        scanf("%d", &arr[i]);
        scanf("%d", &arr1[i]);
        if(arr[i] < 0 || arr[i] > 24) return 1;
        if(arr1[i] < 0 || arr1[i] > 60) return 1;
        if(arr[i] == 0 && arr1[i] == 0) return 1;
    }
    for(int i=0; i<t; i++){
        int x = 1440-(arr[i]*60)-arr1[i];
        printf("%d\n", x);
    }

    return 0;
}
