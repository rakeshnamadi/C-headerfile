#include<stdio.h>
#include<math.h>
#include<string.h>
//Helping for function names for different tasks
void help()
{
/*	printf("****Function Names for different tasks****\n");
	printf("\nADDING---add()\nALL CO-PRIMES IN GIVEN RANGE---coprimes_range()\nARMSTRONG OR NOT---armstrong()\nARMSTRONG NUMBERS BETWEEN RANGE---armstrong_numbers()\nCO-PRIMES ARE NOT IN GIVEN limits---coprimes_limit()\nCHARACTER IS CONSONANT OR VOWEL---cons_vowel()\nDELETION OF DUPLICATE ELEMENTS IN ARRAY---duplicate()\nDELETION OF ELEMENT USING INDEX POSITION IN ARRAY---deletion_index()\nDELETION OF ELEMENT USING  POSITION IN ARRAY---deletion_position()\nEVEN OR ODD---even_odd()\nFACTORIAL OF NUMBER---factorial()\nFIBONACCI SERIES UPTO N NUMBER---fibonacci_n()\nFIBONACCI SERIES FOR GIVEN NUMBER---fibonacci()\nFACTORS OF GIVEN NUMBER---factors()\nFINDING OF GCD---gcd()\nFINDING OF LCM---lcm()\nGIVEN NUMBERS ARE CO-PRIMES OR NOT---co_primes()\n");
	printf("\nINSERTION OF ELEMENT USING INDEX POSITION IN ARRAY---insertion_index()\nINSERTION OF ELEMENT USING POSITION IN ARRAY---insertion_position()\nLARGEST AMONG THREE NUMBERS---largest()\nLEAP YEAR OR NOT---leap()\nMATRIX ADDITION---addition_matrix()\nMATRIX SUBTRACTION---subtraction_matrix()\nMATRIX MULTIPLICATION---mul_matrix()\nMAXIMUM-MINIMUM-MIDDLE OF GIVEN THREE NUMBERS---max_mid_min()\nPERFECT  NUMBERS BETWEEN RANGE---perfect_numbers()\nPRINTING STRING IN OPPOSITE DIRECTION---string_opp()\nPERFECT CUBE OR NOT---perfect_cube()\nPERFECT NUMBER---perfect_number()\nPERFECT SQUARE OR NOT---perfect_sqaure()\nPRIME NUMBER OR NOT---prime()\nPRIME NUMBERS IN GIVEN RANGE---prime_range()\nPRIME NUMBERS UPTO GIVEN NUMBER---prime_n()\nPALINDROME OR NOT---palindrome()\nPRIME NUMBER OR NOT---prime()\nPRIME NUMBERS IN GIVEN RANGE---prime_range()\nPRIME NUMBERS UPTO GIVEN NUMBER---prime_n()\nPALINDROME OR NOT---palindrome()\nPOWER OF GIVEN NUMBER---power()\nREVERSE OF NUMBER---reverse()\n");
	printf("\nSORTING AN ARRAY IN ASCENDING ORDER AND FIND OUT SECOND SMALLEST AND LARGEST---sorting()\nSEARCHING,SMALLEST AND LARGEST ELEMENT IN ARRAY---searching()\nSUM OF N NATURAL NUMBERS---sum_n()\nSUM OF SQUARES OF N NATURAL NUMBERS---sum_square()\nSUM OF CUBES OF N NATURAL NUMBERS---sum_cube()\nSWAPPING WITHOUT USING OTHER VARIABLE---swap_without()\nSWAPPING WITH USING ANOTHER VARIABLE---swap_with()\nTRANSPOSE MATRIX---transpose_matrix()\n");
	printf("SUBTRACTION---sub()\nSTRING PALINDROME OR NOT---palindrome_string()\nTABLE FOR GIVEN NUMBER---table()\nSORTING N NUMBER OF STRINGS---sorting_strings()\nSORTING SINGLE STRING---string_sorting()\n");
*/
printf("ARRAY:\n\t DELETION OF DUPLICATE ELEMENTS IN ARRAY---duplicate()\n\t DELETION OF ELEMENT USING INDEX POSITION IN ARRAY---deletion_index()\n\t DELETION OF ELEMENT USING  POSITION IN ARRAY---deletion_position()\n\t INSERTION OF ELEMENT USING INDEX POSITION IN ARRAY---insertion_index()\n\t INSERTION OF ELEMENT USING POSITION IN ARRAY---insertion_position()\n\t SORTING AN ARRAY IN ASCENDING ORDER AND FIND OUT SECOND SMALLEST AND LARGEST---sorting()\n\t SEARCHING,SMALLEST AND LARGEST ELEMENT IN ARRAY---searching()\n");
printf("\nARTHIMETICS:\n\t ADDITION---add()\n\t SUBTRACTION---sub()\n");
printf("\nFIBONACCI:\n\t FIBONACCI SERIES UPTO N NUMBER---fibonacci_n()\n\t FIBONACCI SERIES FOR GIVEN NUMBER---fibonacci()\n");
printf("\nMATRIX:\n\t MATRIX ADDITION---addition_matrix()\n\t MATRIX SUBTRACTION---subtraction_matrix()\n\t MATRIX MULTIPLICATION---mul_matrix()\n\t TRANSPOSE MATRIX---transpose_matrix()\n");
printf("\nPRIME NUMBERS:\n\t PRIME NUMBER OR NOT---prime()\n\t PRIME NUMBERS IN GIVEN RANGE---prime_range()\n\t PRIME NUMBERS UPTO GIVEN NUMBER---prime_n()\n\t PRIME NUMBER OR NOT---prime()\n\t PRIME NUMBERS IN GIVEN RANGE---prime_range()\n\t PRIME NUMBERS UPTO GIVEN NUMBER---prime_n()\n");
printf("\nSTRINGS:\n\t STRING PALINDROME OR NOT---palindrome_string()\n\t SORTING N NUMBER OF STRINGS---sorting_strings()\n\t SORTING SINGLE STRING---string_sorting()\n");
printf("\nOTHERS:\nALL CO-PRIMES IN GIVEN RANGE---coprimes_range()\nARMSTRONG OR NOT---armstrong()\nARMSTRONG NUMBERS BETWEEN RANGE---armstrong_numbers()\nCO-PRIMES ARE NOT IN GIVEN limits---coprimes_limit()\nCHARACTER IS CONSONANT OR VOWEL---cons_vowel()\nEVEN OR ODD---even_odd()\nFACTORIAL OF NUMBER---factorial()\nFACTORS OF GIVEN NUMBER---factors()\nFINDING OF GCD---gcd()\nFINDING OF LCM---lcm()\nGIVEN NUMBERS ARE CO-PRIMES OR NOT---co_primes()\nLARGEST AMONG THREE NUMBERS---largest()\nLEAP YEAR OR NOT---leap()\nMAXIMUM-MINIMUM-MIDDLE OF GIVEN THREE NUMBERS---max_mid_min()\nPERFECT  NUMBERS BETWEEN RANGE---perfect_numbers()\n");
printf("PRINTING STRING IN OPPOSITE DIRECTION---string_opp()\nPERFECT CUBE OR NOT---perfect_cube()\nPERFECT NUMBER---perfect_number()\nPERFECT SQUARE OR NOT---perfect_sqaure()\nPALINDROME OR NOT---palindrome()\nPOWER OF GIVEN NUMBER---power()\nREVERSE OF NUMBER---reverse()\nSUM OF N NATURAL NUMBERS---sum_n()\nSUM OF SQUARES OF N NATURAL NUMBERS---sum_square()\nSUM OF CUBES OF N NATURAL NUMBERS---sum_cube()\nSWAPPING WITHOUT USING OTHER VARIABLE---swap_without()\nSWAPPING WITH USING ANOTHER VARIABLE---swap_with()\nTABLE FOR GIVEN NUMBER---table()\n");

}
void pattern_help(){
	printf("Pattern Programs and it function names:\n");
	printf("Pyramid Patterns:\n Left half pyramid---Lpyramid()\nLeft half with numbers---Lpyrnum()\nLeft half pyramid with alphabets---Lpyralpha()\n inverse pyramid---inverse_pyr()\n inverse pyramid using numbers---inverse_pyrnum()\n pyramid with *---pyramid()\n pyramid using numbers---pyramid_num()\n inverted pyramid---inv_pyr()\n pascal triangle---pascal()\n Floyd's triangle---floyd()\n Hollow rectangle---hallow_rect()\n Palindrome Left pyramid---palindrome_Lpyr()\n Palindrome Pyramid---palindrome_pyr()\n");
	printf("Diamond Patterns:\n Diamond pattern---diamond()\n Hallow Diamond---hallow_diamond()\n Half diamond---half_diamond()\n Hallow diamond in a rectangle---diamond_rect()\n ");
	printf("Others:\n Butterfly---butterfly()\n Diagonals of rectangle---rect_diagonal()\n Diagonal of Rhombus& Diamond---diagonal_rho()\n Left & Rgiht arrows---left_right_arrow()\n Heart Symbol---heart()\n ");
	
}
//Adding of two numbers
int add(int x,int y)
{
	return x+y;
}
//Subtracting of two numbers
int sub(int x,int y)
{
	return x-y;
}
//Prime number or not
void prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d is a prime number!!\n",n);
	}
	else
	{
		printf("%d is not a prime number!!\n",n);
	}
}
//Prime numbers in given range
int prime_range(int a,int b)
{
	int i,j,c;
	for(i=a+1;i<b;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			printf("%d\n",i);
		}
	}
}
//Prime numbers upto n number
void prime_n(int n)
{
	int i,j,count;
	for(i=1;i<=n;i++)
    {
	count=0;
    for(j=1;j<=i;j++)
   {
 	if(i%j==0)
 	count++;
   }
    if(count==2)
    {
    printf("%d\n",i);
    }
   }
}
//Palindrome or not
void palindrome(int n)
{
	int on,rem,r;
    on=n;
    rem=0;
    while(n!=0)
   {
    	r=n%10;
    	rem=rem*10+r;
	    n=n/10;
   }
    if(rem==on)
    printf("%d is a palindrome!!\n",on);
   else
    printf("%d is not a palindrome!!\n",on);
}
//even or odd
void even_odd(int n)
{
	if(n%2==0)
	{
		printf("%d is an even number.\n",n);
	}
	else
	{
		printf("%d is an odd number.\n",n);
	}
}
//Sum of n natural numbers
int sum_n(int n)
{
	return (n*(n+1))/2;
}
//Sum of squares of n natural numbers
int sum_square(int n)
{
	return (n*(n+1)*((2*n)+1))/6;
}
//Sum of cubes of n natural numbers
int sum_cube(int n)
{
	return ((n*(n+1))*(n*(n+1)))/4;
}
//Swapping of two numbers with using another variable
void swap_with(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping two numbers are:%d and %d\n",a,b);
}
//Swapping of two numbers without using another variable
void swap_without(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping two numbers are:%d and %d\n",a,b);
}
//Perfect sqaure or not
void perfect_square(int num)
{
	int i,c=0;
	for(i=1;i<=num;i++)
	{
		if(num==i*i)
		{
			c++;
		}
	}
	if(c==1)
	{
		printf("%d is a perfect square\n",num);
	}
	else
	{
		printf("%d is not a perfect square\n",num);
	}
}
//Armstrong or not
void armstrong(int n)
{
	int rem,num,sum=0;
	num=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+pow(rem,3);
		n=n/10;
	}
	if(num==sum)
	{
		printf("%d is an armstrong number\n",num);
	}
	else
	{
		printf("%d is not an armstrong number\n",num);
	}
}
//Factorial of a number
long factorial(int n)
{
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
}
//FIBONACCI SERIES UPTO GIVEN NUMBER
int fibonacci_n(int n)
{
	int a=0,b=1,c=0;
    printf("Fibonacci Series: %d %d ",a,b);
    c=a+b;
    while(c<=n)
    {
        printf(" %d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}
//FIBONACCI SERIES FOR GIVEN NUMBER
int fibonacci(int n)
{
    int i,c,a=0,b=1;
    printf("%d",a);
    for(i=1;i<=n;i++)
    {
    	c=a+b;
    	a=b;
	    b=c;
	    printf(" %d",a);
	}
}
//Factors of given number
int factors(int num)
{
	int fact=1,i;
	for(i=1;i<=num;i++)
	{
    	if(num%i==0)
    	{
    		printf("%d\n",i);
		}
	}
}
//Largest among three numbers
int largest(int a,int b,int c)
{
	if(a>b&&a>c)
	{
		printf("%d is a largest number\n",a);
	}
	else if(b>c)
	{
		printf("%d is a largest number\n",b);
	}
	else
	{
		printf("%d is a largest number\n",c);
	}
}
//Leap year or not
void leap(int y)
{
	if((y%4==0&&y%100!=0)||y%400==0)
	{
		printf("%d is leap year\n",y);
	}
	else
	{
		printf("%d is not leap year\n",y);
	}
}
//MAXIMUM-MIDIUM-MINIMUM VALUE
int max_mid_min(int a,int b,int c)
{
	int max,min,mid;
	max=(a>b&&a>c)?a:(b>c)?b:c;
	printf("Maximun number is : %d\n",max);
	min=(a<b&&a<c)?a:(b<c)?b:c;
	printf("Minimum number is : %d\n",min);
	mid=(a+b+c)-(max+min);
	printf("Middle number is : %d\n",mid);
}
//Perfect cube or not
void perfect_cube(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n==pow(i,3))
		{
			c++;
		}
	}
	if(c==1)
	{
	   printf("%d is a perfect cube",n);
	}
	else
	{
		printf("%d is not a perfect cube",n);
	}
}
//Perfect number or not
void perfect_number(int num)
{
	int n,sum=0,i;
	n=num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("%d is a perfect number\n",n);
	}
	else
	{
	   printf("%d is not a perfect number\n",n);
	}
}
//Reverse of a number
int reverse(int n)
{
	int sum=0,rem;
	while(n>0)
	{
		rem=n%10;
		sum=rem+sum*10;
		n=n/10;
	}
	printf("Reverse of a given number is: %d\n",sum);
}
//Table for given number
int table(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
//Given character is consonant or vowel
void cons_vowel(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("Entered character is vowel");
	}
	else
	{
		printf("Entered character is consonant\n");
	}
}
//Power of given number
long power(int base,int exp)
{
	if(exp==0)
	return 1;
	else
	return base*power(base,exp-1);
}
//Perfect numbers between given range
int isfactor(int num1,int num2)
{
	if(num1%num2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int perfect_numbers(int m,int n)
{
	int i,j,sum;
	for(i=m;i<=n;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(isfactor(i,j))
			sum=sum+j;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
}
//Armstrong numbers between range
int armstrong_numbers(int m,int n)
{
	int num,temp,digitNum,digitSum,remainderNum;
	for(num = m; num <= n; num++)
   {
      temp = num;
      digitNum = 0;
      while (temp != 0)
	   {
         digitNum++;
         temp = temp/10;
       }
      temp = num;
      digitSum = 0;
      while (temp != 0)
	  {
         remainderNum = temp%10;
         digitSum = digitSum + pow(remainderNum, digitNum);
         temp = temp/10;
      }
      if (num == digitSum)
      {
      	printf("%d ",num);
	  }
    }
}
//Finding of gcd
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		return gcd(a-b,b);
		else
		return gcd(a,b-a);
	}
	return a;
}
//Finding of LCM
int lcm(int a,int b)
{
	int lcm;
	if(a>b)
    {
    	lcm=a;
	}
	else
	{
		lcm=b;
	}
	while(1)
	{
		if(lcm%a==0 && lcm%b==0)
        {
            printf("LCM of %d and %d is = %d\n",a,b,lcm);
            break;
        }
        else
        {
        	lcm++;
		}
    }
}
//Matrix addition
int addition_matrix(int a[100][100],int b[100][100],int n1,int n2)
{
	int c[100][100],i,j;
	printf("Matrix1:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix2:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("After addition matrix is:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
//Matrix subtraction
int subtraction_matrix(int a[100][100],int b[100][100],int n1,int n2)
{
	int c[100][100],i,j;
	printf("Matrix1:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix2:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("After subtraction matrix is:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
//Matrix multiplication
int mul_matrix(int a[100][100],int b[100][100],int arow,int acol,int brow,int bcol)
{
	int i,j,c[100][100],k;
	printf("Matrix1:\n");
    for(i=0;i<arow;i++)
    {
    	for(j=0;j<acol;j++)
    	{
	    	printf("%d ",a[i][j]);
	    }
	    printf("\n");
    }
    printf("Matrix2:\n");
    for(i=0;i<brow;i++)
   {
      for(j=0;j<bcol;j++)
      {
      	printf("%d ",b[i][j]);
	  }
	  printf("\n");
	}
   if(acol==brow)
   {
       for(i=0;i<arow;i++)
       {
	     for(j=0;j<bcol;j++)
	    {
	      c[i][j]=0;
	      for(k=0;k<acol;k++)
	      {
	  	    c[i][j]+=a[i][k]*b[k][j];
	      }
	   }
    }
  printf("Multiplication of matrix1 and matrix2 is:\n");
   for(i=0;i<arow;i++)
   {
	for(j=0;j<bcol;j++)
	{
		printf("%d ",c[i][j]);
	}
	printf("\n");
    }
   }
   else
    printf("Multiplication is not possible");
}
//Transpose of matrix
int transpose_matrix(int a[100][100],int row,int col)
{
	int i,j;
	printf("The matrix is:\n");
    for(i=0;i<row;i++)
    {
	for(j=0;j<col;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
   }
   printf("The transpose matrix is:\n");
   for(i=0;i<col;i++)
   {
	for(j=0;j<row;j++)
	{
		printf("%d ",a[j][i]);
	}
	printf("\n");
	}
}
//Deletion of element using index position in array
int deletion_index(int a[],int n)
{
	int i,index;
	printf("The elements are:");
    for(i=0;i<n;i++)
   {
    	printf("%d\t",a[i]);
   }
   printf("\nEnter the index value of the element to be deleted:");
   scanf("%d",&index);
   if(index<n)
  {
	for(i=index;i<n;i++)
	{
		a[i]=a[i+1];
	}
  }
  else
  printf("Deletion is not possible");
  for(i=0;i<n-1;i++)
  {
   	printf("%d\t",a[i]);
  }
}
//Deletion of element using position in array
int deletion_position(int a[],int n)
{
	int i,p,j;
	printf("Elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("Enter position to delete element:");
    scanf("%d",&p);
    if(p<=n)
    {
	for(j=p-1;j<n;j++)
	a[j]=a[j+1];
    }
    else
    printf("Deletion is not possible");
    for(i=0;i<n-1;i++)
    printf("%d\t",a[i]);
}
//Insertion of element using index position in array
int insertion_index(int a[],int n)
{
	int i,j,e,index;
	printf("The elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("Enter element and index:");
    scanf("%d%d",&e,&index);
    if(index<n)
   {
	for(j=n-1;j>=index;j--)
	{
		a[j+1]=a[j];
	}
	a[index]=e;
   }
   else
   printf("Insertion is not possible");
   for(i=0;i<=n;i++)
   printf("a[%d] == %d",i,a[i]);
}
//Insertion of element using position in array
int insertion_position(int a[],int n)
{
	int p,e,j,i;
	printf("The elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("Enter element and position:");
    scanf("%d%d",&e,&p);
    if(p<=n)
   {
	for(j=n;j>=p;j--)
	{
	   a[j]=a[j-1];
    }
    a[p-1]=e;
   }
  else
   printf("Insertion is not possible");
   for(i=0;i<=n;i++)
   printf("\na[%d] == %d",i,a[i]);
}
//Serching,smallest and largest element in array
int searching(int a[],int n)
{
	int i,j,e,large,small;
	printf("The array is:\n");
	for(i=0;i<n;i++)
{
    printf("\na[%d] == %d",i,a[i]);
}
printf("\nElement to search is:");
scanf("%d",&e);
for(i=0;i<n;i++)
{
	if(a[i]==e)
	{
		printf("%d is present in the array",e);
		printf("\nAnd its position is %d",i+1);
		break;
	}
}
large=a[0];
for(i=1;i<n;i++)
{
	if(a[i]>large)
	large=a[i];

    }
printf("\n%d is the largest number",large);
small=a[0];
for(i=1;i<n;i++)
{
	if(a[i]<small)
	small=a[i];
}
printf("\n%d is the smallest number",small);
}
//Sorting array in ascending order and find out second largest and smallest number
int sorting(int a[],int n)
{
	int i,j,temp,b[00];
	printf("The elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
printf("Elements in ascending order are:");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
for(i=0;i<n;i++)
{
	b[i]=a[i];
}
printf("\nSecond smallest number is %d",b[1]);
printf("\nSecond largest number is %d",b[n-2]);
}
//Given numbers are co-primes are not
int gcd_coprime(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		return gcd(a-b,b);
		else
		return gcd(a,b-a);
	}
	return a;
}
int co_primes(int a,int b)
{
	int result;
	result=gcd_coprime(a,b);
printf("The GCD of %d and %d is %d",a,b,result);
if(result==1)
printf("\n%d and %d are co-primes",a,b);
else
printf("\n%d and %d are not co-primes",a,b);
}
//Checking co-primes in given range
int coprimes_limit(int a,int b)
{
	int i,j,result;
for(i=a;i<b;i++)
{
	for(j=i+1;j<b;j++)
	{   result=gcd_coprime(i,j);
    	if(result==1)
          printf("\n%d and %d are co-primes",i,j);
        else
          printf("\n%d and %d are not co-primes",i,j);
	}
}
}
//All co-primes between given range
int coprimes_range(int a,int b)
{
	int i,j,result;
	for(i=a;i<=b;i++)
{
	for(j=i+1;j<=b;j++)
	{   result=gcd_coprime(i,j);
    	if(result==1)
         {
		   printf("\n(%d,%d) are co-primes",i,j);
          printf("\n(%d,%d) are co-primes",j,i);
         }
	}
}
}
//Gievn string is palindrome or not
char palindrome_string(char a[])
{
	int i,j,k,temp;
	char a1[100];
i=0;
j=strlen(a)-1;
strcpy(a1,a);
while(i<j)
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
printf("The given string is %s\n",a1);
k=strcmp(a1,a);
if(k==0)
printf("%s is a palindrome",a1);
else
printf("%s is not a palindrome",a1);
}
//Printing string in opposite direction
char string_opp(char a[])
{
	char b[50];
int i,index,ws,we;
index=0;
ws=strlen(a)-1;
we=strlen(a)-1;
while(ws>0)
{
	if(a[ws]==' ')
	{
		i=ws+1;
		while(i<=we)
		{
			b[index]=a[i];
			i++;
			index++;
		}
		b[index++]=' ';
		we=ws-1;
	}
	ws--;
}
for(i=0;i<=we;i++)
{
    b[index]=a[i];
	index++;
}
b[index]='\0';
printf("%s",b);
}
//Sorting n number os strings
char sorting_strings(char a[100][100],int n)
{
	int i,j;
	char temp[100];
printf("Entered strings are:");
for(i=0;i<n;i++)
{
	printf("\n%s",a[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{
		if(strcmp(a[j],a[j+1])>0)
		{
			strcpy(temp,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],temp);
		}
	}
}
printf("\nSorted strings are:");
for(i=0;i<n;i++)
{
	printf("\n%s",a[i]);
}
}
//Sorting single string
char string_sorting(char a[100])
{
	char temp,i,j,l;
l=strlen(a);
for(i=0;i<l-1;i++)
{
	for(j=i+1;j<l;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
printf("The sorted string is %s",a);
}
//Deletion of duplicate elements in array
int duplicate(int a[100],int n)
{
	int i,j,k;
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
		    for(k=j;k<n;k++)
			  {
			    a[k]=a[k+1];
			}
			n--;
		}
	}
}
printf("New array is:\n");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
}

//pattern printings in c

//left half pyramids
void Lpyramid(){
int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i) {
        for (j=1; j<=i; ++j)
        { printf("* "); }
        printf("\n");
    }
}
//left half with numbers
void Lpyrnum(){
	int i,j,rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i) {
        for (j=1; j<=i; ++j)
        { printf("%d ",j); }
        printf("\n");
    }
}
//left half pyramid with alphabets
void Lpyralpha(){
	int i, j;
    char input, alphabet='A';
    printf("Enter the uppercase character you want to print in last row: ");
    scanf("%c", &input);
    for (i=1; i<=(input-'A'+1); ++i) {
        for (j=1; j<=i; ++j)
        { printf("%c", alphabet); }
        ++alphabet;
        printf("\n");
    }
}
//inverse pyramid
void inverse_pyr(){
	 int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=rows; i>=1; --i) {
        for (j=1; j<=i; ++j)
        { printf("* "); }
        printf("\n");
    }   
}
//inverse pyramid using numbers
void inverse_pyrnum(){
	int i ,j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=rows; i>=1; --i) {
        for (j=1; j<=i; ++j)
        { printf("%d ",j); }
        printf("\n");
    }
}
//pyramid with *
void pyramid(){
	int i, space, rows, k=0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i,k=0) {
        for (space=1; space<=rows-i; ++space)
        { printf("  "); }
        while (k!=2*i-1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}
//pyramid using numbers
void pyramid_num(){
	int i, space, rows, k=0, count=0, count1=0;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; ++i) {
        for (space=1; space<=rows-i; ++space) {
          printf("  ");
          ++count;
        }
        while (k!=2*i-1) {
            if (count <= rows-1)
            { printf("%d ", i+k);
              ++count;
            }
            else {
              ++count1;
              printf("%d ", (i+k-2*count1));
            }
            ++k;
        }
        count1=count=k=0;
        printf("\n");
    }
}
//inverted pyramid
void inv_pyr(){
	int rows, i, j, space;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=rows; i>=1; --i) {
        for (space=0; space<rows-i; ++space)
            printf("  ");
        for (j=i; j<=2*i-1; ++j)
            printf("* ");
        for (j=0; j<i-1; ++j)
            printf("* ");
        printf("\n");
    }
}
//pascal triangle
void pascal(){
	int rows, coef=1, space, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=0; i<rows; i++) {
        for (space=1; space <= rows-i; space++)
            printf("  ");
        for (j=0; j<=i; j++) {
            if (j==0 || i==0)
                coef = 1;
            else
                coef=coef*(i-j+1)/j;
            printf("%4d", coef);
        }
        printf("\n");
    }
}
//floyd's triangle
void floyd(){
	int rows, i, j, number= 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; i++) {
        for (j=1; j<=i; ++j)
        { printf("%d ", number);
          ++number;
        }
        printf("\n");
    }
}
//hollow rectangle
void hallow_rect(){
	int i, j;
int rows, columns;
printf("nEnter the number of rows : ");
scanf("%d", &rows);
printf("nEnter the number of columns : ");
scanf("%d", &columns);
printf("\n");
for (i = 1; i <= rows; i++){
for (j = 1; j <= columns; j++){
if (i==1 || i==rows || j==1 || j==columns)
	printf("*");
else
	printf(" ");
}
	printf("\n");
}
}
//palindrome pyramid
void palindrome_Lpyr(){
	int i,j,k,l,n;
printf("Enter the number of rows : ");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(k = 1; k <= i; k++)
{
printf("%d ",k);
}
for(l = i-1; l >= 1; l--)
{
printf("%d ",l);
}
printf("\n");
}
}

//plaindrome pyramid
void palindrome_pyr(){
int i, j, k, space, n;
scanf("%d", &n);
printf(" ");
for (i=1; i<=n; i++)
{

for (j=1; j<=n-i; j++)
printf(" ");

for (j=1,k=2*i-1; j<=2*i-1; j++,k--)
{
if (j <= k)
printf("%d", j);
else
printf("%d", k);
}
printf("\n");

printf(" ");

}
}
//diamond pattern 
void diamond(){
	int n, c, k, space = 1;

	printf("Enter the number of rows\n");
	scanf("%d", &n);

	space = n - 1;

	for (k = 1; k <= n; k++)
	{
		for (c = 1; c <= space; c++)
		printf(" ");
		space--;
		for (c = 1; c <= 2*k-1; c++)
			printf("*");
		printf("\n");
	}
	space = 1;

	for (k = 1; k <= n - 1; k++)
	{
		for (c = 1; c <= space; c++)
		printf(" ");
		space++;
		for (c = 1 ; c <= 2*(n-k)-1; c++)
			printf("*");
		printf("\n");
	}	
}
//Hallow diamond
void hallow_diamond(){
	int i, j, space, k = 0, n;
	printf("\nEnter the number of rows : ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		while (k != (2 * i - 1))
		{
			if (k == 0 || k == 2 * i - 2)
				printf("*");
			else
				printf(" ");
			k++;
		}
	k = 0;
	printf("\n");
	}
	n--;
	for (i = n; i >= 1; i--)
	{
		for (j = 0; j <= n - i; j++)
		{
			printf(" ");
		}
		k = 0;
		while (k != (2 * i - 1))
	{
		if (k == 0 || k == 2 * i - 2)
			printf("*");
		else
			printf(" ");
		k++;
	}	
	printf("\n");	
	}
}
//half diamond
void half_diamond(){
	int i, j, space, k = 0, n;
	printf("\nEnter the number of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for( j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
			{
				printf("*");
			}
		printf("\n");
	}
}
//hallow diamond in a rectangle
void diamond_rect(){
	int i, j, n;
    scanf("%d", &n);
    // upper half of the pattern
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < (2 * n); j++)
        { 
            if(i + j <= n - 1)  // upper left triangle
                printf("*");
            else
                printf(" ");
            if((i + n) <= j)  // upper right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  //bottom left triangle
                printf("*");
            else
                printf(" ");
            if(i >= (2 * n - 1) - j)  // bottom right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
//Butterfly 
void butterfly(){
	int i, j, n;
    scanf("%d", &n);
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  // upper left triangle
                printf("*");
            else
                printf(" ");
            if(i >= (2 * n - 1) - j) // upper right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1) // bottom left triangle
                printf("*");
            else
                printf(" ");
            if((i + n) <= j) // bottom right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
//diagonals of rectangle
void rect_diagonal(){
	int i, j, n;
    scanf("%d", &n);  // 'n' must be odd
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        { 
            // left diagonal, right diagonal, top horizontal, bottom horizontal, left vertical, right vertical
            if(i == j || i + j == n - 1 || i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
//diagonals of rhombus &diamond
void diagonal_rho(){
	int i, j, n;
scanf("%d", &n);  // ‘n’ must be odd
int num1 = n / 2 * 3;
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
// center horizontal, center vertical, upper left diagonal, bottom left diagonal, upper right diagonal, bottom right diagonal
if(i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num1)
printf("*");
else
printf(" ");
}
printf("\n");
}
}
//left and right arrows
void left_right_arrow(){
	int i, j, n;
scanf("%d", &n);  // ‘n’ must be odd
int num1 = n / 2 * 3;
// right arrow
printf("Right Arrow\n");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
// center horizontal, upper right diagonal, bottom right diagonal
if(i == n / 2 || j - i == n / 2 || i + j == num1)
printf("*");
else
printf(" ");
}
printf("\n");
}
// left arrow
printf("Left Arrow\n");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
// center horizontal, bottom left diagonal, upper left diagonal
if(i == n / 2 || i - j == n / 2 || i + j == n / 2)
printf("*");
else
printf(" ");
}
printf("\n");
}
}
//Heart symbol
void heart(){
	int i, j, n;
   printf("Enter value of n : ");
    scanf("%d", &n);
    for(i=n/2; i<=n; i+=2){
        for(j=1; j<n-i; j+=2){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
   printf("\n");
    }
    for(i=n; i>=1; i--){
        for(j=i; j<n; j++){
            printf(" ");
        }
        for(j=1; j<=(i*2)-1; j++){
            printf("*");
        }
        printf("\n");
}
}
