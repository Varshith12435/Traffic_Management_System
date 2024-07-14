#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
char a='R',b='R',c='R',d='R';
char a1=' ',a2=' ',b1=' ',b2=' ',c1=' ',c2=' ',d1=' ',d2=' ';
void lights()
{
    printf("\n");
    printf("\t         |   |   |         \n");
    printf("\t         |   |   |         \n");
    printf("\t         |   |   |         \n");
    printf("\t         |   | %c |         \n",c2);
    printf("\t_________|   %c %c |_________\n",a,c1);
    printf("\t                           \n");
    printf("\t        %c%c                 \n",d2,d1);
    printf("\t---------%c       %c---------\n",b,d);
    printf("\t                 %c%c        \n",b1,b2);
    printf("\t_________         _________\n");
    printf("\t         | %c %c   |         \n",a1,c);
    printf("\t         | %c |   |         \n",a2);
    printf("\t         |   |   |         \n");
    printf("\t         |   |   |         \n");
    printf("\t         |   |   |         \n");
}

void main()
{
    int i=0,n=0;
    while(n<6)
    {
        system("clear");
        switch(i)
        {
            case 0:a='Y';
            lights();
            sleep(2);
            a='G';a1='^';a2='|';
            break;
            case 1:b='Y';
            lights();
            sleep(2);
            b='G';b1='<';b2='-';
            break;
            case 2:c='Y';
            lights();
            sleep(2);
            c='G';c1='v';c2='|';
            break;
            case 3:d='Y';
            lights();
            sleep(2);
            d='G';d1='>';d2='-';
            break;
        }
        system("clear");
        lights();
        sleep(6);
        a='R',b='R',c='R',d='R';
        a1=' ',a2=' ',b1=' ',b2=' ',c1=' ',c2=' ',d1=' ',d2=' ';
        i++;
        i=i%4;
        n++;
    }
}