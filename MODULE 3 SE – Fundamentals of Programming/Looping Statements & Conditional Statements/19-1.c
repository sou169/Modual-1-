#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter no. of rows u want: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j%2==0){
            printf("0 ");	
        }
        else{
        	printf("1 ");
		}
        }
    printf("\n");
    }
    return 0;
}

//n=5
//i=1 j=1 else condition - print 1
//i=2 j=1 else cond printf 1 j=2 if cond printf 0
//i=3 j=1 print 1 j=2 printf 0 j=3 printf 1
//.....1...0...1...0
//.....1...0...1...0...1
