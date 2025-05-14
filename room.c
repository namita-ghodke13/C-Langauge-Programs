/*Consider a room having one door and two windows both of the same size.
Accept dimensions of the room,door and window.Print the area to be painted
(interior walls) and area to be whitewashed (roof).*/

#include<stdio.h>
int main()
{
  float room_len,room_width,room_height,door_len,door_height,window_len,window_height,paint_area,whitewash_area;
  printf("Enter Dimensions of Room - ");
  printf("\nEnter Length : ");
  scanf("%f",&room_len);
  printf("Enter Width : ");
  scanf("%f",&room_width);
  printf("Enter Height : ");
  scanf("%f",&room_height);
  printf("Enter Dimensions of Door - ");
  printf("\nEnter Length : ");
  scanf("%f",&door_len);
  printf("Enter Height : ");
  scanf("%f",&door_height);
  printf("Enter Dimensions of Window - ");
  printf("\nEnter Length : ");
  scanf("%f",&window_len);
  printf("Enter Height : ");
  scanf("%f",&window_height);
  paint_area=4*room_len*room_height-door_len*door_height-2*window_len*window_height;
  whitewash_area=room_len*room_width;
  printf("\nArea to be Painted = %.2f",paint_area);
  printf("\nArea to be whitewashed = %.2f",whitewash_area);
}