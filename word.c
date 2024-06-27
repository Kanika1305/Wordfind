
#include<stdio.h>
#include<string.h>
int main()
{
char name[20] ,gp4[5];
int mode;
printf("-------------------------------------------------------------------\n");
printf("                    Welcome To  WordFind !\n");
printf("                   _______________________\n");
printf("<<Enter your name>>\n");
scanf("%s",name);
printf("Hi %s ^_^!\n<<Try to make as many words possible :)>>\n",name);
again:
printf("Select your MODE: EASY(1)|MEDIUM(2)|HARD(3)\n");
scanf("%d",&mode);
printf("---------------------------GAME STARTS----------------------------------------\n");
if(mode==1){
    char easy[4][4]={"DOG","GOD","DO","GO"};
    char guess1[4] ;
    int c=0;char gp[5];
    printf("O,G,D\n");
    g:
    
    printf("Guess the word:\n");
    scanf("%s",guess1);
    for(int i=0;i<4;i++)
    {        
        if(strcmp(guess1,easy[i])==0){
            c++; 
            strcpy(easy[i],"\0");
         printf("**CORRECT**\n");
         printf("You've guessed %i/4 words\n",c);
         if(c==4) goto lvl2;
         goto g;
        }  
    }
printf("*NOT a Valid Word*/*Already Guessed*\n");
printf("<<Wanna Give up.........? (YES/NO)?>>\n"); 
scanf("%s",gp);
if(strcmp(gp,"YES")==0||strcmp(gp,"yes")==0) goto giveup; else goto g;
lvl2 : 
printf("YOU HAVE CLEARED THIS STAGE!!\n");
}
if(mode==2)
{
   char medium[7][5]={"WORD","ROW","ROD","DOR","DO","OR"};
    char guess2[4] ;
    int c2=0;char gp2[5];
    printf("W,D,O,R\n");
    g2:
    printf("Guess the word:\n");
    scanf("%s",guess2);
    for(int i=0;i<7;i++)
    {        
        if(strcmp(guess2,medium[i])==0){
            c2++; 
            strcpy(medium[i],"\0");
         printf("**CORRECT**\n");
         printf("You've guessed %i/6 words\n",c2);
         if(c2==6) goto lvl3;
         goto g2;
        }  
    }
printf("*NOT a Valid Word*/*Already Guessed*\n");
printf("<<Wanna Give up?......... (YES/NO)?>>\n"); 
scanf("%s",gp2);
if(strcmp(gp2,"YES")==0||strcmp(gp2,"yes")==0) goto giveup; else goto g2;
lvl3 : 
printf("YOU HAVE CLEARED THIS STAGE!!\n"); 
}
if(mode==3)
{
 char hard[13][6]={"PRIZE","RIPE","PER","RIP","PIE","ZIP","ERP","PERI","PIER","RIZ","REP","PRE"};
    char guess3[5] ;
    int c3=0;char gp3[5];
    printf("P,Z,I,E,R\n");
    g3:
    
    printf("Guess the word:\n");
    scanf("%s",guess3);
    for(int i=0;i<12;i++)
    {        
        if(strcmp(guess3,hard[i])==0){
            c3++; 
            strcpy(hard[i],"\0");
         printf("**CORRECT**\n");
         printf("You've guessed %i/12 words\n",c3);
         if(c3==12) goto lvl4;
         goto g3;
        }  
    }
printf("*NOT a Valid Word*/*Already Guessed*\n");
printf("<<Wanna Give up.........? (YES/NO)?>>\n"); 
scanf("%s",gp3);
if(strcmp(gp3,"YES")==0||strcmp(gp3,"yes")==0) goto giveup; else goto g3;
lvl4 : 
printf("YOU HAVE CLEARED THIS STAGE!!\n"); 
}  
giveup:
printf("THANKS FOR PLAYING ^_^!\n");
printf("<<Do you wanna play again?.....(YES/NO)?>>\n");
scanf("%s",gp4);
            printf("\033[2J");

if(strcmp(gp4,"YES")==0||strcmp(gp4,"yes")==0) goto again; else printf("Hope you enjoyed!\n");
return 0;
}
