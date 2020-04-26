#include<stdio.h>
int main(){
    char a[100];
    printf("Enter the string: ");
    gets(a);
    int ans = 0;
    for(int i=0; i<a[i]; i++){
        ans++;
    }
    printf("The length of the string is: ");
    printf("%d", ans);
}