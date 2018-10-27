# include<stdio.h>
int aaa=10;
int bbb=20;
void SWITCH(void);
int main()
{
  printf("aaa=%d bbb=%d\n",aaa,bbb);
  SWITCH();
  printf(" after calling SWITCH procedure, aaa=%d bbb =%d\n",aaa,bbb);
  return 0;
}
void SWITCH (void)
{
  int temp;
  temp=aaa;
  aaa=bbb;
  bbb=temp;
  return;  
} 


  

