#include <stdio.h>

int main()
{
<<<<<<< HEAD
    char str[100][101];
    for(int i=0; i<100; i++)
    {
        if(fgets(str[i], sizeof(str[i]), stdin)!=NULL)
        printf("%s", str[i]);
=======
    char str[101][101];
    for(int i=0; i<101; i++)
    {
        scanf("%s", str[i]);
        printf("%s\n", str[i]);
>>>>>>> ea7b133e938831aac1d5ed8fc5492c4c80ece746
    }
    return 0;
}