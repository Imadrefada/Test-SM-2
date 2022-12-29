
//test 2 sm : convert base 10 to any base inf a base 10
// refada Imad eddine : 22231564905
//الله غالب معرفتش ندير كود يحول للباز 16 المهم حاولت شيخ


#include<stdio.h>
int main()
{
    int nombre,base,r1,i=0;//nombre : le nombre dans la base 10
    float r2,r3,r4;
    // r1.r2.r3.r4: result de la division pour convert la base
    //base : la base de conversation
    //i: variable pour lancer la boucle
    int a[10];
    printf("entre un nombre: \n""");
    scanf("%d",&nombre);
    printf("entre la base de conversation ");
    scanf("%d",&base);
    for( i=0; nombre!=0; i++)
    {
        r1=nombre/base;
        r2=(float)nombre/base;
        r3=(float)r2-r1;
        r1=r3*base;
        r2=(float)r3*base;
        r4=(float)r2-r1;
        if(r4>=0.5)
        {
            a[i]=r3*base+1;

        }
        else
        {
            a[i]=r3*base;
        }
        nombre=nombre/base;
    }
    for(int j=i; j>0; j--)
    {
        printf("%d",a[j-1]);
    }

    return 0;
}
    
