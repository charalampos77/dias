#include <stdio.h> 

int main () {
	int x;
	int score;
	dias:
		score=0;
		printf ("posa paidia eixe o dias;\n");
		printf ("1)10\n2)30\n3)50\n4)100\n");
		scanf ("%d",&x);
		if  (x==4) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
	    
	    printf ("posa aderfia eixe o dias;\n");
		printf ("1)3\n2)5\n3)7\n4)10\n");
		scanf ("%d",&x);
		if  (x==2) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
		
		printf ("poia einai h mana tou dia;\n");
		printf ("1)rhea\n2)hra\n3)afroditi\n4)eleni\n");
		scanf ("%d",&x);
		if  (x==1) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }
		
	    printf ("pou menei o dia;\n");
		printf ("1)crhth\n2)parnitha\n3)olympo\n4)likabito\n");
		scanf ("%d",&x);
		if  (x==3) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }	
		
		 printf ("poio einai to oplo tou;\n");
		printf ("1)h triena\n2)o keraunos\n3)to spathi\n4)h aspida\n");
		scanf ("%d",&x);
		if  (x==2) {
		printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
	    }
		
		
		
		if (score==5) {
			printf ("proxoras parakato\n");
		}
		else {
			printf ("try a\n");
			goto dias;
		}
		
    return 0; 
}

 
