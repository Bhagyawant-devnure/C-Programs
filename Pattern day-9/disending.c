/*1 2 3 4
  2 3 4 5
  3 4 5 6*/
  #include<stdio.h>
  #include<conio.h>
  void main()
  {
    int nr,nc,r,c,a;
    printf("enter no of rows and colums ");
    scanf("%d %d",&nr,&nc);
    for (r= 1; r < nr; r++)
    {
    for ( a=r ,c=1; c<=nc; c++)
    {
        printf("%3d",a++);
    }
    printf("\n");
    }
    getch();
  }