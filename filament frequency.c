#include<stdio.h>
#include<string.h>

int main(){

    char a[100], b;
    int count = 0;
	int i;
	
	
	
    printf("Enter name : ");
    gets(a);


    printf("Enter a character to find its frequency: ");
    scanf("%c", &b);

    for (i = 0; a[i] != '\0'; i++) {
        if (b == a[i])
            count++;
    }

    printf("Frequency of %c = %d", b, count);
   
}
