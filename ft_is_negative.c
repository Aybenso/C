#include <unistd.h>
#include <stdio.h>

void    ft_is_negative(int n)
{
   // char p = 'P';
   // char neg = 'N';
    if(n >= 0){
        write(1, "P", 1);
    }
    else{
        write(1, "N", 1);
}
    
}


int     main()
{
    int n ;
   printf("Entrer un nombre entier : " );
   scanf("%d", &n);

    ft_is_negative(n);
    return(0);
}
