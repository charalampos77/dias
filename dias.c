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
		printf("correct");
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
		if (score==20) {
			printf ("proxoras parakato\n");
		}
		else {
			printf ("janaprospathise\n");
			goto dias;
		}
		
    return 0; 
}

 
