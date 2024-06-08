 #include<stdio.h>
 void rec();
 void squ(int a);
 int cir();
 int tri(float a,float b);
 int main()
 {
 	int choice;
	float a,b,c,d;
 	printf("Enter your choice :\n1.AREA OF RECTANGLE\n2.AREA OF SQUARE\n3.AREA OF CIRCLE\n4.AREA OF TRINGLE\n");
 	scanf("%d",&choice);
 	switch(choice)
 	{
 		case 1:
 		{
			rec();		
 			break;
		}
		case 2:
 		{
 			printf("Enter side length of square:");
 			scanf("%d",&a);
 			squ(a);
 			break;
		}
		case 3:
 		{
 			printf("AREA OF CIRCLE : %f",cir());
			break;	
		}
		case 4:
 		{
 			printf("Enter Base and height of tringle:");
 			scanf("%f %f",&a,&b);
 			printf("AREA OF TRINGLE : %f",tri(a,b));
			break;	
		}
		default:
 		{
 			printf("Enter valid choice!!!!!");
 			break;
		}
 		
	}
 	return 0;
 }
 
 void rec()
 {
 	int a,b;
 	printf("Enter length & width:");
 	scanf("%d %d",&a,&b);
 	printf("AREA OF RECTANGLE : %d",a*b);
 }
 
 void squ(int a)
 {
 	printf("AREA OF SQUARE : %d",a*a);
 }
 
 int cir()
 {
	int a;
	float area;
 	printf("Enter radius of circle:");
 	scanf("%d",&a);
	area=3.14*a*a;  
 	return area;
 }
 
 int tri(float a,float b)
 {
 	float area=0.5*a*b;
 	return area;
 }
