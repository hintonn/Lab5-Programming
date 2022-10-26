#include <stdio.h>


int main ()
{
  char boy1[15], boy2[15], boy3[15];
int hair, personality, ass, smile, funny, yummy;
int Boy1=0, Boy2=0, Boy3 =0;

printf ("WELCOME TO JORDAN'S LOVE LIFE SIMULATION!!!\n\n");

 printf ("enter the name of boy #1: ");
    scanf ("%[^\n]%*c", boy1);
  printf ("enter the name of boy #2: ");
    scanf ("%[^\n]%*c", boy2);
  printf ("enter the name of boy #3: ");
	scanf("%[^\n]%*c", boy3);


  printf ("enter the boy number who has the best hair: ");
  scanf ("%d", &hair);
if  (hair == 1)
Boy1+=1;
else if (hair == 2)
Boy2+=1;
else
 Boy3 +=1;

  printf ("enter the boy number who is the funniest: ");
  scanf ("%d", &funny);
if  (funny == 1)
Boy1+=1;
else if (funny == 2)
Boy2+=1;
else
 Boy3 +=1;

   printf ("enter the boy number who is most yummy: ");
  scanf ("%d", &yummy);
if  (yummy == 1)
Boy1+=1;
else if (yummy == 2)
Boy2+=1;
else
 Boy3 +=1;

printf ("enter the boy number who has the best personality: ");
  scanf ("%d", &personality);
  if  (personality==1)
 Boy1 +=1;
else if (personality ==2)
Boy2 +=1;
 else
 Boy3 +=1;

  printf ("enter the boy number who has the juiciest ass: ");
  scanf ("%d", &ass);
 if  (ass==1) Boy1 +=1;
  else if (ass ==2) Boy2 +=1;
 else Boy3 +=1;

  printf ("enter the boy number who has the best smile: ");
  scanf ("%d", &smile);
 if  (smile==1) Boy1 +=1;
 else if (smile ==2) Boy2 +=1;
 else Boy3 +=1;



 if (Boy1 > Boy2)
    {
        if (Boy1 > Boy3)
        printf ("\n\nyour soulmate is %s", boy1);
        else if (Boy3 > Boy1)
        printf ("\n\nyour soulmate is %s", boy3);
        else
        printf ("\n\nmake up your mind babes... %s or %s", boy1, boy3);

    }
 else if (Boy2 > Boy3)
    {
        if (Boy2 > Boy1)
        printf ("\n\nyour soulmate is %s", boy2);
        else
        printf ("\n\nmake up your mind babes... %s or %s", boy2, boy1);
    }
else if (Boy3 > Boy1)
    {
        if (Boy3 > Boy2)
        printf ("\n\nyour soulmate is %s", boy3);
        else
        printf ("\n\nmake up your mind babes... %s or %s", boy3, boy2);
    }
else
    printf ("\n\nur dumb bro, it's a three way tie");
  return 0;

}
