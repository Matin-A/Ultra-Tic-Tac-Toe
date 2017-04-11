//Matin Afkhami

#include <stdio.h>
#include <stdlib.h>


int WinCheck1 (char array[][10],int);
int WinCheck2 (char array[][10]);
int getscan ();

int main()
{
    int i=0,user_num_i,user_num_j,win_check_1,win_check_2;
    char array[9][10],a[20],b[20],exitchecker;

    printf("\n                                 -------------------\n                                | Ultra-Tic-Tac-Toe |\n                                 -------------------\n\n___Enter first player name : ");
    gets(a);
    printf("\n___Enter second player name : ");
    gets(b);
    printf("\n\n___OK! First enter block number then enter the pointing number at your turns.(like below)\n___Enter 0 to exit current game.\n___Scroll upside to see additional informations.\n\n                          |7|8|9|\n                          |4|5|6|\n                          |1|2|3|\n");


    while (1)                                                                                //game runs in a unlimited cycle
    {

        int s,t;                                                                             //will reset array to space before each round
        for(s=0;s<9;s++)
        {
            for (t=0;t<10;t++)
            {
                array[s][t]=' ';
            }
        }


        system("cls");
        printf("\n\n                       ___________________________________\n                      |   |   |   |   |   |   |   |   |   |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      |   |   |   |   |   |   |   |   |   |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      |   |   |   |   |   |   |   |   |   |\n                      |____________________________________\n                      |   |   |   |   |   |   |   |   |   |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      |   |   |   |   |   |   |   |   |   |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      |   |   |   |   |   |   |   |   |   |\n                      _____________________________________\n                      |   |   |   |   |   |   |   |   |   |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      |   |   |   |   |   |   |   |   |   |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      |   |   |   |   |   |   |   |   |   |\n                      _____________________________________");
        printf("\n\n___Choose a block to start : ");
        user_num_i=getscan();
        user_num_i--;



        while(i<82)                                                                          //each round starts here (a draw game will takes 10 turns)
        {
            i++;
            printf("\n\n-----");
            if (i%2==0)                                                                      //will print second player name at his turn like this :    -----name2(+)
            {
                printf("%s(+) : ",b);
            }
            else                                                                             //will print first player name at his turn like this :    -----name1(O)
            {
                printf("%s(O) : ",a);
            }


            user_num_j=getscan();

            if (user_num_j==0) break ;
            while ((array[user_num_i][user_num_j]=='+') || (array[user_num_i][user_num_j]=='O'))
            {
                printf("\n___Duplicate input.Enter Again : ");
                user_num_j=getscan();
            }


            if (i%2==0) array[user_num_i][user_num_j]='+';                                  //change array as user input
            else array[user_num_i][user_num_j]='O';


            system("cls");
            printf("\n\n                      _____________________________________\n                      | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n                      |____________________________________\n                      | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n                      _____________________________________\n                      | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n                      |---\305---\305---|---\305---\305---|---\305---\305---|\n                      | %c | %c | %c | %c | %c | %c | %c | %c | %c |\n                      _____________________________________",
                   array[6][7],array[6][8],array[6][9],array[7][7],array[7][8],array[7][9],array[8][7],array[8][8],array[8][9],
                   array[6][4],array[6][5],array[6][6],array[7][4],array[7][5],array[7][6],array[8][4],array[8][5],array[8][6],
                   array[6][1],array[6][2],array[6][3],array[7][1],array[7][2],array[7][3],array[8][1],array[8][2],array[8][3],
                   array[3][7],array[3][8],array[3][9],array[4][7],array[4][8],array[4][9],array[5][7],array[5][8],array[5][9],
                   array[3][4],array[3][5],array[3][6],array[4][4],array[4][5],array[4][6],array[5][4],array[5][5],array[5][6],
                   array[3][1],array[3][2],array[3][3],array[4][1],array[4][2],array[4][3],array[5][1],array[5][2],array[5][3],
                   array[0][7],array[0][8],array[0][9],array[1][7],array[1][8],array[1][9],array[2][7],array[2][8],array[2][9],
                   array[0][4],array[0][5],array[0][6],array[1][4],array[1][5],array[1][6],array[2][4],array[2][5],array[2][6],
                   array[0][1],array[0][2],array[0][3],array[1][1],array[1][2],array[1][3],array[2][1],array[2][2],array[2][3]);

            printf("\n\n\n-----Choose a number in block %d",user_num_j);

            win_check_2=WinCheck2(array);

            if(win_check_2==1)
            {
                if (i%2==0) printf("\n\n\n-----------------------Player 2 Wins----------------------",b);
                else printf("\n\n\n-----------------------Player 1 Wins----------------------",a);
                break;
            }


            //win_check_1=WinCheck1(array,user_num_i);

            if(WinCheck1(array,user_num_i)==1)
            {

                if (i%2==0)
                {
                    array[user_num_i][0]='2';
                    for (s=1;s<10;s++);
                    {
                        array[user_num_i][s]='+';
                    }
                }
                else
                {
                    array[user_num_i][0]='1';
                    for (s=1;s<10;s++);
                    {
                        array[user_num_i][s]='O';
                    }
                }
            }

            user_num_i=user_num_j;

        }                                                                                   //end of each round




        if (user_num_j==0 && i%2==0)                                                         //show the result when there is no winner
            printf("\n\n\n-------------This Game was ended by Player2.--------------");
        else if ( user_num_j==0 )
            printf("\n\n\n-------------This Game was ended by Player1.--------------");
        else if (win_check_2==0)
            printf("\n\n\n------------------This Game was a draw.-------------------");

        printf("\n\n----------------------Again?(y or n)----------------------\n\n\n");

        getchar();                                                                          //ask to continue or not
        scanf("%c",&exitchecker);
        while ( exitchecker!='n' && exitchecker!='N' && exitchecker!='y' && exitchecker!='Y' )
        {
            printf("\n\n    What? Enter y or Y to continue OR Enter n or N to Exit :");
            getchar();                                                                     //ask to continue or not
            scanf("%c",&exitchecker);
        }

        if ( exitchecker=='n' || exitchecker=='N' ) break ;

        i=1;

    }
    printf("\n\n-----------------------------------------------------------\n------------------------GOODBYE----------------------------\n-----------------------------------------------------------\n\n\n");
    return 0;
}



int WinCheck1 (char array[][10],int user_num_i)
{
    if(                                                                                    //check for winner in each block
        ( array[user_num_i][1]==array[user_num_i][2] && array[user_num_i][2]==array[user_num_i][3] && array[user_num_i][1]!=' ' ) ||
        ( array[user_num_i][4]==array[user_num_i][5] && array[user_num_i][5]==array[user_num_i][6] && array[user_num_i][4]!=' ' ) ||
        ( array[user_num_i][7]==array[user_num_i][8] && array[user_num_i][8]==array[user_num_i][9] && array[user_num_i][7]!=' ' ) ||
        ( array[user_num_i][1]==array[user_num_i][5] && array[user_num_i][5]==array[user_num_i][9] && array[user_num_i][1]!=' ' ) ||
        ( array[user_num_i][3]==array[user_num_i][5] && array[user_num_i][5]==array[user_num_i][7] && array[user_num_i][3]!=' ' ) ||
        ( array[user_num_i][1]==array[user_num_i][4] && array[user_num_i][4]==array[user_num_i][7] && array[user_num_i][1]!=' ' ) ||
        ( array[user_num_i][2]==array[user_num_i][5] && array[user_num_i][5]==array[user_num_i][8] && array[user_num_i][2]!=' ' ) ||
        ( array[user_num_i][3]==array[user_num_i][6] && array[user_num_i][6]==array[user_num_i][9] && array[user_num_i][3]!=' ' )  ) return 1;

    return 0;
}







int WinCheck2 (char array[][10])
{
    if(                                                                                    //check for final winner
        ( array[0][0]==array[1][0] && array[1][0]==array[2][0] && array[0][0]!=' ' ) ||
        ( array[3][0]==array[4][0] && array[4][0]==array[5][0] && array[3][0]!=' ' ) ||
        ( array[6][0]==array[7][0] && array[7][0]==array[8][0] && array[6][0]!=' ' ) ||
        ( array[0][0]==array[4][0] && array[4][0]==array[8][0] && array[0][0]!=' ' ) ||
        ( array[2][0]==array[4][0] && array[4][0]==array[6][0] && array[2][0]!=' ' ) ||
        ( array[0][0]==array[3][0] && array[3][0]==array[6][0] && array[0][0]!=' ' ) ||
        ( array[1][0]==array[4][0] && array[4][0]==array[7][0] && array[1][0]!=' ' ) ||
        ( array[2][0]==array[5][0] && array[5][0]==array[8][0] && array[2][0]!=' ' )  ) return 1;

    return 0;
}







int getscan ()
{
    char user_char[2];
    int user_num;

    do                                                                                //get block player choice
    {
        scanf("%s" , user_char);
        user_num = user_char[0];                                                      //now user_num is code ASCII
        while((user_num>57 || user_num<48) || (user_char[1]))                         //for incorrect choices
        {
            printf("\n    Incorrect input.Enter Again : ");
            scanf("%s" , user_char);
            user_num = user_char[0];
        }
        if (user_char[1]==NULL && user_num > 47 && user_num < 58 )
            user_num -= 48;

    }while(user_char[1]!=NULL || user_num  < 0 || user_num > 9 );
    return user_num ;
}
