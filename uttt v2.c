//Matin Afkhami

#include <stdio.h>
#include <stdlib.h>

int WinCheck1 (char array[][9],int);
int WinCheck2 (char array[][9]);
int all2numGet ();

int main(){
    int user_num_i,user_num_j,un_i,win_check1=0,win_check2=0;
    int aWin=0,bWin=0,abest=0,bbest=0;
    char array[9][9],a[20],b[20],exitchecker;
    printf("\n       \332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\267\n       \263 Ultra Tic Tac Toe \272\n       \324\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\n\n\304\304\304\304\266 Enter first player name : ");
    gets(a);
    system("cls");
    printf("\n       \332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\267\n       \263 Ultra Tic Tac Toe \272\n       \324\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\n\n\304\304\304\304\266 Enter second player name : ");
    gets(b);
    while (1){                                                                              //game runs in an unlimited cycle
        int i,s,t;                                                                          //will reset array to space before each round
        for(s=0;s<9;s++){
            for (t=0;t<9;t++){
                array[s][t]=' ';
            }
        }
        system("cls");
        printf("\n\304\304\304\304\266 Choose a block to start :\n ");
        printf("\n\n                                        \334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\n                                        \333\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333\260\260\260\263 7 \263\260\260\260\272\260\260\260\263 8 \263\260\260\260\272\260\260\260\263 9 \263\260\260\260\333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\333\n                                        \333\315\315\315\330\315\315\315\330\315\315\315\316\315\315\315\330\315\315\315\330\315\315\315\316\315\315\315\330\315\315\315\330\315\315\315\333\n                                        \333\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333\260\260\260\263 4 \263\260\260\260\272\260\260\260\263 5 \263\260\260\260\272\260\260\260\263 6 \263\260\260\260\333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\333\n                                        \333\315\315\315\330\315\315\315\330\315\315\315\316\315\315\315\330\315\315\315\330\315\315\315\316\315\315\315\330\315\315\315\330\315\315\315\333\n                                        \333\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333\260\260\260\263 1 \263\260\260\260\272\260\260\260\263 2 \263\260\260\260\272\260\260\260\263 3 \263\260\260\260\333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\272\260\260\260\263\260\260\260\263\260\260\260\333\n                                        \337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\n\n\304\304\304\304\266 %s(O) : ",a);
        user_num_i=all2numGet()-1;
        if (user_num_i==-1) break;

        for(i=1;i<82;i++){                                                                  //each round starts here (a draw game will takes 81 turns)
            system("cls");
            printf("\n\304\304\304\304\266 Choose a number in block %d",user_num_i+1);
            printf("\n\n\n                                        \334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\n                                        \333 %c \263 %c \263 %c \272 %c \263 %c \263 %c \272 %c \263 %c \263 %c \333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333 %c \263 %c \263 %c \272 %c \263 %c \263 %c \272 %c \263 %c \263 %c \333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333 %c \263 %c \263 %c \272 %c \263 %c \263 %c \272 %c \263 %c \263 %c \333\n                                        \333\315\315\315\330\315\315\315\330\315\315\315\316\315\315\315\330\315\315\315\330\315\315\315\316\315\315\315\330\315\315\315\330\315\315\315\333\n                                        \333 %c \263 %c \263 %c \272 %c \263 %c \263 %c \272 %c \263 %c \263 %c \333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333 %c \263 %c \263 %c \272 %c \263 %c \263 %c \272 %c \263 %c \263 %c \333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333 %c \263 %c \263 %c \272 %c \263 %c \263 %c \272 %c \263 %c \263 %c \333\n                                        \333\315\315\315\330\315\315\315\330\315\315\315\316\315\315\315\330\315\315\315\330\315\315\315\316\315\315\315\330\315\315\315\330\315\315\315\333\n                                        \333 %c \263 %c \263 %c \272 %c \263 %c \263 %c \272 %c \263 %c \263 %c \333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333 %c \263 %c \263 %c \272 %c \263 %c \263 %c \272 %c \263 %c \263 %c \333\n                                        \333\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\327\304\304\304\305\304\304\304\305\304\304\304\333\n                                        \333 %c \263 %c \263 %c \272 %c \263 %c \263 %c \272 %c \263 %c \263 %c \333\n                                        \337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\n\n\304\304\304\304\266 ",

                   array[6][6],array[6][7],array[6][8] ,array[7][6],array[7][7],array[7][8] ,array[8][6],array[8][7],array[8][8],
                   array[6][3],array[6][4],array[6][5] ,array[7][3],array[7][4],array[7][5] ,array[8][3],array[8][4],array[8][5],
                   array[6][0],array[6][1],array[6][2] ,array[7][0],array[7][1],array[7][2] ,array[8][0],array[8][1],array[8][2],

                   array[3][6],array[3][7],array[3][8] ,array[4][6],array[4][7],array[4][8] ,array[5][6],array[5][7],array[5][8],
                   array[3][3],array[3][4],array[3][5] ,array[4][3],array[4][4],array[4][5] ,array[5][3],array[5][4],array[5][5],
                   array[3][0],array[3][1],array[3][2] ,array[4][0],array[4][1],array[4][2] ,array[5][0],array[5][1],array[5][2],

                   array[0][6],array[0][7],array[0][8] ,array[1][6],array[1][7],array[1][8] ,array[2][6],array[2][7],array[2][8],
                   array[0][3],array[0][4],array[0][5] ,array[1][3],array[1][4],array[1][5] ,array[2][3],array[2][4],array[2][5],
                   array[0][0],array[0][1],array[0][2] ,array[1][0],array[1][1],array[1][2] ,array[2][0],array[2][1],array[2][2]);

            if(win_check2==1) break;
            if (i%2==0){                                                                    //will print second player name at his turn like this :    -----| name2(+)
                printf("%s(X) : ",b);
            }
            else{                                                                           //will print first player name at his turn like this :    -----| name1(O)
                printf("%s(O) : ",a);
            }
            while (array[user_num_i][8]==-79){
                printf("\n    \272 This block is full. Please enter another block (then your choice) to continue :  ");
                user_num_i=all2numGet()-1;
                if (user_num_i==-1) break;
                printf("    \272 ");
            }
            user_num_j=all2numGet()-1;

            while ((array[user_num_i][user_num_j]=='X') || (array[user_num_i][user_num_j]=='O')){
                printf("    \272 Duplicate choice. Enter Again : ");
                user_num_j=all2numGet()-1;
            }
            if (user_num_j==-1) break;
            array[user_num_i][user_num_j] = (i%2==0) ? 'X' : 'O' ;                        //change array as user input

            win_check1=WinCheck1(array,user_num_i);                                       //to prevent  multiple calculation in next use
            if(win_check1==1){
                if (i%2==0){
                    for (s=0;s<9;s++){
                        array[user_num_i][s]=177;
                    }
                    array[user_num_i][4]='X';
                }
                else{
                    for (s=0;s<9;s++){
                        array[user_num_i][s]=177;
                    }
                    array[user_num_i][4]='O';
                }
            }
            win_check2=WinCheck2(array);
            user_num_i=user_num_j;
        }
                                                                                            //end of each round
        if (user_num_j==0){
            if (i%2==0)printf(" This Game was ended by %s.\n    \272",a);
            else printf(" This Game was ended by %s.\n    \272 ",b);
        }
        else if (win_check2==0)
            printf(" This game was a draw.\n    \272");
        else if(win_check2==1){
            if (i%2==0){
                printf("%s Wins.\n    \272",a);
                aWin++;
                if (i>abest) abest=i;
            }
            else{
                printf("%s Wins.\n    \272",b);
                bWin++;
                if (i>bbest) bbest=i;
            }
        }
        printf("\n    \272 Player 2: %-20s Total Wins : %d  /  Best Record(minimum choices) : %d \n    \272 Player 1: %-20s Total Wins : %d  /  Best Record(minimum choices) : %d\n    \272 \n    \272 ",a,aWin,abest,b,bWin,bbest);
        printf("\n    \272 Continue?\n    \272 ");                                            //ask to continue or not
        getchar();
        scanf("%c",&exitchecker);
        while ( exitchecker!='n' && exitchecker!='N' && exitchecker!='y' && exitchecker!='Y' ){
            printf("\n    \272 What? Enter y or Y to continue OR Enter n or N to Exit :");
            getchar();
            scanf("%c",&exitchecker);
        }
        if( exitchecker=='n' || exitchecker=='N' ) break ;
        win_check1=0;
        win_check2=0;
    }
    printf("\n\n-----------------------------------------------------------\n------------------------GOODBYE----------------------------\n-----------------------------------------------------------\n\n\n");
    return 0;
}
inline int WinCheck1 (char array[][9],int user_num_i)                                    //check for winner in each block
{
    if( ( array[user_num_i][0]==array[user_num_i][1] && array[user_num_i][1]==array[user_num_i][2] && array[user_num_i][0]!=' ' ) ||
        ( array[user_num_i][3]==array[user_num_i][4] && array[user_num_i][4]==array[user_num_i][5] && array[user_num_i][3]!=' ' ) ||
        ( array[user_num_i][6]==array[user_num_i][7] && array[user_num_i][7]==array[user_num_i][8] && array[user_num_i][6]!=' ' ) ||
        ( array[user_num_i][0]==array[user_num_i][4] && array[user_num_i][4]==array[user_num_i][8] && array[user_num_i][0]!=' ' ) ||
        ( array[user_num_i][2]==array[user_num_i][4] && array[user_num_i][4]==array[user_num_i][6] && array[user_num_i][2]!=' ' ) ||
        ( array[user_num_i][0]==array[user_num_i][3] && array[user_num_i][3]==array[user_num_i][6] && array[user_num_i][0]!=' ' ) ||
        ( array[user_num_i][1]==array[user_num_i][4] && array[user_num_i][4]==array[user_num_i][7] && array[user_num_i][1]!=' ' ) ||
        ( array[user_num_i][2]==array[user_num_i][5] && array[user_num_i][5]==array[user_num_i][8] && array[user_num_i][2]!=' ' )  ) return 1;

    return 0;
}
inline int WinCheck2 (char array[9][9])                                                //check for final winner
{
    if( ( array[0][4]==array[1][4] && array[1][4]==array[2][4] && array[0][1]==-79) ||
        ( array[3][4]==array[4][4] && array[4][4]==array[5][4] && array[3][1]==-79) ||
        ( array[6][4]==array[7][4] && array[7][4]==array[8][4] && array[6][1]==-79) ||
        ( array[0][4]==array[4][4] && array[4][4]==array[8][4] && array[0][1]==-79) ||
        ( array[2][4]==array[4][4] && array[4][4]==array[6][4] && array[2][1]==-79) ||
        ( array[0][4]==array[3][4] && array[3][4]==array[6][4] && array[0][1]==-79) ||
        ( array[1][4]==array[4][4] && array[4][4]==array[7][4] && array[1][1]==-79) ||
        ( array[2][4]==array[5][4] && array[5][4]==array[8][4] && array[2][1]==-79)  ) return 1;

    return 0;
}
int all2numGet ()
{
    char user_char[2];
    int user_num;
    do{
        scanf("%s" , user_char);
        user_num = user_char[0];                                                     //now user_num is code ASCII
        while((user_num>57 || user_num<48) || (user_char[1])){                       //for incorrect choices
            printf("    \272 Incorrect input.  Enter Again : ");
            scanf("%s" , user_char);
            user_num = user_char[0];
        }
        if (user_char[1]==NULL && user_num > 47 && user_num < 58 )
            user_num -= 48;
    }while(user_char[1]!=NULL || user_num  < 0 || user_num > 9 );
    return user_num ;
}
