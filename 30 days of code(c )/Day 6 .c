#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char s[10000];
    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s", s);
        int len = strlen(s);

        for(int j=0; j<len; j++){
            if(j%2==0){
              printf("%c", s[j]);
            }
        }

        printf(" ");

        for(int k=0; k<len; k++){
            if(k%2!=0){
            printf("%c", s[k]);
            }
        }

        printf("\n");
    }

    return 0;

}
