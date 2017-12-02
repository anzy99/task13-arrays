#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "Equality.h"



int InputArray(const char *FileName, int **m, int *n)
{int I,t,err=0;FILE *f;
 *m=NULL;*n=0;
 for(I=0;I<2;I++)
 {
  if(I==1&&*n>0)
   *m=(int*)malloc(*n*sizeof(int));
  *n=0;
  f=fopen(FileName,"r");
  if(f)
  {
   for(*n=0;fscanf(f,"%d",(I==0?&t:(*m)+(*n)))==1;(*n)++);
  }else {err=-1;break;}
  fclose(f);
 }
 
return err; 
}


int checkEquality (int * array,int elementsCount, int * result)
{
	int i,err=0;
	int answer=1;
	if (elementsCount!=0){
		for(i=0;i<(elementsCount-1);i++)
		{
			if(array[i]!=array[i+1])
			{
				answer=0;
				break;
			}
		}
	}

	if (answer==0)
		*result = 0;
	else 
		*result = 1;

	return err;
}
