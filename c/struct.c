#include<stdio.h>
struct Person{
      char *name;
      int age;
      int id;
};
int main(){
      //char data[20]="Arun Shenoy";
      struct Person p;
      p.name="aruna";
      p.age=21;
      p.id=19;
      printf("name: %s\n",p.name);
      printf("age: %d\n",p.age);
      printf("id: %d\n",p.id);
      printf("The size of %llu bytes\n",sizeof(p));
      return 0;
}