#include<stdio.h>
#include<string.h>
int main(){
    int n,q;
    scanf("%d", &n);
    if(n < 1 || n > 100) return 1;
    scanf("%d", &q);
    if(q < 1 || q > 100) return 1;
    int player[q];
    int event[q];
    int yellowcard[n];
    int redcard[n];
    for(int i=0; i < q; i++){
        scanf("%d", &event[i]);
        scanf("%d", &player[i]);
        if(player[i] < 1 || player[i] > n) return 1;
    }
    for(int i=0; i<n; i++){
        redcard[i]=0;
        yellowcard[i]=0;
    }
    for(int i=0 ; i<q; i++){
        if(event[i] == 3){
            if(yellowcard[player[i]-1] == 2){
                printf("Yes\n");
            }
            else if(redcard[player[i]-1] == 1){
                printf("Yes\n");
            }
            else if(yellowcard[player[i]-1] < 2 && redcard[player[i]-1] < 1) printf("No\n");
        }
        else if(event[i] == 2){
            redcard[player[i]-1]++;
        }
        else if(event[i] == 1){
            yellowcard[player[i]-1]++;
        }
    }
    return 0;
}
