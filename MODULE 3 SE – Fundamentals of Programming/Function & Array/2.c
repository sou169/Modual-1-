 #include<stdio.h>
 void add();
 void sub(int a,int b);
 int mul();
 int div(int a,int b);
 int mod();
 int main()
 {
 	int choice,a,b,c,d,ch;
do{
 	printf("Enter your choice :\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n5.MOD\n");
 	scanf("%d",&choice);
 	switch(choice)
 	{
 		case 1:
 		{
			add();		
 			break;
		}
		case 2:
 		{
 			printf("Enter 2 value:");
 			scanf("%d %d",&a,&b);
 			sub(a,b);
 			break;
		}
		case 3:
 		{
 			printf("Multiplication : %d",mul());
			break;	
		}
		case 4:
 		{
 			printf("Enter 2 value:");
 			scanf("%d %d",&a,&b);
 			printf("Division : %d",div(a,b));
			break;	
		}
		case 5:
 		{
 			printf("Modulo : %d",mod());
 			break;
		}
		default:
 		{
 			printf("Enter valid choice!!!!!");
 			break;
		}
 	}
 	printf("\nDo u want to continue (y or n): ");
	scanf(" %c",&ch);
}
while(ch=='y' || ch=='Y');
 	return 0;
 }
 
 void add()
 {
 	int a,b;
 	printf("Enter 2 value:");
 	scanf("%d %d",&a,&b);
 	printf("Addition : %d",a+b);
 }
 
 void sub(int a,int b)
 {
 	printf("Subtraction : %d",a-b);
 }
 
 int mul()
 {
	int a,b;
 	printf("Enter 2 value:");
 	scanf("%d %d",&a,&b); 
 	return a*b;
 }
 
 int div(int a,int b)
 {
 	return a/b;
 }
 
 int mod()
 {
 	int a,b;
 	printf("Enter 2 value:");
 	scanf("%d %d",&a,&b); 
 	return a%b;
 }
