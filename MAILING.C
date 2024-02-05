#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 40
struct addr
{
 char name [40],addr [40],age [40],sex [40],seat [40];
 int seat_number [40];
}
 addr_info[SIZE],seat_number[SIZE];

 void enter(void),init_list(void),display(void);
 void save(void),load(void);

 int menu(void);
 int x;
 char choice;

main()
{
 printf(" ***CpE AIRLINE'S SIT NUMBER***\n\n\n");
 for(x=0;x<10;x++)
 {
 printf("[%2d01] [%2d02]     [%2d03] [%2d04]\n\n",x,x,x,x);
 }

 init_list();

 for(;;)
 {
  choice=menu();
  switch(choice)
  {
   case 'e': enter();
    break;
   case 'd': display();
    break;
   case 'q': exit(1);
   }
  }
 }

 void init_list(void)
 {
  register int t;

  for(t=0;t<SIZE;t++)*addr_info[t].name='\0';
 }
 menu(void)
 {
  int seat [40];
  char s[80];

  do
  {
   printf("\n(E)nter\n");
   printf("(D)isplay\n");
   printf("(Q)uit\n\n");
   printf("choose one: ");
   gets(s);
  }
   while(!strchr("ed1sq",tolower(*s)));
   return tolower(*s);
  }

  void enter(void)
  {
   register int i;

   for(i=0;i<SIZE;i++)
    if(!*addr_info[i].name)
    break;
    if(i==SIZE)
    {
     printf("addr_info full\n");
     return;
    }
     printf("seat number: ");
     gets(addr_info[i].seat);
     printf("name: ");
     gets(addr_info[i].name);
     printf("address: ");
     gets(addr_info[i].addr);
     printf("sex: ");
     gets(addr_info[i].sex);
     printf("age: ");
	gets(addr_info[i].age);
    }
    void display(void)
    {
     register int t;

     for(t=0;t<SIZE;t++)
      if(*addr_info[t].name)
      {
       printf("%s\n",seat_number[t].name);
       printf("%s\n",addr_info[t].name);
       printf("%s\n",addr_info[t].addr);
       printf("%s\n",addr_info[t].sex);
       printf("%s\n",addr_info[t].age);

      }
     }