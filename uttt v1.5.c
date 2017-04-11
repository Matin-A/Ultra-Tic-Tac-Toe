//Matin Afkhami

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int WinCheck (char array[]);

int main()
{
    setColor(15);
    int i=1,user_num,win_check;
    char array[10],a[20],b[20],user_char[2];
    array[0]='y';                                                                             //not important just to be sure compiler would not go through incorrect cases
    printf("\n                       -------------\n                      | Tic-Tac-Toe |\n                       -------------\n\n   Enter first player name : ");
    gets(a);
    printf("\n   Enter second player name : ");
    gets(b);
    printf("\n\n   OK! Enter the pointing number at your turns.(like below)\n   Enter 0 to exit current game.\n\n                          |7|8|9|\n                          |4|5|6|\n                          |1|2|3|\n\n-----------------------------------------------------------");



    while (1)                                                                                //game runs in a unlimited cycle
    {
        int s;                                                                               //will reset array to space before each round
        for(s=1;s<10;s++)
        {
            array[s]=' ';
        }

        while(i<10)                                                                          //each round starts here (a draw game will takes 10 turns)
        {
            printf("\n\n-----");
            if (i%2==0)                                                                      //will print second player name at his turn like this :    -----name2(+)
            {
                printf("%s(+) : ",b);
            }
            else                                                                             //will print first player name at his turn like this :    -----name1(O)
            {
                printf("%s(O) : ",a);
            }


            do{                                                                              //get each player choice
                scanf("%s" , user_char);
                user_num = user_char[0];                                                     //now user_num is code ascid

                while((user_num>57 || user_num<48) || (array[(user_num)-48]=='+') || (array[(user_num)-48]=='O') || (user_char[1])) //for incorrect choices
                {
                    if ((array[(user_num)-48]=='+') || (array[(user_num)-48]=='O'))
                    {
                        printf("\n    Duplicate input.Enter Again : ");
                        scanf("%s" , &user_char);
                        user_num = user_char[0];
                    }
                    else
                    {
                        printf("\n    Incorrect input.Enter Again : ");
                        scanf("%s" , user_char);
                        user_num = user_char[0];
                    }

                }
                if (user_char[1]==NULL && user_num > 47 && user_num < 58 )
                    user_num -= 48;

            }while(user_char[1]!=NULL || user_num  < 0 || user_num > 9 );


            if (user_num==0) break ;                                                                //exit current game?

            if (i%2==0) array[user_num]='+';                                                        //change array as user input
            else array[user_num]='O';
            if ((user_num>9 || user_num<1) || (array[user_num]=='+') || (array[user_num]=='O')) printf("\n"); //not important just for good looking
            //std:system("cls");
            //printf("\n                       -------------\n                      | Tic-Tac-Toe |\n                       -------------\n\n\n               \n\n\n   OK! Enter the pointing number at your turns.(like below)\n   Enter 0 to exit current game.\n\n                          |7|8|9|\n                          |4|5|6|\n                          |1|2|3|\n\n-----------------------------------------------------------");
            printf("\n                          |%c|%c|%c|\n                          |%c|%c|%c|\n                          |%c|%c|%c|\n",array[7],array[8],array[9],array[4],array[5],array[6],array[1],array[2],array[3]);
            win_check=WinCheck(array);
            if(win_check==1)
            {
                if (i%2==0) printf("\n\n\n-----------------------Player 2 Wins----------------------",b);
                else printf("\n\n\n-----------------------Player 1 Wins----------------------",a);
                break;
            }

            i++;
        }                                                                                   //end of each round




        if (user_num==0 && i%2==0)                                                         //show the result when there is no winner
            printf("\n\n\n-------------This Game was ended by Player2.--------------");
        else if ( user_num==0 )
            printf("\n\n\n-------------This Game was ended by Player1.--------------");
        else if (win_check==0)
            printf("\n\n\n------------------This Game was a draw.-------------------");

        printf("\n\n----------------------Again?(y or n)----------------------\n\n\n");
        i=1;
        getchar();                                                                          //ask to continue or not
        scanf("%c",&array[0]);
        while ( array[0]!='n' && array[0]!='N' && array[0]!='y' && array[0]!='Y' )
        {
            printf("\n\n    What? Enter y or Y to continue OR Enter n or N to Exit :");
            getchar();                                                                          //ask to continue or not
            scanf("%c",&array[0]);
        }

        if ( array[0]=='n' || array[0]=='N' ) break ;

    }
    printf("\n\n-----------------------------------------------------------\n------------------------GOODBYE----------------------------\n-----------------------------------------------------------\n\n\n");
    return 0;
}



int WinCheck (char array[])
{
    if(                                                                                    //check for winner
        ( array[1]==array[2] && array[2]==array[3] && array[1]!=' ' ) ||
        ( array[4]==array[5] && array[5]==array[6] && array[4]!=' ' ) ||
        ( array[7]==array[8] && array[8]==array[9] && array[7]!=' ' ) ||
        ( array[1]==array[5] && array[5]==array[9] && array[1]!=' ' ) ||
        ( array[3]==array[5] && array[5]==array[7] && array[3]!=' ' ) ||
        ( array[1]==array[4] && array[4]==array[7] && array[1]!=' ' ) ||
        ( array[2]==array[5] && array[5]==array[8] && array[2]!=' ' ) ||
        ( array[3]==array[6] && array[6]==array[9] && array[3]!=' ' )  ) return 1;

    return 0;
}
