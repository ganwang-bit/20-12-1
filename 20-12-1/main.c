//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<errno.h>
//int main()
//{
//    FILE*pf=fopen("test.txt","r");
//    if(pf==NULL)
//        printf("%s\n",strerror(errno));
//    else
//        printf("success");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    //char arr[10]="";
//   // memset(arr,'#',10);
//   int arr[10]={0};
//   memset(arr,1,40);
//    return 0;
//}
//struct Stu
//{
//    char name[20];
//    char tele[12];
//    char sex[10];
//    int age;
//}s1,s2,s3;
//#include<stdio.h>
//int main()
//{
//    struct Stu s4,s5,s6;
//    return 0;
//}
//char
//short
//int
//long
//float
//double内置类型-C语言自己的数据类型
//复杂类型-
//自定义类型：结构体、枚举、
//struct
//{
//    int a;
//    char b[20];
//}x;
//#include<stdio.h>
//int main()
//{
//    return 0;
//}
//#inlcude<stdio.h>
//struct Node
//{
//    int data;
//    struct Node*next;
//};
//int main()
//{
//    return 0;
//}
//#include<stdio.h>
//typedef struct Node
//{
//    int data;
//    struct Node* next;
//}Node;
//int main()
//{
//
//    return 0;
//}
//#include<stdio.h>
//struct T
//{
//    double weight;
//    short age;
//};
//struct S
//{
//  char C;
//  int a;
//  double d ;
//  char arr[20];
//  struct T t;
//};
//int main()
//{
//    struct S s={'c',10,1.0,"hello world",{55.6,30}};
//
//    return 0;
//}
#inlcude<stdio.h>
struct S
{
    int a;
    char c;
    char c2;
};
struct S2
{
    char c2;
    int a;
    char c;

};
int main()
{
    struct S s1={0};
    printf("%d\n",sizeof(s1));
    struct S2 s2={0};
    printf("%d\n",sizeof(s2));
    return 0;
}
