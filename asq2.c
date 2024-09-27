#include<stdio.h>

int main(){
    int a,b,c,d,account1=0,account2=0,account3=0,z,y;
    printf("Good morning sir/maam \n");
    printf("You have three accounts which account you want to choose ,Press- \n");
    printf("1 - for Account_1 \n2 -for Account_2 \n3 -for Account_3 \n4- for Exiting\n" );
    scanf("%d",&a);
    
    int i;
    for(i=1;a<=3;i++){
    
    if(a==1){
        printf("You can deposit , withdraw and check your bank balance\n");
        printf("1 - for Deposit \n2 -for Withdraw \n3 -for Check bank balance \n4-for exiting\n ");
        scanf("%d",&b);
        if(b==1){
            printf("How much you want to deposit -");
            scanf("%d",&z);
            account1+=z;
            printf("Amount credited");
        }
        if(b==2){
            printf("How much you want to withdraw - ");
            scanf("%d",&y);   
            account1-=y;
              }
        if(b==3){
            printf("Your bank balance is - %d",account1);

        }
        if(b==4){
            break;
        }
    }

         if(a==2){
        printf("You can deposit , withdraw and check your bank balance\n");
        printf("1 - for Deposit \n2 -for Withdraw \n3 -for Check bank balance \n4-for exiting\n ");
        scanf("%d",&c);
        if(c==1){
            printf("How much you want to deposit -");
            scanf("%d",&z);
            account2+=z;
            printf("Amount credited");
        }
        if(c==2){
            printf("How much you want to withdraw - ");
            scanf("%d",&y);   
            account2-=y;
            
        }
        if(c==3){
            printf("Your bank balance is - %d",account2);

        }
        if(c==4){
            break;
        }
     }
         if(a==3){
        printf("You can deposit , withdraw and check your bank balance\n");
        printf("1 - for Deposit \n2 -for Withdraw \n3 -for Check bank balance \n4-for exiting\n ");
        scanf("%d",&d);
        if(d==1){
            printf("How much you want to deposit -");
            scanf("%d",&z);
            account3+=z;
            printf("Amount credited");
        }
        if(d==2){
            printf("How much you want to withdraw - ");
            scanf("%d",&y);   
            account3-=y;
           
        }
        if(d==3){
            printf("Your bank balance is - %d",account3);

        }
        if(d==4){
            break;
        }

        
    }
    a=0;
    printf("\n");
    printf("You have three accounts which account you want to choose ,Press- \n");
    printf("1 - for Account_1 \n2 -for Account_2 \n3 -for Account_3 \n4-for Exiting\n" );
    scanf("%d",&a);
    }

    printf("Thanks for visiting");





    return 0;
}

