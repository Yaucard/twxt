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
    printf("\n\n�C��:(A)�C���e��(B)���Z�e��(C)�ײv�ഫ�e��(Q)���}���A�����{��");
	printf("\n\n��ܹC��: ");
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
	    default:{ printf(" �O�x�F ");
			break;
		}
	}
    goto X;
    END:
	return 0;
}


