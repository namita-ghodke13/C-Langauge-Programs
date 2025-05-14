/*Accept initial velocity(u),acceleration(a) and time(t).Print the final 
velocity(v) and the distance(s) travelled.(Hint: v=u+a*t,s=u+a*t*t)*/

#include<stdio.h>
int main()
{
   int t;
   float u,a,v,s;
   printf("Enter Initial Velocity : ");
   scanf("%f",&u);
   printf("Enter Acceleration : ");
   scanf("%f",&a);
   printf("Enter Time : ");
   scanf("%d",&t);
   v=u+a*t;
   s=u+a*t*t;
   printf("Final Velocity = %.2f",v);
   printf("\nDistance Travelled = %.2f",s);
}