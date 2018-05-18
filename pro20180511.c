#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void A();
void R();
void U();
int main() {
	
    int chioce;
	int d,student,e,grade;
	
	X: 
    printf("\n\n遊戲:(A)遊戲畫面(B)成績畫面(C)匯率轉換畫面(Q)離開選單，結束程式");
	printf("\n\n選擇遊戲: ");
	scanf("%d",&chioce);
	
    d=(chioce=getchar());
    switch(d)
	{
		case 'A':{ A();
			       break;
		         } 
		case 'B':{ R();
				    break;	}
	
		case 'C': {U();
			break;
		}

		case 'Q':{goto END;
			    break;		} 
	    default:{ printf(" 別鬧了 ");
			break;
		}
	}
    goto X;
    END:
	return 0;
}


