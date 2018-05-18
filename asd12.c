#include <time.h>
void R()
{   int d,student,i,grade;
	
	printf("輸入學生人數: ");
    scanf("%d",&student);
	               
                   for(i=1;i<=student;i++)
	               {
	               	printf("輸入學生成績: ");
	                scanf("%d",&grade);
	                
	                if(grade>=90) {printf("A+\n");}
					else if(grade>=80&&grade<=89){	printf("A\n");}
					else if(grade>=70&&grade<=79) {printf("B\n");} 
					else if(grade>=60&&grade<=69) {printf("C\n");} 
					else {printf("D\n");} 
					}
}

void U()
{   int s,grade;
	float i,d;
	printf("輸入兌換率:");
    scanf("%f",&d);
    printf("(美金換台幣輸入: 1  台幣換美金輸入: 2):");
    scanf("%d",&s);
    printf("兌換多少:");
    scanf("%f",&i);
	if (s=1){printf("%f,美金換台幣,%f",i,i*d);}
	else {	printf("%f,台幣換美金,%f\n",i,i/d);}	
}

void A()
{   srand(time(NULL));
    char b[5][16]={{"立正"},{"稍息"},{"向右轉"},{"坐下"},{"向後轉"}};
    int a[10]={0},i;
	    for(i=0;i<=9;i++)
        {
         a[i]=rand()%5;
		}
		for(i=0;i<=9;i++)
        {
        printf("%d ",a[i]+1);
		}
		printf("\n");
		for(i=0;i<=9;i++)
        {
        if(a[i]==1&&a[i+1]!=0||a[i]==3&&a[i+1]!=0) {printf("%s\n\n",b[a[i]]);printf("無法執行!\n"); break;}
		else {printf("%s\n\n",b[a[i]]);}
		}
}
