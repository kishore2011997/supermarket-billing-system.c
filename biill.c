#include<stdio.h>
int main()
{
    char name[50];
    int customerphonenumber;
    int customerid;
    int customername;
    int bodysoap;
    int haircream;
    int bodyspary;
    int sugar;
    int tea;
    int coffee;
    int total;
    int cosmetics;
    int grocery;
    int cosmeticstotal;
    int grocerytotal;
    printf("  Baky super market\n");
    printf("88/3,crosscut road");
    printf("  coimbatore ");
    printf("Tamilnadu-641208.");
    printf("----------------------\n");
    printf("Billing system\n");
    printf("customerid\n");
    printf("customername\n");
    scanf("%c",&customername);
    printf("customer phone number\n");
    scanf("%d",&customerphonenumber);
    printf("customerid\n");
    scanf("%d",&customerid);
    printf("----------------------\n");
    printf("cosmetics\n\n");
    printf("bodysoap(Rs 10)\n");
    scanf("%d",&bodysoap);
    printf("haircream(Rs 110)\n");
    scanf("%d",&haircream);
    printf("bodyspary(Rs 80)\n");
    scanf("%d",&bodyspary);
    printf("-----------------------\n");
    printf("grocery\n\n");
    printf("sugar(Rs 100)\n");
    scanf("%d",&sugar);
    printf("tea(Rs 20)\n");
    scanf("%d",&tea);
    printf("coffee(Rs 20)\n");
    scanf("%d",&coffee);
    int boso;
    int hc;
    int bs;
    boso=10*bodysoap;
    hc=110*haircream;
    bs=80*bodyspary;
    cosmetics=boso+hc+bs;
    printf("bodysoap:");
    printf("%d Rs\n",boso);
    printf("haircream:");
    printf("%d Rs\n",hc);
    printf("total cosmetics price:");
    printf("%d Rs\n",cosmeticstotal);
    int s;
    int t;
    int c;
    s=100*sugar;
    t=20*tea;
    c=20*coffee;
    grocery=s+t+c;
    printf("sugar:");
    printf("%d Rs\n",s);
    printf("tea:");
    printf("%d Rs\n",t);
    printf("coffee:");
    printf("%d Rs\n",c);
    printf("total grocery price:");
    printf("%d Rs\n",grocerytotal);
    total=cosmeticstotal+grocerytotal;
    printf("--------------------\n");
    printf("total amount=%d\n",total);
    printf("baky super market\n");

    printf("      Thank you     \n");


}


