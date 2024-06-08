#include <stdio.h>
int main() 
{
int a[10][10]={0},i,j,low=0,top=9,n=1;
for(i=0;i<5;i++,low++,top--){
    for(j=low;j<=top;j++,n++)
      	a[i][j]=n;
    for(j=low+1;j<=top;j++,n++)
    	a[j][top]=n;
    for(j=top-1;j>=low;j--,n++)
      	a[top][j]=n;
    for(j=top-1;j>low;j--,n++)
      	a[j][low]=n;
}
	printf("\033[32m\nPerfect Square\n");
  	for(i=0;i<10;i++){
		printf("\n\n");
    for(j=0;j<10;j++){
      	printf("\033[32m\t%d",a[i][j]);
    }
}
	return 0;
}

// FUN CODE 

//#include <stdio.h>
//int main() {
//  int a[10][10] = {0}, i, j, low = 0, top = 9, n = 1;
//  const char* colors[] = {"\033[31m", "\033[32m", "\033[33m", "\033[34m", "\033[35m", "\033[36m"}; // Red, Green, Yellow, Blue, Magenta, Cyan
//  int color_index = 0;
//
//  for (i = 0; i < 5; i++, low++, top--) {
//    for (j = low; j <= top; j++, n++)
//      a[i][j] = n;
//    for (j = low + 1; j <= top; j++, n++)
//      a[j][top] = n;
//    for (j = top - 1; j >= low; j--, n++)
//      a[top][j] = n;
//    for (j = top - 1; j > low; j--, n++)
//      a[j][low] = n;
//  }
//
//  printf("%sPerfect Square\n", colors[color_index++ % 6]); // Cycle through colors
//
//  for (i = 0; i < 10; i++) {
//    printf("\n\n");
//    for (j = 0; j < 10; j++) {
//      printf("%s\t%d", colors[color_index++ % 6], a[i][j]); // Cycle through colors
//    }
//    printf("\033[0m"); // Reset color
//  }
//  return 0;
//}
