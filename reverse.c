/* 9. Write a C program that ask an input string, and when entered the output
shall be the inverse of the corresponding string, but that the user has to
decide the number of characters to inverse.*/


 #include<stdio.h>
main()
{
char s1[10];

printf("\nEnter String Lenghts to reverse:");
gets(s1);
printf("\nReverse String : %s", strrev(s1));
printf("\nLength: %d", strlen(s1));

getch();

}

