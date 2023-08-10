#include<stdio.h>
#include<time.h>         //for calculating speed & displaying current time
#include<windows.h>      //for gotoxy func
#include<conio.h>        //for bg color,cleaer screen etc
#include<stdlib.h>
#include<string.h>       
#include<unistd.h>      //for current time
void gotoxy(int x,int y);  //co ordinate function
void intro();              //Intro theme
void start();             //
void abtlevel();         //level description
void level1();           //easy level
void level2();
void level3();
//void getscore(int score,int speed,char rank);
void scoreboard();
void us();                 
void help();
int a=0,b=0;   //one time call
int main()
{
	system("cls");
	system("color 80");
	if(a==0)
	{
		intro();
	}
	a++;
	int i=0;
    char name[30],pass[30],ch;
    time_t t;
    time (&t);
	system("color 30");
	gotoxy(30,3);
	printf("%s",ctime(&t));
	gotoxy(30,4);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
	gotoxy(30,5);
	printf("--------------------TYPE ATTACK----------------------");
	gotoxy(30,6);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
//	gotoxy(30,7);
//	if(b==0)
//	{
//    	printf("|     Enter your Name:                              |");
//    	gotoxy(30,8);
//    	printf("|     Enter password:                               |");
//    	gotoxy(56,7);
//	    gets(name);
//	    gotoxy(56,8);
//	    gets(pass);
//	    FILE *fp = fopen("info.txt","a");
//	    fprintf(fp,"%s ",name);
//	    fclose(fp);
//	}
//	else
//	{
//		printf("|                                                   |");
//		gotoxy(30,8);
//		printf("|                                                   |");
//	}
//	b++;
	gotoxy(30,9);
	printf("|                                                   |");
	gotoxy(30,10);
	printf("|                                                   |");
	gotoxy(30,11);
	printf("|                                                   |");
	gotoxy(30,12);
	printf("|                                                   |");
	gotoxy(30,13);
	printf("|                                                   |");
	gotoxy(30,14);
	printf("|                                                   |");
	gotoxy(30,15);
	printf("|                                                   |");
	gotoxy(30,16);
	printf("|                                                   |");
	gotoxy(30,17);
	printf("|                                                   |");
	gotoxy(30,18);
	printf("|                                                   |");
	gotoxy(30,19);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
	
	gotoxy(36,10);
	printf("           Main Menu");
	gotoxy(37,11);
	printf("1. Start the Game");
	gotoxy(37,12);
	printf("2. Scoreboard");
	gotoxy(37,13);
	printf("3. Information of levels");
	gotoxy(37,14);
	printf("4. About us");
	gotoxy(37,15);
	printf("5. Help");
	gotoxy(37,16);
	printf("0. Exit");
	gotoxy(37,17);
	printf("Select the Any Option ");
	a++;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				system("cls");
				start();
				break;
			}
		case 2:
		    {
		    	system("cls");
		    	scoreboard();
		    	break;
	    	}
		case 3:
	    	{
	    		system("cls");
                abtlevel();
				break;			
			}
		case 4:
	    	{
	    		system("cls");
	    		us();
	    		break;
			}
		case 5:
		    {
                system("cls");
                help();
				break;			
			}
		case 0:
		    {
			    break;       
			}					
	}
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void intro()
{
	int i,j,k;
	int x1 = 9,x2 = 91;
	for(i=x1 ; i<x2 ; i++)
	{
		gotoxy(x1+i,5);
		printf("%c",223);
		usleep(2000);       
	}
	int y1 = 2,y2 = 16; 
	for(i=y1 ; i<y2 ; i++)
	{
		gotoxy(98,y1+i);
		printf("%c",219);
		usleep(2000);
	}
	x2 = 82;
	for(i=0 ; i<x2 ; i++)
	{
		gotoxy(98-i,17);
		printf("%c",223);
		usleep(2000);       
	}
	y1 = -5;
	for(i=-22 ; i<y1 ; i++)
	{
		gotoxy(17,y1-i);
		printf("%c",219);
		usleep(2000);
		if(i>-11)
		{
			break;
		}
	}
        gotoxy(20,7);
        usleep(10000);
        printf("_______   _______ _____     _____      _____  ______    _____     === ||  //");
        gotoxy(20,8);
        usleep(100000);
        printf("|_   _\\ \\ / / ___ \\  ___|   /    \\    |_   _||_   _|   /    \\    //   || //");
        gotoxy(20,9);
        usleep(100000);
        printf("  | |  \\ V /| |_/ / |__    ||     ||    | |    | |    ||     || || 	  ||<<");
		gotoxy(20,10);
		usleep(100000);  
        printf("  | |   \\ / |  __/|  __|   ||=====||    | |    | |    ||=====|| || 	  || \\\\\	");
		gotoxy(20,11);
		usleep(100000);  
        printf("  | |   | | | |   | |___   ||     ||    | |    | |    ||     ||  \\\\   ||  \\\\\	");
        gotoxy(20,12);
        usleep(100000);
        printf("  \\_/   \\_/ \\_|   \\____/   ||     ||    \\_/ \   \\_/ \   ||     ||   === ||   \\\\\	");  
        printf("\n\n\n");
        gotoxy(35,25);
        printf("Press any key to continue.......\n");
        getch();
    system("cls");
}

void start()
{
	int level,choice,b=0,i;
	char	name[100];
	char	pass[8];
	//-------------------------------------------------------------//
	gotoxy(30,7);
	if(b==0)
	{
    	printf("|     Enter your Name:                              |");
    	gotoxy(30,8);
    	printf("|     Enter 6-password:                               |");
    	gotoxy(56,7);
    	fflush(stdin);
	    gets(name);
	    gotoxy(56,8);
	    for(i=0;i<6;i++)
	    {
	    	fflush(stdin);
	    	pass[i]=getch();
	    	printf("*");
		}
	    FILE *fp = fopen("info.txt","a");
	    fprintf(fp,"%s ",name);
	    fclose(fp);
	}
	else
	{
		printf("|                                                   |");
		gotoxy(30,8);
		printf("|                                                   |");
	}
	b++;
	///----------------------------------------------------------------///
	system("cls");
	gotoxy(25,5);
	printf("Select game level,If you haven't played before'We advise you to go back to mainmenu and");
	gotoxy(25,6);
	printf("have a look at level section to have brief overview of what you are about to expirience!");
	gotoxy(25,7);
	printf("Press 1 if you want to go to main menu");
	gotoxy(25,8);
	printf("Press 2 if you want to continue");
	gotoxy(75,7);
	scanf("%d",&choice);
	if(choice==1)
	{
		system("cls");
		main();
	}
    else
    {
    	system("cls");
	    gotoxy(40,5);
	    printf("Select level: 1 , 2 , 3");
	    gotoxy(45,7);
	    scanf("%d",&level);
    	system("cls");

    	if(level==1)
    	{
    		system("cls");
     	    level1();	
	    }
	    if(level==2)
	    {
	    	system("cls");
	    	level2();
		}
		if(level==3)
		{
			system("cls");
			level3();
		}
	}
}

void level1()
{
	int timespent=0,speed,score=0,chances=5,i=0,count=0;
	char let;
	clock_t begin;
	begin=clock();
	time_t t;
	while(1 && i<30)
	{
	    timespent=(int)(clock()-begin)/CLOCKS_PER_SEC;
	    srand(time(0));
	    fflush(stdin);
		fflush(stdin);
   	    int c = rand() % (122-97+1)+97;
    	gotoxy(30,3);
    	printf("%s",ctime(&t));
    	gotoxy(30,4);
     	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    	 gotoxy(30,5);
    	printf("--------------------TYPE ATTACK----------------------");
    	gotoxy(30,6);
    	printf("+++++++++++++  TIME SPENT : %d        +++++++++++++",timespent);
    	gotoxy(30,7);
    	printf("|                                                   |");
    	gotoxy(30,8);
    	printf("|          Type the following characters            |");
    	gotoxy(30,9);
    	printf("|                   -----------                     |");
    	gotoxy(30,10);
        printf("|                   |   %c     |                     |",c); 
    	gotoxy(30,11);
    	printf("|                   -----------                     |");
    	gotoxy(30,12);
    	printf("|                                                   |");
    	gotoxy(30,13);
    	printf("|                                                   |");
    	gotoxy(30,14);
    	printf("|                                                   |");
    	gotoxy(30,15);
    	printf("|                                                   |");
    	gotoxy(30,16);
    	printf("|                                                   |");
    	gotoxy(30,17);
    	printf("|                                                   |");
    	gotoxy(30,18);
    	printf("|              chances remaining: %d                 |",chances);
    	gotoxy(30,19);
    	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    	gotoxy(57,10);
    	//scanf(" %c",&let);
    	let=getche();
    	if(let==c)
   	    { 
	    	count++;
    		score=score+5;
    	}
    	else
     	{
	    	score--;
	    	Beep(1400,500);
	    	chances--;
	    	if(chances==0)
	    	{
	    		break;
	    	}
	    }
	    system("cls");
	    i++;
    }
    char rank[10];
    speed=(count*60)/timespent;
    system("cls");
    gotoxy(33,10);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    gotoxy(33,11);
    printf("|                   Your score is %d                  |",score);
    gotoxy(33,12);
    printf("|             You typed %d words per minute             |",speed);
    gotoxy(33,13);
    printf("|                You spent %d seconds                  |",timespent);
    gotoxy(33,14);
    FILE *pt=fopen("info.txt","a");
	fprintf(pt,"LEVEL1\t%d\n",score);
	fclose(pt);
	int choice;
	gotoxy(33,20);
	printf("Press any key to continue:\n");
	//getscore(count,timespent);
	gotoxy(33,18);
	getch();
	main();
}

void level2()
{
	int limit;
	srand(time(0));
	int count=0,i=0,j,score=0,k=0;
	char ch[100],let;
	for(i=0 ; i<110 ; i++)
	{
		int c = rand() % (122-97+1) + 97;
		ch[i] = c;
	}
	int timespent;
	clock_t begin;
	gotoxy(35,10);
	printf("Choose time limit:(In seconds)\n");
	gotoxy(36,13);
	scanf("%d",&limit);
	int remaining=limit;
	i=0;
	timespent=0;
	begin=clock();
	while(i<=102)
	{
	    timespent=(int)(clock()-begin)/CLOCKS_PER_SEC;
		if(remaining<=0)
		{
			break;
		}
		if(i==107)
		{
			break;
		}
        system("cls");
	    gotoxy(30,4);
	    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++"); 
        gotoxy(30,5);
        printf("--------------------TYPE ATTACK----------------------");
        gotoxy(30,6);
        printf("+++++  TIME REMAINING : %d    TIME SPENT : %d ++++++",remaining,timespent);
        gotoxy(30,7);
        printf("|          EMPTY THE BOX AS FAST AS YOU CAN!        |");
        gotoxy(30,8);
        printf("|---------------------------------------------------|");
        gotoxy(30,9);
        printf("| %c %c    %c  %c   %c   %c  %c  %c    %c%c   %c     %c%c   %c    |",ch[0],ch[1],ch[2],ch[3],ch[4],ch[5],ch[6],ch[7],ch[8],ch[9],ch[10],ch[11],ch[12],ch[13]);
        gotoxy(30,10);
        printf("|   %c %c  %c%c  %c  %c   %c  %c  %c%c     %c   %c    %c %c   %c %c |",ch[55],ch[34],ch[14],ch[15],ch[16],ch[17],ch[18],ch[19],ch[20],ch[21],ch[22],ch[23],ch[24],ch[25],ch[26],ch[88]); 
        gotoxy(30,11);
        printf("|%c %c    %c%c%c    %c  %c   %c   %c    %c    %c    %c     %c   %c|",ch[81],ch[27],ch[28],ch[29],ch[30],ch[31],ch[32],ch[33],ch[34],ch[35],ch[36],ch[37],ch[38]);
        gotoxy(30,12);
        printf("|   %c %c  %c %c %c  %c   %c%c%c   %c      %c%c    %c   %c  %c   %c |",ch[89],ch[9],ch[39],ch[40],ch[41],ch[42],ch[43],ch[44],ch[45],ch[46],ch[47],ch[48],ch[49],ch[50],ch[51],ch[52]);
        gotoxy(30,13);
        printf("|  %c %c %c %c %c      %c   %c    %c    %c    %c      %c%c  %c   |",ch[55],ch[67],ch[79],ch[53],ch[54],ch[55],ch[56],ch[57],ch[58],ch[59],ch[60],ch[61]);
        gotoxy(30,14);
        printf("|  %c %c %c   %c  %c  %c %c%c    %c %c %c   %c    %c    %c  %c  %c  |",ch[94],ch[93],ch[96],ch[45],ch[62],ch[63],ch[64],ch[65],ch[66],ch[67],ch[68],ch[69],ch[70],ch[71],ch[72],ch[73]);
        gotoxy(30,15);
        printf("| %c    %c  %c %c %c %c %c   %c %c   %c  %c  %c %c  %c%c%c  %c %c  %c |",ch[4],ch[43],ch[99],ch[89],ch[12],ch[0],ch[74],ch[75],ch[76],ch[77],ch[78],ch[79],ch[80],ch[81],ch[82],ch[83],ch[84],ch[85],ch[86],ch[87]);
   	    gotoxy(30,16);
   	    printf("|                    ----------                     |");
        gotoxy(30,17);
        printf("|                   {           }                   |");
        gotoxy(30,18);
        printf("|                    -----------                    |");
        gotoxy(30,19);
        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    
        //107 are words in this box
        gotoxy(55,17);
        let = getche();       //lower case letters only!!
    	for(j=0 ; j<=107 ; j++)
        {   	
        	if(let==ch[j])
        	{
        		count++;
        		ch[j] = ' ';
				break;    
    		}
    	}
    	remaining = limit - timespent;
    	i++;
    	system("cls");
	}
	gotoxy(33,15);
	int choice,speed;
	gotoxy(33,10);
	if(remaining==0 && i!=107)
	{
		printf("OOPS!You couldnt empty box in given time!\n");
	}
	if(i==107)
	{
		printf("Congratulations!You won!");
		gotoxy(33,11);
		printf("Wanna Play again?\n");
	}
	speed=(count*60)/timespent;
	gotoxy(33,12);
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    gotoxy(33,13);
    printf("|                   Your score is %d                  |",count);
    gotoxy(33,14);
    printf("|                   Your speed was %d                 |",speed);
	gotoxy(33,17);
	FILE *p=fopen("info.txt","a");
	fprintf(p,"LEVEL2\t%d\n",count);
	fclose(p);
	printf("Press any key to continue:\n");
	gotoxy(33,18);
	getch();
	main();
}

void level3()
{
    int	j,i,x,c,b=0,rng=0,z=3,k=0,score=0;
	char a,key;
    srand(time(0));
    while(rng!=3)
    {
		srand(time(0));
        z=(rand()%(52-1+1))+1;
        a=(rand()%(122-97+1))+97;
        j=0;
        while(!kbhit())
	    {
			for(i=0;i<j;i++)
			{
				printf("\n");
			}
			for(k=0;k<z;k++)
			{
				printf(" ");
			}
			printf("%c",a);		
		    Sleep(150);
			system("cls");
			if(j==10)
			{
				break;
			}
			j++;
	    }
    	if(j==10)
    	{
    		key=0;
    	}
    	else
    	{
    	key = getch();
    	}
       if(key == a)
       {
    		score++;
       }
     	else
        {  
        	rng++;
        	Beep(1000,300);
	    }
    }
//	gotoxy(30,20);
    printf("YOUR	SCORE	IS	%d",score);
    FILE *file = fopen("info.txt","a");
	fprintf(file,"LEVEL3\t%d\n",score);
	fclose(file);
    printf("\n\nPress any key to continue:\n");
    getch();
    main();
}

void abtlevel()
{
	printf("***************************************\n");
	printf("*                LEVEL 1              \n");
	printf("*                 EASY                \n");
    printf("* Following are the rules             \n");
    printf("*-> Alphabets (a-z) will be generated \n");
    printf("*->  There will be 5 chances          \n");
    printf("*-> For 1 correct choice +5 score     \n");
    printf("*-> For 1 wrong choice -1 score       \n");
 	printf("*-> You will be given 30 alphabets    \n");
		
	printf("******************************************\n");
	printf("*                LEVEL 2                 \n");
	printf("*                NORMAL                  \n");
    printf("* Following are the rules                \n");
    printf("*-> Random characters will be generated  \n");
    printf("*->all over the box and you will be givenn\n");
    printf("*-> a certain time which will be obviously selected\n");
    printf("*-> by you,You will have to type all the letters\n");
 	printf("*-> correctly in the given time!\n");	
 	
	printf("***************************************\n");
	printf("*                LEVEL 3              \n");
	printf("*                 HARD                \n");
    printf("* Following are the rules             \n");
    printf("*-> Random alphabets will glide down  \n");
    printf("*-> the screen and you will have to   \n");
    printf("*-> the alphabet before it reaches its \n");
    printf("*-> limit!There will be 3 lives        \n");

	gotoxy(60,20); 
	printf("press any key to continue\n");
	gotoxy(60,21);
	getch();
	system("cls");
	main();	
}
void help()
{
	gotoxy(30,4);
	printf("=============================================================");
	gotoxy(30,5);
	printf("||                                                         ||");
	gotoxy(30,6);
	printf("||    The game is all about improving your typing speed!   ||");
	gotoxy(30,7);
	printf("||      THE FASTER YOU TYPE HIGHER YOUR SCORE IS!!         ||");
	gotoxy(30,8);
	printf("||  Basically Random characters will be appeared on your   ||");
	gotoxy(30,9);  
	printf("||  screen and you have to type them correctly,You can     ||");
	gotoxy(30,10);
	printf("||  set level according from 'Level' sectionto your desire ||");
	gotoxy(30,11);
	printf("||                      and enjoy!!                        ||");
	gotoxy(30,12);
	printf("=============================================================");
    getch();
    system("cls");
    main();
	
}

void us()
{
	gotoxy(30,4);
	printf("=============================================================");
	gotoxy(30,5);
	printf("||                                                         ||");
	gotoxy(30,6);
	printf("||                                                         ||");
	gotoxy(30,7);
	printf("||        The game is 'Type Attack' Developed By:          ||");
	gotoxy(30,8);
	printf("||                Hassan Ali [22K-4637]                    ||");
	gotoxy(30,9);  
	printf("||                Ayan Aslam [22K-4628]                    ||");
	gotoxy(30,10);
	printf("||               Jayant Kumar [22K-4351]                   ||");
	gotoxy(30,11);
	printf("||                                                         ||");
	gotoxy(30,12);
	printf("=============================================================");
	gotoxy(30,15);
	printf("press any key to continue:\n");
	gotoxy(30,16);
	getch();
	system("cls");	
    main();
}

void scoreboard()
{
	FILE *fp;
	fp = fopen("info.txt","r");
	char c;
	//c = fgetc(fp);
	printf("NAMES  LEVEL  SCORE\n\n");
	while(!feof(fp))
	{
		c = fgetc(fp);
		printf("%c",c);
	}
	printf("\n\nPress any key to continue:\n");
	getch();
	system("cls");
	main();
}
