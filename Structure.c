#include<stdio.h>
struct st
 {
    int a;
    float c;
};

struct st add( struct st *p , struct st *q )
 {
    struct st r;
    r.a= (*p).a + (*q).a;
    r.c = p->c + q->c;
    return r;
 }

int main()
 {
    struct st s1,s2;
    printf("Enter the value of a for s1: ");
    scanf("%d" , &s1.a);
    printf("Enter the value of c for s1: ");
    scanf("%f" , &s1.c);
    printf("Enter the value of a for s2: ");
    scanf("%d" , &s2.a);
    printf("Enter the value of c for s2: ");
    scanf("%f" , &s2.c);

    struct st s3= add(&s1 , &s2);
    printf("The value of a for s3 is: %d\n" , s3.a);
    printf("The value of c for s3 is: %f\n" , s3.c);

    return 0;

 }