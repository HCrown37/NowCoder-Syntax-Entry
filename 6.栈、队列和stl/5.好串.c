#include <stdio.h>

int main (void){
    char a[51];
    scanf("%s",a);
    
    int top_a = -1;
    int top_b = -1;
    
    int i = 0;
    int flag = 1;
        while ( a[i] != '\0') {
            switch (a[i]) {
                case 'a':
                    top_a ++;
                    break;
                case 'b':
                    top_b++;
                    break;
            }
            if ( top_b > top_a) {
                flag = 0;
                break;
            }
            i++;
        }
        
        if (top_a == top_b ) {
            printf("Good");
        }
    
        if (flag == 0 || top_a != top_b) {
            printf("Bad");
        }
    
    
    return 0;
}