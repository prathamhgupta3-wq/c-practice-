

#include<stdio.h>
#include<string.h>

struct donor{
	char name[64];
	char bloodg[8];
	int age;
	float weight;
	int quantity;


};

struct patient{

	char name[64];
	char bloodg[8];
	int age;
	float weight;
	int quantity;
	char hospital[64];



};

	int bg[8];

	struct donor d[1024];
	struct patient p[1024];
	
	
	int count = 0;
	int pcount = 0;

	
void main(){

	int l;
       	


	do{

		puts("Welcome to blood donation center \n______________________________________________ \n");
		puts("select any of option");

		puts("1.Donor \n2.Patient \n3.Blood Reserve \n4.Exit");

		scanf("%d",&l);

		switch(l){
		
			case 1 :{
				
					puts("\nSelect either of two \n1.Add donor \n2.view");

					int y;
					scanf("%d",&y);


					if(y == 2 ){

						for(int z = 0;z < count;z++){		

							printf("%d. Donor name : %s\n",z + 1,d[z].name);  
							printf("  . Blood Grp  : %s\n",d[z].bloodg);
							printf("  . Age        : %d\n",d[z].age);
							printf("  . Weight     : %f\n",d[z].weight);
							printf("  . Quantity     : %d\n",d[z].quantity);
							
					

						}
					}else{
						printf("\n%d.Enter Donor name\n",count);
						scanf("%s",d[count].name);

						printf("Enter blood group \n");
						scanf("%s",d[count].bloodg);

						printf("Enter age  \n");
						scanf("%d",&d[count].age);
		
						printf("Enter weight    \n");
						scanf("%f",&d[count].weight);
						
						printf("Enter quantity    \n");
						scanf("%d",&d[count].quantity);

						count += 1;

					}

					if(strcmp(d[count-1].bloodg,"A+") == 0 ){
						bg[0] += d[count-1].quantity;
					}else if(strcmp(d[count-1].bloodg,"A-") == 0){
						bg[1] += d[count-1].quantity;
					}else if(strcmp(d[count-1].bloodg,"B+") == 0){
						bg[2] += d[count-1].quantity;
					}else if(strcmp(d[count-1].bloodg,"B-") == 0){
						bg[3] += d[count-1].quantity;
					}else if(strcmp(d[count-1].bloodg,"AB+") == 0){
						bg[4] += d[count-1].quantity;
					}else if(strcmp(d[count-1].bloodg,"AB-") == 0){
						bg[5] += d[count-1].quantity;
					}else if(strcmp(d[count-1].bloodg,"O+") == 0){
						bg[6] += d[count-1].quantity;
					}else if(strcmp(d[count-1].bloodg,"O-") == 0){
						bg[7] += d[count-1].quantity;
					}
							puts("");	
				
				}
				break;

			case 2 :{
				
						
					puts("\nSelect either of two \n1.Add patient \n2.view");

					int y;
					scanf("%d",&y);


					if(y == 2 ){

						for(int z = 0;z < pcount;z++){		

							printf("%d. Patient name : %s\n",z + 1,p[z].name);  
							printf("  . Blood Grp  : %s\n",p[z].bloodg);
							printf("  . Age        : %d\n",p[z].age);
							printf("  . Weight     : %f\n",p[z].weight);
							printf("  . Quantity   : %d\n",p[z].quantity);
							printf("  . Hospital   : %s\n",p[z].hospital);
					
					

						}
					}else{
						printf("\n%d.Enter patient name\n",count);
						scanf("%s",p[pcount].name);

						printf("Enter blood group \n");
						scanf("%s",p[pcount].bloodg);

						printf("Enter age  \n");
						scanf("%d",&p[pcount].age);

						printf("Enter weight    \n");
						scanf("%f",&p[pcount].weight);
						
						printf("Enter Quantity in    \n");
						scanf("%d",&p[pcount].quantity);

						printf("Enter Hospital    \n");
						scanf("%s",p[pcount].hospital);

						pcount += 1;

					}

							
					if(strcmp(p[pcount-1].bloodg,"A+") == 0 ){
						bg[0] -= p[pcount-1].quantity;
					}else if(strcmp(p[pcount-1].bloodg,"A-") == 0){
						bg[1] -= p[pcount-1].quantity;
					}else if(strcmp(p[pcount-1].bloodg,"B+") == 0){
						bg[2]  = bg[2] -  p[pcount-1].quantity;
					}else if(strcmp(p[pcount-1].bloodg,"B-") == 0){
						bg[3] -= p[pcount-1].quantity;
					}else if(strcmp(p[pcount-1].bloodg,"AB+") == 0){
						bg[4] -= p[pcount-1].quantity;
					}else if(strcmp(p[pcount-1].bloodg,"AB-") == 0){
						bg[5] -= p[pcount-1].quantity;
					}else if(strcmp(p[pcount-1].bloodg,"O+") == 0){
						bg[6] -= p[pcount-1].quantity;
					}else if(strcmp(p[pcount-1].bloodg,"O+") == 0){
						bg[7] -= p[pcount-1].quantity;
					}

					puts("");
				
				}

				break;

			case 3 :{
				
					printf("A+  -->    %d     \n",bg[0]);
					printf("A-  -->    %d     \n",bg[1]);
					printf("B+  -->    %d     \n",bg[2]);
					printf("B-  -->    %d     \n",bg[3]);
					printf("AB+ -->    %d     \n",bg[4]);
					printf("AB- -->    %d     \n",bg[5]);
					printf("O+  -->    %d     \n",bg[6]);
					printf("O-  -->    %d     \n",bg[7]);
								
				
				
				}

				break;

		}		
	
	}while(l != 4);


}
