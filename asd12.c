#include <time.h>
void R()
{   int d,student,i,grade;
	
	printf("��J�ǥͤH��: ");
    scanf("%d",&student);
	               
                   for(i=1;i<=student;i++)
	               {
	               	printf("��J�ǥͦ��Z: ");
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
	printf("��J�I���v:");
    scanf("%f",&d);
    printf("(�������x����J: 1  �x����������J: 2):");
    scanf("%d",&s);
    printf("�I���h��:");
    scanf("%f",&i);
	if (s=1){printf("%f,�������x��,%f",i,i*d);}
	else {	printf("%f,�x��������,%f\n",i,i/d);}	
}

void A()
{   srand(time(NULL));
    char b[5][16]={{"�ߥ�"},{"�y��"},{"�V�k��"},{"���U"},{"�V����"}};
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
        if(a[i]==1&&a[i+1]!=0||a[i]==3&&a[i+1]!=0) {printf("%s\n\n",b[a[i]]);printf("�L�k����!\n"); break;}
		else {printf("%s\n\n",b[a[i]]);}
		}
}
