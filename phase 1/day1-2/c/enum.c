//enumeration
#include<stdio.h>
enum weekdays{
      mon=1,tue,wed,thu,fri,sat,sun
};
int main(){
      enum weekdays day;
      day = sun;
      printf("today is day %d of the week.",day);
      return 0;
}