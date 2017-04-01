//For windows 7

#include <stdio.h>
#include <stdlib.h>

int main()
{
   system("C:\\WINDOWS\\System32\\shutdown /s");

   return 0;
}
//To shutdown immediately use "C:\\WINDOWS\\System32\\ shutdown /s /t 0". To restart use /r instead of /s.

//For windows XP
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;

   printf("Do you want to shutdown your computer now (y/n)\n");
   scanf("%c", &ch);

   if (ch == 'y' || ch == 'Y')
      system("C:\\WINDOWS\\System32\\shutdown -s");

   return 0;
}
*/
//To shutdown immediately  write "shutdown -s -t 0" and to restart write"shutdown -r".

//C programming code for Ubuntu Linux
/*
#include <stdio.h>

int main() {
  system("shutdown -P now");
  return 0;
}
*/


//You need to be logged in as root user for above program to execute otherwise you will get the message shutdown: Need to be root, now specifies that you want to shutdown immediately. '-P' option specifies you want to power off your machine. You can specify minutes as:
//shutdown -P "number of minutes"
//For more help or options type at terminal: man shutdown.
