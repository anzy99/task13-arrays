#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "Equality.h"

int main(void)
{
 int err=0,countOfElements=0,answer;
 int *array;
 //err=ReadArray("data.txt",&array,&countOfElements);
 err=InputArray("data", &array, &countOfElements);
 if(err!=0)
  printf("Error while reading file!!!\n");
 else
  {	
	err=checkEquality (array,countOfElements,&answer);
	if (err==0)
	{
		if (answer==0) printf("Chisla ne ravni!!!");
		else printf("Chisla ravni!!!");
	}else{
		printf("Error!!!");
	}
  }
return err;
}
