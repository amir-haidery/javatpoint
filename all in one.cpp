#include<stdio.h>
#include<stdlib.h>

//int main()
//{
// float m1,m2,m3,m4,m5,per,total;
// char grade;
// printf("enter marks of five subject\n");
// scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
// 
// total=m1+m2+m3+m4+m5;
// per=total/5;
// 
// if(per>=85)
//    grade='A';
//    else if(per>=75)
//    grade='B';
//    else if(per >=65)
//    grade='C';
//    else if(per >=55)
//    grade='D';
//    else
//    grade='F';
//    
//    printf("percentage is %f and Grade is %c\n",per,grade);
//    return 0;
//}
//--------------------------------------------------------------------------------------------------
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//		printf("%d\t",i);
//		i++;
//	}
//}
//------------------------------------------------------------------------------------------------------
//int main()
//{
//	int k=20;
//	while(k>=2)
//	{
//		printf("%d\t",k);
//		k=k-2;
//		printf("*\t");
//	}
//}-----------------------------------------------------------------------------------------------------------
//int main()
//{
//	int n,rem,sum=0;
//	printf("enter the number\n");
//	scanf("%d",&n);
//	while(n>0)
//	{
//		rem = n%10;
//		printf("%d\n",rem);
//		sum=sum+rem;
//		printf("%d\n",sum);
//		n=n/10;
//		printf("%d\n",n);
//		
//	}
//	printf("sum of number is %d\n",sum);
//}
//------------------------------------------------------------------------------------------------------
//int main()
//{
//	int rem,product=1,n;
//	printf("enter a number\n");
//	scanf("%d",&n);
//	while(n>1)
//	{
//		
//		rem=n%10;
//		product*=rem;
//		n/=10;
//		
//		
//	}
//	printf("the product of number is %d\n",product);
//	
//}
//-------------------------------------------------------------------------------------------------------
//int main()
//{
//	int n,num;
//	long fact=1;
//	printf("enter a number : \n");
//	scanf("%d",&n);
//	num=n;
//	if(n<1)
//	printf("no factorial of negative number\n");
//	else
//	{
//		while(n>1)
//		{
//			fact*=n;
//			n--;
//		}
//		printf("factorial of number %d=%ld\n",num,fact);
//	}
//}
//------------------------------------------------------------------------------------------------------
//int main()
//{
//	int n,nsave,rem,d,j=1,dec=0;
//	printf("enter a number in binary\n");
//	scanf("%d",&n);
//	nsave=n;
//	while(n>0)
//	{
//		rem=n%10;
//		d=rem*j;
//		dec+=d;
//		j*=2;
//		n/=10;
//		
//	}
//	printf("the binary %d in decimal %d\n",nsave,dec);
//}
//-------------------------------------------------------------------------------------------------------
//int main()
//{
//	int i=1;
//	do
//	{
//		printf("%d\t",i);
//		i++;
//	}while(i<=10);
//	
//}
//=============================================================================================================
//int main()
//{
//	int count,n;
//	printf("enter the no:\n");
//	scanf("%d",&n);
//	do
//	{
//		n/=10;
//		printf("%d\n",n);
//		count++;
//	}while(n>0);
//	printf("Number of digits=%d",count);
//}
//=============================================================================================================
//int main()
//{
//	int num,sum=0;
//	do
//	{
//	printf("enter the numner(to stop enter zero)\n");
//	scanf("%d",&num);
//	sum+=num;
//	printf("%d\n",sum);
//    }while(num !=0);
//	printf("sum of number is %d\n",sum);
//}
//=======================================================================================================
//int main()
//{
//	int i;
//	for(i=1;i<=10;i++)
//	printf("%d\t",i);
//}
//========================================================================================================
//int main()
//{
//	int i;
//	for(i=20;i>=-20;i-=2)
//	printf("%d\t",i);
//	printf("\n");
//}
//========================================================================================================
//int main()
//{
//
//int a,b,i;
//int result=0;
//printf("enter the number to be multiply:\n");
//scanf("%d%d",&a,&b);
//for(i=1 ; i<=b ; i++)
//result=result+a;
//printf(" %d * %d = %d",a,b,result);
//
//}
//=============================================================================================================
//int main()
//{
//	int a=5,b=2;
//	
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf(" a=%d , b=%d ",a,b);
//}
//===================================================================================================================
//int main()
//{
//	int i,j;
//	for(i=1,j=20;i<=j;i++,j--)
//	printf("i=%d \t j=%d\n",i,j);
//}
//========================================================================================================
//int main(void)
//{
//	int i,j;
//	for(i=1; i<=3; i++)		    /*outer loop*/
//	{
//		printf("i=%d\n",i);
//		for(j=1; j>0; j++)	    /*inner loop*/
//			printf("\tj=%d\t",j);
//		printf("\n");
//	}
//}
//===========================================================================================================
//int main(void)
//{
//	long num;
//	int dig,sum;
//	printf("Enter a number : ");
//	scanf("%ld",&num);
//	printf("%ld->",num);
//	do
//	{
//		sum = 0; 
//		while(num!=0) 
//		{
//			dig=num%10;
//			sum+=dig;
//			num/=10;
//		}
//		printf("%d\t",sum);
//		num=sum;
//	}while(num/10!=0);  /*while num is more than one digit*/	
//	return 0;
//}
//============================================================================================================
//#include<math.h>
//int main(void)
//{
//	int i,n;
//	printf("Enter a number : ");
//	scanf("%d",&n);
//
//	for(i=2; i<=sqrt(n); i++)	
//		if(n%i==0)
//		
//			break;
//			printf("%d\n",i);
//
//	if(i>sqrt(n))
//		printf("%d is prime\n",n);
//	else
//		printf("%d is not prime\n",n);
//	return 0;
//}


//
//int main()
//{
//	int n;
//	printf("enter a number\n");
//	scanf("%d",&n);
//	if(n%2==0)
//	goto even;
//	else
//	goto odd;
//	
//	even:
//		printf("the number is even\n");
//		goto end;
//	odd:
//	     printf("the number is odd\n");
//	     goto end;
//	end:	 
//	printf("\n");	
//}

//int main()
//{
//	int choice;
//	printf("enter the number\n");
//	scanf("%d",&choice);
//	switch(choice)
//	{
//		case 1:
//			printf("first\n");
//			break;
//		case 2:
//		    printf("two\n");
//		    break;
//		case 3:
//		    printf("thired\n");
//		    break;
//		default:
//			printf("wrong choice\n");
//					
//	}
//	return 0;
//}


//int main()
//{
//	char  ch;
//	printf("enter a alphabet\n");
//	scanf("%c",&ch);
//	switch(ch)
//	{
//		case 'a':
//		case 'A':
//		case 'e':
//		case 'E':
//		case 'i':
//		case 'I':
//		case 'O':
//		case 'o':	
//		case 'u':
//		case 'U':
//		printf("alphabet is vowel\n");
//			break;
//		default:
//			printf("alphabet is not vowel\n");
//			
//			
//	}
//	return 0;
//}

//int main()
//{
//	int choice;
//	while(1)
//	{
//		printf("1.create a database\n");
//		printf("2.insert  new record\n");
//		printf("3.Modify a record\n");
//		printf("4.delete a record\n");
//		printf("5.display all record\n");
//		printf("6.exit\n");
//		
//		printf("enter the choice\n");
//		scanf("%d",&choice);
//		
//		switch(choice)
//		{
//			case 1:
//				printf("created database\n");
//				break;
//			case 2:
//				printf("recored inserted.....\n");
//				break;
//			case 3:
//				printf("recored modified...\n");
//				break;
//			case 4:
//			    printf("recored deleted.....\n");
//				break;
//			case 5:
//			    printf("displayed\n");
//				break;
//			case 6:
//			    exit(1);
//			default:
//				printf("entered the wrong choice\n");			
//			
//		}
//		printf("\n\n");
//	}
//	return 0;
//	
//}
//=================================================================================================
//int main()
//{
//	int choice;
//	while(1)
//	{
//		printf("1.create a database\n");
//		printf("2.insert a record\n");
//		printf("3.modify a record\n");
//		printf("4.delete a record\n");
//		printf("5.display all record\n");
//		printf("6.to exit\n");
//		
//		printf("enter the choice\n");
//		scanf("%d",&choice);
//		
//		switch(choice)
//		{
//			case 1:
//				printf("created a database\n");
//				break;
//			case 2:	
//			    printf("record inserted.....\n");
//			    break;
//			case 3:
//			    printf("record modified...\n");
//			    break;
//			case 4:
//			    printf("record deleted....\n");
//				break;
//			case 5:
//			    printf("record dispalyed\n");
//			    break;
//			case 6:
//			    exit(1);
//			default:
//			    printf("entered a wrong choice\n");
//							  
//		}
//	printf("\n\n");	
//	}
//	
//	
//}

//====================================================================================
//    int main()
//    {
//    	int d1,d2,d,m1,m2,m,y1,y2,y;
//    	printf("enter first date(dd/mm/yyyy)\n");
//    	scanf("%d/%d/%d",&d1,&m1,&y1);
//    	printf("enter second date(dd/mm/yyyy)\n");
//    	scanf("%d/%d/%d",&d2,&m2,&y2);
//    	
//    	if(d2<d1)
//    	{
//    		if(m2==3)
//    		{
//    			if(y2%100 !=0 && y2%4==0  || y2%400==0)
//    			    d2=d2+29;
//    			else
//				    d2=d2+28;  
//			}
//			else if( m2 == 5 || m2 == 7 || m2 == 10 || m2 == 12)
//			     d2=d2+30;
//			else
//			     d2=d2+31;
//				 m2=m2-1;    
//		}
//			if(m2<m1)
//      	{
//		y2=y2-1;
//		m2=m2+12;
//    	}
//	y=y2-y1;
//	m=m2-m1;
//	d=d2-d1;
//	printf("Difference of the two dates is : ");
//	printf("%d years %d months %d days\n",y,m,d);
//	return 0;
//	}

//============================================================================================================

//int main()
//{
//	int a;
//	
//	do
//{
//	printf("enter a number\n");
//	scanf("%d",&a);
//	if(a>0)
//	{
//		printf("number is positive\n");
//		
//	}
//	else
//	{
//		printf("number is negative\n");
//	}
//}while( a !=0);
//	return 0;
//}
//=======================================================================================

//int main()
//{
//	int n,revs=0,d;
//	printf("enter the number\n");
//	scanf("%d",&n);
//	while(n !=0)
//	{
//		revs=revs*10;
//		printf("%d\n",revs);
//	
//		
//		revs = revs+n%10;
//		
//		printf("%d\n",revs);
//		
//		n/=10;
//		printf("%d\n",n);
//	}
//	printf("reverse of entered number is %d\n",revs);
//}

int main(void)
{
    int i,j,n,p;
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)		
	{
		for(j=1; j<=n-i; j++)	
			printf(" ");
		p=n;
		for(j=1; j<=i; j++)	
			printf("%d",p--);
		p=p+2;
		for(j=1; j<=i-1; j++)	
			printf("%d",p++);
		printf("\n");		
	}
	n--;
	for(i=1; i<=n; i++)	 
	{
		for(j=1; j<=i; j++)	
			printf(" ");
		p=n;
		for(j=1; j<=n-i+1; j++)	
			printf("%d",p--);
		p=p+2;
		for(j=1; j<=n-i; j++)	
			printf("%d",p++);
		printf("\n");		
	}
	return 0;
}

