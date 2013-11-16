#include <stdio.h>

 main(){
    int c;
    c=getchar();
    while((c=getchar())!=EOF){
//#        putchar(c);
        printf("%d\n",getchar()!=EOF);
    }
}
