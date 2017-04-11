//Matin	Afkhami
//incomplete game :  it can't identify the winner.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,x;
    static char array[10],a[20],b[20];
    printf("\n         -------------\n        | Tic-Tac-Toe |\n         -------------\n\n   Enter first player name : ");
    gets(a);
    printf("\n   Enter second player name : ");
    gets(b);
    printf("\n\n   OK! Enter the pointing number at your turns.(like below)\n\n                          |7|8|9|\n                          |4|5|6|\n                          |1|2|3|\n\n-----------------------------------------------------------");

    while (1)
    {
        while(i<10)
        {
            if (i%2==0)
            {
                int k=0;
                printf("\n\n-----");
                for(k;k<21 && b[k]!='\0';k++)
                    printf("%c",b[k]);
                printf("(+) : ");
            }
            else
            {
                int l=0;
                printf("\n\n-----");
                for(l;l<21 && a[l]!='\0';l++)
                    printf("%c",a[l]);
                printf("(O) : ");
            }
            scanf("%d",&x);
            while((x>9 || x<1) || ((array[x]=='+') || (array[x]=='O')))
            {
                if(x>9 || x<1) printf("\n    Incorrect input.Enter Again : ");
                else printf("\n    Duplicate input.Enter Again : ");
                scanf("%d",&x);
            }

            if (i%2==0) array[x]='+';
            else array[x]='O';

//i could print the board in two ways.the easier way for me but not for user (because the result is numpad inverted) :
            /*for(j=1;j<=9;j++)
            {
                if (j==1) printf("\n    ");
                printf("|%d",array[j]);
                if (j%3==0) printf("|\n    ");
            }*/
 //the amateur way but user friendly:

            if ((x>9 || x<1) || (array[x]=='+') || (array[x]=='O')) printf("\n");
            printf("\n                          |%c|%c|%c|\n                          |%c|%c|%c|\n                          |%c|%c|%c|\n",array[7],array[8],array[9],array[4],array[5],array[6],array[1],array[2],array[3]);
            i++;
        }
        i=1;
        printf("\n\n\n------------------This Game was a draw.-------------------\n\n---------------------------Again--------------------------\n\n\n");

    }
    return 0;
}
