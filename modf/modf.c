/* modf example */
#include <stdio.h>      /* printf */
#include <math.h>       /* modf */

int main ()
{
  double param, fractpart, intpart, result, part, j;
  int i;

  param = 0.141519;
  fractpart = modf (param , &intpart);
  printf ("%f = %f + %f \n", param, intpart, fractpart);
  
  if(param!=0){
  	printf("sim\n");
  }else{
  	printf("nao\n");
  }
  
  
  
  
  
  
  
  //for(i=1; i>0; i++){
  	//param=fractpart*i;
  //	printf(" %f param \n", param);
//	result=modf(param, &intpart);
//	printf(" %f result\n", result);
 //	if(result== 0){
 //		i=-10;
//	  }
	  system("pause");
  //}
  return 0;
}
