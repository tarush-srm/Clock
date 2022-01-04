#include <stdio.h>
#include <windows.h>

int main(){
int Hours, Minutes, Seconds;

printf("enter the time: \n");
scanf("%d%d%d",&Hours,&Minutes,&Seconds);

if(Hours>12 || Minutes>60 || Seconds>60)
  {
    printf("ERROR");
    exit(0);
  }
  int True = 1;
  while(True)
  {
    Seconds++;
    if(Seconds>59)
    {
        Minutes++;
        Seconds = 0;
    }
    if(Minutes>59)
     {
        Hours++;
        Minutes = 0;
     }
    if(Hours>12)
      {
        Hours = 1;
      }
      printf("\n Clock:");
      printf("\n %02d:%02d:%02d",Hours,Minutes,Seconds);
      Sleep(1000);
      system("cls");
  }

  return 0;
}
