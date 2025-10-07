#include<stdio.h>



int ordem(int a, int b, int c){


for(int i=0; i<3; i++)
{
    if(a>b)
    {
    int temp=b;
    b=a;
    a=temp;    
    }
    if(a>c)
    {
        int temp=c;
        c=a;
        a=temp;
    }
    if(b>c)
    {
        int temp=b;
        b=c;
        c=temp;

   
    }

 

}
 printf("Seus numeros em ordem eh %d %d %d ",a,b,c);
}

int main()
{
    int a1,b1,c1;

    scanf("%d %d %d",&a1,&b1,&c1);

    ordem(a1,b1,c1);


 


}