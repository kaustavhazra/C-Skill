#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<patt.h>
/*for second program using function*/
//char two(char i,char j);
//int two(int k);
/*for third program using function*/
int three(int,int);
/*for four program using function*/
int four(int,int,int);
/*for five program using function*/
int area(int,int);
int perimeter(int,int);
/*for six program using function*/
int celcius(int);



/*main program*/
int main(){
int com,n,k,a,b,c,d,e,f,g,h,i,l,celcis,farenheit,number1,number2,even,age,possitive,science,math,digit1,digit2,result,lop,gs,bs,da,ta,ts,hour,minute,sec,temp1,swap1,swap2;
char c1,programlist,km,ans,ans1,ans2,a1,result1,choise,choise2[5],*choise4="about",fileans[100];
//pattern
int ll,row;
//array
int arr[10],x,sum=0,max,min,maxs,search,count=0;

FILE *fp;

printf("\n  ********************************************************************************************************************************************************************");
printf("\n  *                                                                                                                                                                  *");
printf("\n  *                                                                                                                                                                  *");
printf("\n  *                                                                             **                                                                                   *");
printf("\n  *                                                                           *    *                                                                                 *");
printf("\n  *                                                                          *      *                                                                                * ");
printf("\n  *                                                                          *                                                                                       * ");
printf("\n  *                                                                          *                                                                                       * ");
printf("\n  *                                                                          *      *                                                                                * ");
printf("\n  *                                                                           *    *                                                                                 *  ");
printf("\n  *                                                                             **                                                                                   * ");
printf("\n  *                                                                                                                                                                  *");
printf("\n  *                                                                                                                                                                  *");
printf("\n  *                                                              **    *   *  *****  *      *                                                                        *");
printf("\n  *                                                            *    *  *  *     *    *      *                                                                        *");
printf("\n  *                                                             *      **       *    *      *                                                                        *");
printf("\n  *                                                               *    **       *    *      *                                                                        *");
printf("\n  *                                                            *    *  *  *     *    *      *                                                                        *");
printf("\n  *                                                              **    *   *  *****  *****  *****                                                                    * ");
printf("\n  *                                                                                                                                                                  *");
printf("\n  *                                                                                                                                                                  *");
printf("\n  *                                                                                                                                                                  *");
printf("\n  ********************************************************************************************************************************************************************");
printf("\n\n  ********************************************************************************************************************************************************************");
printf("\n  --------------------------------------------------------------------------------------------------------------------------------------------------------------------");
printf("\n  |                                                                                                                                                                  |");
printf("\n  |             NOTE: IF ANY QUREE OR SOURCE CODE PLEASE CONTACT :7044176222/(KAUSTAV HAZRA) OR EMAIL ME AT: 25kaustavhazra1997@gmail.com                            |");
printf("\n  |                                                                                                                                                                  |");
printf("\n  --------------------------------------------------------------------------------------------------------------------------------------------------------------------");
printf("\n\n\n\n                                  ----------------------------------------------------------------------------------------------------");
printf("\n                                  |         (a)Simple       *       (b)Pattern       *       (c)Array      *       (d)Matrix         |");
printf("\n                                  ----------------------------------------------------------------------------------------------------");
printf("\n                                                                           enter your choice = ");
scanf("%c",&choise);
printf("\n   ###################################################################################################################################################################");


/*com = strcmp(choise2,choise4);
if(com==0)
    {
    fp=fopen("abc1.c","r");
                    if (fp==NULL)
                    {

                        exit(1);
                    }
            while(fgets(fileans,99,fp)!=NULL)
        printf("%s",fileans);
        printf("\n");
        fclose(fp);

    }

*/
if(choise=='a')
{
printf("\n\n\n     1. WAP to printf HELLO WORLD.");
printf("\n     2. WAP to print the result of addition user input.");
printf("\n     3. WAP to print average of three numbers by user input.");
printf("\n     4. WAP to input length and breadth of the rectangle,calculate area and perimeter of the rectangle.\n            area=length X braeth.\n            perimeter=2 X (length+breadth).");
printf("\n     5. WAP to input the temprature in celcius scale and convert temprature into farenheit scale.");
printf("\n     6. WAP to input two number and check who is the maximum of two number.");
printf("\n     7. WAP to input a number and check that the number is even or odd.");
printf("\n     8. WAP to input your age and check that you are teenager or not.");
printf("\n     9. WAP to input a number and check that the number is possitive or negative.");
printf("\n    10. WAP for qualify science talent exam for whose students score in math 75 and above or science subject  60 and above.");
printf("\n    11. WAP to creat a calculator.");
printf("\n    12. WAP to find gross salary.");
printf("\n    13. WAP to convert second into hour, min and sec .");
printf("\n    14. WAP to convert to K.M to meter ,centimeter or mm .");
printf("\n    15. WAP to swap two number .");
printf("\n    16. WAP to print ASCII value of given character .");
printf("\n    17. WAP to find LCM and GCD of two number.");
printf("\n\n\n      enter the question number whose ans you want to see= ");
scanf("%d",&n);
printf("\n    ***********************************************");
switch(n)
    {
    case 1:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                   /* include<stdio.h> */");
	printf("\n                   /* int main(){ */");
	printf("\n                   /* printf(''Hello World''); */");
	printf("\n                   /* return 0; */");
	printf("\n                   /* } */");
	printf("\n\n                   OUTPUT-");
	/*for print*/
	printf("\n                 ***********");
	/*program*/
	printf("\n                    Hello World");
    break;



    case 2:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int three(int,int); */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int a,b,c; */");
	printf("\n                  /* printf(''enter first number''); */");
	printf("\n                  /* scanf(''o/o d'',&a); */");
    printf("\n                  /* printf(''enter second number''); */");
	printf("\n                  /* scanf(''o/o d'',&b); */");
	printf("\n                  /* c=three(a,b); */");
	printf("\n                  /* printf(''sum of two digit= o/o d'',c); */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                 /* int three(int x,int y) */");
	printf("\n                  /* { */");
	printf("\n                  /* int z; */");
	printf("\n                  /* z=x+y; */");
	printf("\n                  /* return z; */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/
    printf("\n enter first number");
    scanf("%d",&a);
    printf("\n enter second number");
    scanf("%d",&b);
    c=three(a,b);
    printf("sum of two digit =%d",c);

    return 0;
    break;


    case 3:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int avg(int,int,int); */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int a,b,c,d; */");
	printf("\n                  /* printf(''enter first number''); */");
	printf("\n                  /* scanf(''o/o d'',&a); */");
    printf("\n                  /* printf(''enter second number''); */");
	printf("\n                  /* scanf(''o/o d'',&b); */");
	printf("\n                  /* printf(''enter third number''); */");
	printf("\n                  /* scanf(''o/o d'',&c); */");
	printf("\n                  /* d=avg(a,b,c); */");
	printf("\n                  /* printf(''avg of three digit= o/o d'',d); */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                 /* int avg(int x,int y,int z) */");
	printf("\n                  /* { */");
	printf("\n                  /* int p; */");
	printf("\n                  /* p=(z+x+y)/3; */");
	printf("\n                  /* return p; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/
    printf("\n enter first number");
    scanf("%d",&d);
    printf("\n enter second number");
    scanf("%d",&e);
    printf("\n enter third number");
    scanf("%d",&f);
    g=four(d,e,f);
    printf("avg of three number is=%d",g);
    return 0;
    break;

    case 4:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int area(int,int); */");
	printf("\n                  /* int perimeter(int,int); */");
    printf("\n                  /* int main(){ */");
	printf("\n                  /* int a,b,c; */");
	printf("\n                  /* printf(''enter length= ''); */");
	printf("\n                  /* scanf(''o/o d'',&a); */");
    printf("\n                  /* printf(''enter breath= ''); */");
	printf("\n                  /* scanf(''o/o d'',&b); */");
	printf("\n                  /* c=area(a,b); */");
	printf("\n                  /* printf('' area= o/o d'',c); */");
	printf("\n                  /* c=perimeter(a,b); */");
	printf("\n                  /* printf('' perimeter= o/o d'',c); */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                 /* int area(int x,int y) */");
	printf("\n                  /* { */");
	printf("\n                  /* int z; */");
	printf("\n                  /* z=x*y; */");
	printf("\n                  /* return z; */");
    printf("\n                  /* } */");
    printf("\n\n                 /* int perimeter(int x,int y) */");
	printf("\n                  /* { */");
	printf("\n                  /* int j; */");
	printf("\n                  /* j=2*(x+y); */");
	printf("\n                  /* return j; */");
    printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/
    printf("\n enter length");
    scanf("%d",&h);
    printf("\n enter breath");
    scanf("%d",&i);
    l=area(h,i);
    printf("\n  area= %d",l);
    l=perimeter(h,i);
    printf("\nperimeter=%d",l);
    return 0;
    break;


    case 5:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int c,f; */");
	printf("\n                  /* printf(''enter the temp in celcius=''); */");
	printf("\n                  /* scanf(''o/o d'',&c); */");
    printf("\n                  /* f=((9*x)/5)+32; */");
	printf("\n                  /* printf(''farenheit= o/o d'',f); */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/
	printf("\n enter the temp in celcius=");
    scanf("%d",&celcis);
    farenheit=celcius(celcis);
    printf("\n  farenheit= %d",farenheit);
    return 0;
    break;


    case 6:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int number1,number2; */");
	printf("\n                  /* printf(''enter first number=''); */");
	printf("\n                  /* scanf(''o/o d'',&number1); */");
	printf("\n                  /* printf(''enter second number=''); */");
	printf("\n                  /* scanf(''o/o d'',&number2); */");
    printf("\n                  /* if(number1<number2) */");
    printf("\n                  /* { */");
	printf("\n                  /* printf(''max is= o/o d'',number2); */");
	printf("\n                  /* } */");
	printf("\n                  /* else*/");
	printf("\n                  /* { */");
	printf("\n                  /* printf(''max is= o/o d'',number1); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/
    printf("\n enter first number=");
    scanf("%d",&number1);
    printf("\n enter second number=");
    scanf("%d",&number2);
    if(number1>number2)
        {
            printf("\n  maximum is= %d",number1);
        }
    else
        {
            printf("\n  maximum is= %d",number2);
        }

    return 0;
    break;


    case 7:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int number1; */");
	printf("\n                  /* printf(''enter first number=''); */");
	printf("\n                  /* scanf(''o/o d'',&number1); */");
	printf("\n                  /* if(number1 o/o 2 ==0) */");
    printf("\n                  /* { */");
	printf("\n                  /* printf(''number is= o/o d even'',even); */");
	printf("\n                  /* } */");
	printf("\n                  /* else*/");
	printf("\n                  /* { */");
	printf("\n                  /* printf(''number is= o/o d odd'',even); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/

    printf("\n enter a number=");
    scanf("%d",&even);
    if(even%2==0)
    {
        printf("\nthe number is %d even",even);
    }
    else
    {
        printf("\n the number %d is odd",even);
    }
    break;


    case 8:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int number1; */");
	printf("\n                  /* printf(''enter your age=''); */");
	printf("\n                  /* scanf(''o/o d'',&age); */");
	printf("\n                  /* if(age<=18) */");
    printf("\n                  /* { */");
	printf("\n                  /* printf(''you are teenager''); */");
	printf("\n                  /* } */");
	printf("\n                  /* else*/");
	printf("\n                  /* { */");
	printf("\n                  /* printf(''you are not teenager''); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/

    printf("\nenter your age=");
    scanf("%d",&age);
    if(age<=18)
    {
        printf("\nyou are teenager");
    }
    else
    {
        printf("\n you are not teenager");
    }
    break;


    case 9:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int number; */");
	printf("\n                  /* printf(''enter a number=''); */");
	printf("\n                  /* scanf(''o/o d'',&number); */");
	printf("\n                  /* if(number>0) */");
    printf("\n                  /* { */");
	printf("\n                  /* printf(''number is= o/o d possitive'',number); */");
	printf("\n                  /* } */");
	printf("\n                  /* else*/");
	printf("\n                  /* { */");
	printf("\n                  /* printf(''number is= o/o d negative'',number); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/

    printf("\n enter a number = ");
    scanf("%d",&possitive);
    if(possitive>0)
    {
        printf("\n the number is %d possitive.",possitive);
    }
    else
    {
        printf("\n the number is%d negative",possitive);
    }
    break;



    case 10:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int science,math; */");
	printf("\n                  /* printf(''enter your number in science subject=''); */");
	printf("\n                  /* scanf(''o/o d'',&science); */");
	printf("\n                  /* printf(''enter your number in math subject=''); */");
	printf("\n                  /* scanf(''o/o d'',&math); */");
    printf("\n                  /* if(science<=60||math<=75) */");
    printf("\n                  /* { */");
	printf("\n                  /* printf(''you are qualify for science talent exam''); */");
	printf("\n                  /* } */");
	printf("\n                  /* else*/");
	printf("\n                  /* { */");
	printf("\n                  /* printf(''you are not qualify for science talent exam''); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/
    printf("\n enter your number in science subject=");
    scanf("%d",&science);
    printf("\n enter your number in math subject=");
    scanf("%d",&math);
    if(science<=60||math<=75)
    {
        printf("\n you are qualify for science talent exam");
    }
    else
    {
        printf("\n you are not qualify for science talent exam");
    }
    break;


    case 11:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int science,math; */");
	printf("\n                  /* printf(''enter your number in science subject=''); */");
	printf("\n                  /* scanf(''o/o d'',&science); */");
	printf("\n                  /* printf(''enter your number in math subject=''); */");
	printf("\n                  /* scanf(''o/o d'',&math); */");
    printf("\n                  /* if(science<=60||math<=75) */");
    printf("\n                  /* { */");
	printf("\n                  /* printf(''you are qualify for science talent exam''); */");
	printf("\n                  /* } */");
	printf("\n                  /* else*/");
	printf("\n                  /* { */");
	printf("\n                  /* printf(''you are not qualify for science talent exam''); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/
    printf("\n enter first digit= ");
    scanf("%d",&digit1);
    printf("\n enter the character(+,-,*,/,^)= ");
    getchar();
    scanf("%c",&c1);
    printf("\n enter second digit= ");
    scanf("%d",&digit2);
    if(c1=='+')
    {
        result=digit1+digit2;
        printf("\n sum of this digit is=%d",result);
    }
    if(c1=='-')
    {
        result=digit1-digit2;
        printf("\n sum of this digit is=%d",result);
    }
    if(c1=='*')
    {
        result=digit1*digit2;
        printf("\n sum of this digit is=%d",result);
    }
    if(c1=='/')
    {
        result1=digit1/digit2;
        printf("\n sum of this digit is=%d",result1);
    }
    if(c1=='^')
    {
        result=pow(digit1,digit2);
            printf("\n sum of this digit is=%d",result);
    }
    break;

    case 12:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  // #include<stdio.h> */");
	printf("\n                  // int main(){ */");
	printf("\n                  // int bs,da,ta,gs; */");
	printf("\n                  // printf(''enter your basic salary=''); */");
	printf("\n                  // scanf(''o/o d'',& bs''); */");
    printf("\n                  // da=(10*bs)/100);");
    printf("\n                  // ta=(12*bs)/100);");
    printf("\n                  // gs=bs+da+ta;");
	printf("\n                  // printf(''your gross salary=o/od'',gs); */");
	printf("\n                  // } */");
	printf("\n                  // return 0; */");
	printf("\n                  // } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/
    printf("\n enter basic salary:");
    scanf("%d",&bs);
    da=(10*bs)/100;
    ta=(12*bs)/100;
    gs=bs+da+ta;
    printf("\n gross saraly=%d",gs);
    break;


    case 13:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int ts,h,m,s; */");
	printf("\n                  /* printf(''enter total sec=''); */");
	printf("\n                  /* scanf(''o/o d'',& ts''); */");
    printf("\n                  /* h=ts/3600;");
    printf("\n                  /* ts=ts o/o 3600;");
    printf("\n                  /* m=ts/60;");
    printf("\n                  /* s=ts o/o 60;");
	printf("\n                  /* printf(''hour=o/o d min=o/o d sec=o/o d'',h,m,s); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/

	printf("\n enter total second = ");
	scanf("%d",&ts);
	hour=ts/3600;
	ts=ts%3600;
	minute=ts/60;
	sec=ts%60;
	printf("\n houe=%d  minute=%d  second=%d",hour,minute,sec);
	break;



    case 14:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* float km,ans,ans1,ans2; */");
	printf("\n                  /* printf(''enter distance in km =''); */");
	printf("\n                  /* scanf(''o/o f'',& km''); */");
    printf("\n                  /* ans=km*1000;");
    printf("\n                  /* ans1=km*100000;");
    printf("\n                  /* ans2=km*1000000;");
    printf("\n                  /* printf(''meter=o/o f cm=o/o f mm=o/o f'',ans,ans1,ans2); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/

    printf("\n enter distance in K.M. =");
    scanf("%f",&km);
    ans=km*1000;
    ans1=km*100000;
    ans2=km*1000000;
    printf("\n meter=%.2f  centimeter=%.2f  mm=%.2f",ans,ans1,ans2);
    break;



    case 15:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int swap1,swap2,temp; */");
	printf("\n                  /* printf(''enter a value for A =''); */");
	printf("\n                  /* scanf(''o/o d'',& swap1''); */");
	printf("\n                  /* printf(''enter a value for B =''); */");
	printf("\n                  /* scanf(''o/o d'',& swap2''); */");
    printf("\n                  /* temp=swap1;");
    printf("\n                  /* swap1=swap2;");
    printf("\n                  /* swap2=temp;");
    printf("\n                  /* printf(''after swapping the value for A and B is = %d  %d '', swap1,swap2); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/

    printf("\n enter a value for A =");
    scanf("%d",&swap1);
    printf("\n enter a value for B =");
    scanf("%d",&swap2);
    temp1=swap1;
    swap1=swap2;
    swap2=temp1;
    printf("\n after swapping the value for A and B is = %d  %d ", swap1,swap2);
    break;



    case 16:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int a1; */");
	printf("\n                  /* printf(''enter a char =''); */");
	printf("\n                  /* scanf(''o/o d'',& a1''); */");
    printf("\n                  /* printf('' the ASCII value of o/o c is = o/o d'',a1,a1);");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/

    printf("\n  enter a char for see the ascii value of this=");
    getchar();
    scanf("%c",&a1);
    printf("\n the ASCII value of %c is = %d",a1,a1);
    break;



    case 17:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                  /* #include<stdio.h> */");
	printf("\n                  /* int main(){ */");
	printf("\n                  /* int a,b,x,y,t,lcm,gcd; */");
	printf("\n                  /* printf(''enter two number''); */");
	printf("\n                  /* scanf(''o/o d o/o d'',&x,&y''); */");
	printf("\n                  /* a=x; */");
	printf("\n                  /* b=y; */");
	printf("\n                  /* while(b!=0) */");
	printf("\n                  /* {t=b;b=a o/o b;a=t;} */");
	printf("\n                  /* gcd=a;lcm=(x*y)/gcd; */");
	printf("\n                  /* printf(''gcd= o/o d'',gcd); */");
    printf("\n                  /* printf(''lcm= o/o d'',lcm); */");
	printf("\n                  /* } */");
	printf("\n                  /* return 0; */");
	printf("\n                  /* } */");
	printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
	/*program*/
	int xx,yy,aa,bb,tt,lcm,gcd;
	printf("\n enter two int = ");
	scanf("%d %d",&xx,&yy);
	aa=xx;
	bb=yy;
	while(bb!=0)
    {
        tt=bb;
        bb=aa%bb;
        aa=tt;
    }
    gcd=aa;
    lcm=(xx*yy)/gcd;
    printf("\n gcd is= %d",gcd);
    printf("\n lcm is= %d",lcm);
  }




}

if(choise=='b')
  {

printf("\n\n\n     1. WAP to print this pattern where number of row is input by user .");
printf("\n              *");
printf("\n              **");
printf("\n              ***");
printf("\n              ****");
printf("\n     2. WAP to print this pattern where number of row is input by user .");
printf("\n                 *");
printf("\n                **");
printf("\n               ***");
printf("\n              ****");
printf("\n     3. WAP to print this pattern where number of row is input by user .");
printf("\n              ****");
printf("\n               ***");
printf("\n                **");
printf("\n                 *");
printf("\n     4. WAP to print triangle pattern where number of row is input by user .");
printf("\n                 *");
printf("\n                ***");
printf("\n               *****");
printf("\n              *******");
printf("\n     5. WAP to print dimond pattern where number of row is input by user .");
printf("\n                 *");
printf("\n                ***");
printf("\n               *****");
printf("\n              *******");
printf("\n               *****");
printf("\n                ***");
printf("\n                 *");
printf("\n\n\n      enter the question number whose ans you want to see= ");
scanf("%d",&n);
printf("\n      *****************************************************");
switch(n)
    {
    case 1:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                   /* include<stdio.h> */");
	printf("\n                   /* int main(){ */");
    printf("\n                   /* int i,j,m; */");
    printf("\n                   /* printf(''enter the row''); */");
    printf("\n                   /* scanf(''o/o d'',&m); */");
    printf("\n                   /* for(i=1;i<=m;i++) */");
    printf("\n                   /* {   for(j=1;j<=i;j++) */");
    printf("\n                   /*     {printf(''*''); */");
    printf("\n                   /*    } printf(''\ n''); */");
    printf("\n                   /*   } */");
    printf("\n                   /* return 0 ;} */");
    printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
    //program
    printf("\n enter the no of row = ");
    scanf("%d",&row);
    ll=patlowerleft(row);
    break;


     case 2:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                   /* include<stdio.h> */");
	printf("\n                   /* int main(){ */");
    printf("\n                   /* int i,j,k,m; */");
    printf("\n                   /* printf(''enter the row''); */");
    printf("\n                   /* scanf(''o/o d'',&m); */");
    printf("\n                   /* for(i=1;i<=m;i++) */");
    printf("\n                   /* {   for(k=m;k>=i;k--) */");
    printf("\n                   /*     {printf('' '');} */");
    printf("\n                   /* {   for(j=1;j<=i;j++) */");
    printf("\n                   /*     {printf(''*''); */");
    printf("\n                   /*    }printf(''\ n''); */");
    printf("\n                   /*   } */");
    printf("\n                   /* return 0;} */");
    printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
    //program
    printf("\n enter the no of row = ");
    scanf("%d",&row);
    ll=patlowerright(row);
    break;

    case 3:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                   /* include<stdio.h> */");
	printf("\n                   /* int main(){ */");
    printf("\n                   /* int i,j,k,m; */");
    printf("\n                   /* printf(''enter the row''); */");
    printf("\n                   /* scanf(''o/o d'',&m); */");
    printf("\n                   /* for(i=1;i<=m;i++) */");
    printf("\n                   /* {   for(k=1;k<=i;k++) */");
    printf("\n                   /*     {printf('' '');} */");
    printf("\n                   /* {   for(j=m;j>=i;j--) */");
    printf("\n                   /*     {printf(''*''); */");
    printf("\n                   /*    }printf(''\ n''); */");
    printf("\n                   /*   } */");
    printf("\n                   /* return 0;} */");
    printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
    //program
    printf("\n enter the no of row = ");
    scanf("%d",&row);
    ll=patupperright(row);
    break;


    case 4:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                   /* include<stdio.h> */");
	printf("\n                   /* int main(){ */");
    printf("\n                   /* int i,j,k,m; */");
    printf("\n                   /* printf(''enter the row''); */");
    printf("\n                   /* scanf(''o/o d'',&m); */");
    printf("\n                   /* for(i=1;i<=m;i++) */");
    printf("\n                   /* {   for(k=m;k>=i;k--) */");
    printf("\n                   /*     {printf('' '');} */");
    printf("\n                   /* {   for(j=1;j<=i;j++) */");
    printf("\n                   /*     {printf(''*'');} */");
    printf("\n                   /*     for(j=2;j<=i;j++) */");
    printf("\n                   /*     {printf(''*'');} */");
    printf("\n                   /*    }printf(''\ n''); */");
    printf("\n                   /*   } */");
    printf("\n                   /* return 0;} */");
    printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
    //program
    printf("\n enter the no of row = ");
    scanf("%d",&row);
    ll=pattriangle(row);
    break;



    case 5:
	printf("\n                   PROGRAM-");
	printf("\n                **************");
	/*program print*/
	printf("\n                   /* include<stdio.h> */");
	printf("\n                   /* int main(){ */");
    printf("\n                   /* int i,j,k,m; */");
    printf("\n                   /* printf(''enter the row''); */");
    printf("\n                   /* scanf(''o/o d'',&m); */");
    printf("\n                   /* for(i=1;i<=m;i++) */");
    printf("\n                   /* {   for(k=m;k>=i;k--) */");
    printf("\n                   /*     {printf('' '');} */");
    printf("\n                   /* {   for(j=1;j<=i;j++) */");
    printf("\n                   /*     {printf(''*'');} */");
    printf("\n                   /*     for(j=2;j<=i;j++) */");
    printf("\n                   /*     {printf(''*'');} */");
    printf("\n                   /*    }printf(''\ n''); */");
    printf("\n                   /*  for(i=1;i<=m;i++) */");
    printf("\n                   /*   {for(k=1;k<=i;k++) */");
    printf("\n                   /*     {printf('' '');} */");
    printf("\n                   /*    for(j=m;j<=i;j--) */");
    printf("\n                   /*     {printf(''*'');} */");
    printf("\n                   /*     for(j=1;j<=i;j++)*/");
    printf("\n                   /*     {printf(''*'');} */");
    printf("\n                   /*     printf(''\ n''); */");
    printf("\n                   /*     } */");
    printf("\n                   /*     return 0;} */");
    printf("\n                   /* return 0; */");
    printf("\n\n                   OUTPUT-");
	printf("\n                 ***********");
    //program
    printf("\n enter the no of row = ");
    scanf("%d",&row);
    ll=patdimond(row);
    break;
   }
}

if(choise=='d')
  {
        printf("\n\n\n     1. WAP to addintion of two matrix where row and colume are user input.");
        printf("\n     2. WAP to subtraction of two matrix where row and colume are user input.");
        printf("\n     3. WAP to transpose of a matrix where row and colume are user input.");
        printf("\n     4. WAP to multiplication of two matrix where row and colume are user input.");
        printf("\n\n\n      enter the question number whose ans you want to see= ");
        scanf("%d",&n);
        printf("\n      *****************************************************");
            switch(n)
            {
            case 1:
            printf("\n                   PROGRAM-");
            printf("\n                **************");
            /*program print*/
            printf("\n                   /* include<stdio.h> */");
            printf("\n                   /* int main(){ */");
            printf("\n                   /* int a[50][50],i,j,m,n; */");
            printf("\n                   /* printf(''\ n enter number of column = ''); */");
            printf("\n                   /* scanf(''o\o d'',&m); */");
            printf("\n                   /* printf(''\ n enter number of row = ''); */");
            printf("\n                   /* scanf(''o\o d'',&n); */");
            printf("\n                   /* printf(''\ n enter matrix = ''); */");
            printf("\n                   /* for(i=0;i<m;i++) */");
            printf("\n                   /* {for(j=0;j<n;j++) */");
            printf("\n                   /* {scanf('' o/o d'',&a[i][j]);} */");
            printf("\n                   /* }printf(''\ n display of matrix is = \ n'');");
            printf("\n                   /* for(i=0;i<m;i++)");
            printf("\n                   /* {for(j=0;j<n;j++)");
            printf("\n                   /* {printf('' o/o d'',a[i][j]);} */");
            printf("\n                   /* printf(''\ n'');");
            printf("\n                   /* }");
            printf("\n                   /* return 0;");
            printf("\n\n                   OUTPUT-");
            printf("\n                 ***********");
            //program
            int a[4][4],i,j,m,n;
            printf("\n enter number of column = ");
            scanf("%d",&m);
            printf("\n enter number of row = ");
            scanf("%d",&n);
            printf("\n enter matrix = ");
            for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                        {
                            scanf("%d",&a[i][j]);
                        }
                }
            printf("\n display of matrix is = \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                    {
                        printf("%d ",a[i][j]);
                    }
                    printf("\n");
            }
                    break;


              case 2:
            printf("\n                   PROGRAM-");
            printf("\n                **************");
            /*program print*/
            printf("\n                   /* include<stdio.h> */");
            printf("\n                   /* int main(){ */");
            printf("\n                   /* int a[50][50],b[50][50],i,j,m,n,p,q; */");
            printf("\n                   /* printf(''\ n enter number of column for first = ''); */");
            printf("\n                   /* scanf(''o\o d'',&m); */");
            printf("\n                   /* printf(''\ n enter number of row = ''); */");
            printf("\n                   /* scanf(''o\o d'',&n); */");
            printf("\n                   /* printf(''\ n enter matrix = ''); */");
            printf("\n                   /* for(i=0;i<m;i++) */");
            printf("\n                   /* {for(j=0;j<n;j++) */");
            printf("\n                   /* {scanf(''o/o d'',&a[i][j]);} */");
            printf("\n                   /* printf(''\ n enter number of column for second = ''); */");
            printf("\n                   /* scanf(''o\o d'',&p); */");
            printf("\n                   /* printf(''\ n enter number of row = ''); */");
            printf("\n                   /* scanf(''o\o d'',&q); */");
            printf("\n                   /* printf(''\ n enter matrix = ''); */");
            printf("\n                   /* for(i=0;i<p;i++) */");
            printf("\n                   /* {for(j=0;j<q;j++) */");
            printf("\n                   /* {scanf(''o/o d'',&b[i][j]);} */");
            printf("\n                   /* }printf(''\ n display of matrix is = \ n'');");
            printf("\n                   /* for(i=0;i<m;i++)");
            printf("\n                   /* {for(j=0;j<n;j++)");
            printf("\n                   /* {printf('' o/o d'',a[i][j]+b[i][j]);} */");
            printf("\n                   /* printf(''\ n'');");
            printf("\n                   /* }");
            printf("\n                   /* return 0;");
            printf("\n\n                   OUTPUT-");
            printf("\n                 ***********");
            //program
            int x[4][4],b[4][4],c[4][4],ii,jj,mm,nn,p,q;
            printf("\n enter number of columnand and row for first matrix = ");
            scanf("%d %d",&mm,&nn);
            printf("\n enter number of column and row for second matrix = ");
            scanf("%d %d",&p,&q);
            if(mm==p&&nn==q)
                {
                    printf("\n enter first matrix = ");
                    for(ii=0;ii<mm;ii++)
                        {
                            for(jj=0;jj<nn;jj++)
                                {
                                    scanf("%d",&x[ii][jj]);
                                }
                        }
                        printf("\n enter second matrix = ");
                        for(ii=0;ii<p;ii++)
                            {
                                for(jj=0;jj<q;jj++)
                                {
                                    scanf("%d",&b[ii][jj]);
                                }
                            }
                    printf("\n display of matrix is = \n");
                    for(ii=0;ii<mm;ii++)
                    {
                        for(jj=0;jj<nn;jj++)
                            {
                                c[ii][jj]=x[ii][jj]+b[ii][jj];
                                printf("%d ",c[ii][jj]);
                            }
                            printf("\n");
                    }
                }
                else
                {
                    printf("\n sum is not possible .");
                }
                    break;


            case 4:
            printf("\n                   PROGRAM-");
            printf("\n                **************");
            /*program print*/
            printf("\n                   /* include<stdio.h> */");
            printf("\n                   /* int main(){ */");
            printf("\n                   /* int a[10][10],b[10][10],i,j,m,n; */");
            printf("\n                   /* printf(''\ n enter number of column = ''); */");
            printf("\n                   /* scanf(''o\o d'',&m); */");
            printf("\n                   /* printf(''\ n enter number of row = ''); */");
            printf("\n                   /* scanf(''o\o d'',&n); */");
            printf("\n                   /* printf(''\ n enter matrix = ''); */");
            printf("\n                   /* for(i=0;i<m;i++) */");
            printf("\n                   /* {for(j=0;j<n;j++) */");
            printf("\n                   /* {scanf(''o/o d'',&a[i][j]);} */");
            printf("\n                   /* }printf(''\ n display of matrix is = \ n'');");
            printf("\n                   /* for(i=0;i<m;i++)");
            printf("\n                   /* {for(j=0;j<n;j++)");
            printf("\n                   /* {b[i][j]=a[j][i];");
            printf("\n                   /* printf('' o/o d'',b[i][j]);} */");
            printf("\n                   /* printf(''\ n'');");
            printf("\n                   /* }");
            printf("\n                   /* return 0;");
            printf("\n\n                   OUTPUT-");
            printf("\n                 ***********");
            //program
            int aaa[4][4],t[4][4],iii,jjj,mmm,nnn;
            printf("\n enter number of column = ");
            scanf("%d",&mmm);
            printf("\n enter number of row = ");
            scanf("%d",&nnn);
            printf("\n enter matrix = ");
            for(iii=0;iii<mmm;iii++)
                {
                    for(jjj=0;jjj<nnn;jjj++)
                        {
                            scanf("%d",&aaa[iii][jjj]);
                        }
                }
            printf("\n transpose of the matrix is = \n");
            for(iii=0;iii<mmm;iii++)
            {
                for(jjj=0;jjj<nnn;jjj++)
                    {
                        t[iii][jjj]=aaa[jjj][iii];
                        printf("%d ",t[iii][jjj]);
                    }
                    printf("\n");
            }
            break;

        }

    }


if(choise=='c')
   {
        printf("\n\n\n     1. WAP to sum of the 10 elements of array .");
        printf("\n     2. WAP to find the maximum and minimum no. in a array .");
        printf("\n     3. WAP to find the maximum and second maximum no. in a array .");
        printf("\n     4. WAP to print odd and even number of an array separately .");
        printf("\n     5. WAP to reverse of an array .");
        printf("\n     6. WAP to find how many times a number present in array .");
        printf("\n     7. WAP to remove duplicate number from an array .");
        printf("\n\n\n      enter the question number whose ans you want to see= ");
        scanf("%d",&n);
        printf("\n      *****************************************************");
        switch(n)
            {
                case 1:
                printf("\n                   PROGRAM-");
                printf("\n                **************");
                /*program print*/
                printf("\n                   /* include<stdio.h> */");
                printf("\n                   /* int main(){ */");
                printf("\n                   /* int i,a[10],s=0;");
                printf("\n                   /* for(i=0;i<10;i++)");
                printf("\n                   /* {scanf(''o/o d'',&a[i]);}");
                printf("\n                   /* for(i=0;i<10;i++)");
                printf("\n                   /* {s=s+a[i];");
                printf("\n                   /* printf(''sum of array is o/o d'',s);");
                printf("\n                   /* return 0;");
                printf("\n\n                   OUTPUT-");
                printf("\n                 ***********");
                //program
                printf("\n enter the 10 element= ");
                for(x=0;x<10;x++)
                {
                       scanf("%d",&arr[x]);
                }
                for(x=0;x<10;x++)
                {
                       sum=sum+arr[x];
                }
                printf("sum of array is = %d",sum);
                break;

                case 2:
                printf("\n                   PROGRAM-");
                printf("\n                **************");
                /*program print*/
                printf("\n                   /* include<stdio.h> */");
                printf("\n                   /* int main(){ */");
                printf("\n                   /* int i,a[10],max,min;");
                printf("\n                   /* for(i=0;i<10;i++)");
                printf("\n                   /* {scanf(''o/o d'',&a[i]);}");
                printf("\n                   /* max=a[0];min=a[0];");
                printf("\n                   /* for(i=0;i<10;i++)");
                printf("\n                   /*");





                printf("\n                   /* return 0;");
                printf("\n\n                   OUTPUT-");
                printf("\n                 ***********");
                //program
                printf("\n enter the 5 element= ");
                for(x=0;x<5;x++)
                {
                       scanf("%d",&arr[x]);
                }
                max=arr[0];
                for(x=0;x<5;x++)
                {
                       if(max<arr[x])
                       {
                           max=arr[x];
                       }
                       if(min>arr[x])
                       {
                           min=arr[x];
                       }
                }
                printf("\nmaximum of array is = %d",max);
                printf("\n minimum of array is = %d",min);

                break;

                case 3:
                printf("\n                   PROGRAM-");
                printf("\n                **************");
                /*program print*/
                printf("\n                   /* include<stdio.h> */");
                printf("\n                   /* int main(){ */");






                printf("\n                   /* return 0;");
                printf("\n\n                   OUTPUT-");
                printf("\n                 ***********");
                //program
                printf("\n enter the 5 element= ");
                for(x=0;x<5;x++)
                {
                       scanf("%d",&arr[x]);
                }
                max=arr[0];
                for(x=0;x<5;x++)
                {
                      if(max<arr[x])
                       {
                           maxs=max;
                           max=arr[x];
                       }
                }
                printf("maximum  and second maximum of array are = %d %d",max,maxs);
                break;

                case 4:
                printf("\n                   PROGRAM-");
                printf("\n                **************");
                /*program print*/
                printf("\n                   /* include<stdio.h> */");
                printf("\n                   /* int main(){ */");






                printf("\n                   /* return 0;");
                printf("\n\n                   OUTPUT-");
                printf("\n                 ***********");
                //program
                printf("\n enter the 5 element= ");
                for(x=0;x<5;x++)
                {
                       scanf("%d",&arr[x]);
                }
                printf("\n even number -  ");
                for(x=0;x<5;x++)
                {
                       if(arr[x]%2==0)
                       {
                           printf("%d ",arr[x]);
                       }

                }
                printf("\n odd number -  ");
                for(x=0;x<5;x++)
                {
                       if(arr[x]%2!=0)
                       {
                           printf("%d ",arr[x]);
                       }

                }
                break;

                case 5:
                printf("\n                   PROGRAM-");
                printf("\n                **************");
                /*program print*/
                printf("\n                   /* include<stdio.h> */");
                printf("\n                   /* int main(){ */");






                printf("\n                   /* return 0;");
                printf("\n\n                   OUTPUT-");
                printf("\n                 ***********");
                //program
                printf("\n enter the 5 element= ");
                for(x=0;x<5;x++)
                {
                       scanf("%d",&arr[x]);
                }
                for(x=4;x>=0;x--)
                {
                      printf("\nreverse of array is = %d",arr[x]);
                }

                break;

                case 6:
                printf("\n                   PROGRAM-");
                printf("\n                **************");
                /*program print*/
                printf("\n                   /* include<stdio.h> */");
                printf("\n                   /* int main(){ */");






                printf("\n                   /* return 0;");
                printf("\n\n                   OUTPUT-");
                printf("\n                 ***********");
                //program
                printf("\n enter the 5 element= ");
                for(x=0;x<5;x++)
                {
                       scanf("%d",&arr[x]);
                }
                printf("\n enter a number what want to search = ");
                scanf("%d",&search);
                for(x=0;x<5;x++)
                {
                      if(arr[x]==search)
                      {
                          count++;
                      }
                }

                printf("your number %d is present = %d times",search,count);

                break;


                case 7:
                printf("\n                   PROGRAM-");
                printf("\n                **************");
                /*program print*/
                printf("\n                   /* include<stdio.h> */");
                printf("\n                   /* int main(){ */");






                printf("\n                   /* return 0;");
                printf("\n\n                   OUTPUT-");
                printf("\n                 ***********");
                //program
                printf("\n enter the 5 element= ");
                for(x=0;x<5;x++)
                {
                       scanf("%d",&arr[x]);
                }
                for(x=0;x<5;x++)
                {
                      if(arr[x]==search)
                      {
                          count++;
                      }
                }

                printf("your number %d is present = %d times",search,count);

                break;


            }
       }





getch();
}
/*end main program*/

/*function program*/




/*for second program*/
int three(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
/*for four program*/
int four(int x,int y,int z)
{
    int p;
    p=(x+y+z)/3;
    return p;
}
int area(int x,int y)
{
    int z;
    z=x*y;
    return z;
}
/*for five program*/
int perimeter(int x,int y)
{
    int j;
    j=2*(x+y);
    return j;
}
/*for six program*/
int celcius(int x)
{
    int z;
    z=((9*x)/5)+32;
    return z;
}
