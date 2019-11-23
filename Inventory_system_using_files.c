#include<stdio.h>
int main()
{
    FILE *fp;//File pointer
    typedef struct//declaration of structure
    {
        int no;
        char name[20];
        float price;
    }Asset;

    Asset a;
    int choice;
     fp=fopen("D://inv.txt","a");//opens inv file for appending values
     if(fp==NULL)
     {
         printf("file dose not exist\n");//Display error if file not found
         return 0;
     }
     do
     {
         printf("\n enter the Asset no:");
         scanf("%d",&a.no);//scan Asset number
         fprintf(fp,"Asset no=%d\n",a.no);//prints value to file

         printf("\n enter the Asset name:");
         scanf("%s",&a.name);//scan Asset name
         fprintf(fp,"Asset name=%s\n",a.name);

        printf("\n enter the Asset price:");
         scanf("%f",&a.price);//scan Asset price
         fprintf(fp,"Asset price=%0.2f\n",a.price);

         printf("\ndo you want to add another record yes=1 no=0:");
         scanf("%d",&choice);
    }while(choice);//continues till yes if chosen

    printf("\nTHANK YOU!!");
    fclose(fp);
    return 0;

}
