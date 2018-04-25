#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1;
	int *pa=&a;
	int **ppa=&pa;
	 //printf("%d \n %p \n %p \n",a,*pa,**ppa); is se value to 1 hi ayi par ziada bytes mn ayi
	// printf("%d \n %d  \n %d  \n",a,*pa,**ppa);is se value to 1 ayi int mn 
	//printf("%d \n %d  \n %d  \n",a,pa,**ppa);//%d se frq nhn para laya wo a ka address hi hai pa likhny se pr hex format mn nhn
	//printf("%d \n %p  \n %d  \n",a,pa,**ppa); address laya pr hex format mn
//	printf("%d \n %p  \n %d  \n",&a,pa,**ppa); ek decimal mn ek hex mn aya hai
    //printf("%d \n %p  \n %d  \n",&a,pa,*ppa); do same ek alg
   // printf("%p \n %p  \n %p  \n",&a,pa,*ppa); 3non same
   //printf("%p \n %p  \n %p  \n",&a,&pa,*ppa); do mn a ka address bqi ek pa ka apna address
   //printf("%p \n %p  \n %p  \n",&a,&pa,ppa); nchy waly do ka same address
   printf("%p \n %p  \n %p  \n",&a,&pa,&ppa);//3no address agya hai
/*
    to declar pointer place *p=&a
    *p se value aygi a ki
    p se address ayega a ka
    &p se address ayega p 
    **pp=&p
    **pp se value aygi a ki
    *pp se value aygi p ki 
    pp se address ayega p ka
    &pp address ayega pp ka
    
    

*/
	 getch();
}
