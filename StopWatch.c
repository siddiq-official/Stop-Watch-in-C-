#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int hour=0;minute=0;second=0;flag=0;

void delay(ms){

  clock_t timeDelay = ms + clock();
  while(timeDelay > clock());
}
int counter()
{
    while(!kbhit() && flag == 0)
    {
        if(minute>59){
               minute = 0;
               ++hour;
            }

    if(second>59)
    {
        second == 0;
        ++minute;
    }
    printData();
    delay(1000);
    ++second;
    }
    selection();
}
int selection()
{
    switch(getch())
    {
    case 49:
        flag = 0;
        break;
    case 50:
        flag = 1;
        break;
    case 51:
        hour = minute =second = 0;
        flag =1;
        break;
    case 52:
        exit(0);
        break;
    }
}
int printData(){
   system("cls");
   printf("1.Start 2.stop 3.Reset 4.End\n");
   printf("******************************\n");
   printf("           %d:%d:%d", hour,minute,second);
   printf("\n******************************");

}
int main()
{
    while(1){

    counter();
    }
    //printData();
    return 0;
}
