#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<ctype.h>

/* struct Student 
{
 char name[20];
 int age;
};
void initializeStudent(struct Student *student, const char *name,int age)
 {
 //student->name = (char *)malloc(strlen(name) + 1);
 strcpy(student->name, name);
 student->age = age;
}
int main(void)
{
    
 struct Student s1, s2;
 initializeStudent(&s1, "Tom", 18);
 initializeStudent(&s2, "Jerry", 28);
 s1 = s2;
 printf("s1 的姓名: %s 年龄: %d\n", s1.name, s1.age);
 printf("s2 的姓名: %s 年龄: %d\n", s2.name, s2.age);
 free(s1.name);
 free(s2.name);
 return 0;
}
 */

/* int main()
{
    char s[]="xiyoulinuxgroup";
    int len=(int)strlen(s);
    char s1[len+1];
    s1=s;
    printf("%s\n",s1);
    return 0;
} */

/* int main()
{
    int a=0;
    int b=0;

    return 0;
}
 */
/* struct structure {
 int foo;
 union {
 int integer;
 char string[11];
 void *pointer;
 } node;
 short bar;
 long long baz;
 int array[7];
};
int main(void) {
 int arr[] = {0x590ff23c, 0x2fbc5a4d, 0x636c6557, 0x20656d6f,
 0x58206f74, 0x20545055, 0x6577202c, 0x6d6f636c,
 0x6f742065, 0x79695820, 0x4c20756f, 0x78756e69,
 0x6f724720, 0x5b207075, 0x33323032, 0x7825005d,
 0x636c6557, 0x64fd6d1d};
 printf("%s\n", ((struct structure *)arr)->node.string);
} */


/* struct Student
 {
 char *name;
 int age;
};
void initializeStudent(struct Student *student, const char *name,int age)
 {
 student->name = (char *)malloc(strlen(name) + 1);
 strcpy(student->name, name);
 student->age = age;
}
int main(void)
 {
 struct Student s1, s2;
 initializeStudent(&s1, "Tom", 18);
 initializeStudent(&s2, "Jerry", 28);
 s1 = s2;
 printf("s1 的姓名: %s 年龄: %d\n", s1.name, s1.age);
 printf("s2 的姓名: %s 年龄: %d\n", s2.name, s2.age);
 free(s1.name);
 free(s2.name);
 return 0;
} */

/* #define CAL(a) a * a * a
#define MAGIC_CAL(a, b) CAL(a) + CAL(b)
int main(void) 
{
 int nums = 1;
 //if(16 / CAL(2) == 2) 
 if((16/2*2*2)==2)
 {
 printf("I'm TWO(ﾉ>ω<)ﾉ\n");
 } 
 else
 {
 int nums = ++nums * ++nums * ++nums + 2* 2* 2;//MAGIC_CAL(++nums, 2);
 }
 printf("%d\n", nums);
} */

/* int main(int argc, char* argv[]) 
{
 printf("[%d]\n", argc);
 while (argc) 
 {
 ++argc;
 }
 int i = -1, j = argc, k = 1;
 i++ && j++ || k++;
 printf("i = %d, j = %d, k = %d\n", i, j, k);
 return EXIT_SUCCESS;
} */

/* typedef int (*Predicate)(int);
int *filter(int *array, int length, Predicate predicate,int *resultLength) /*补全函数*/
/* {
    int j=0;
    int *filteredNumbers=(int *)malloc(sizeof(int)*length);
    for(int i=0;i<length;i++)
    {
        if(isPositive(array[i]))
        {
            filteredNumbers[j]=array[i];
            j++;
        }
    }
    *resultLength=j;
    return filteredNumbers;
}
 
int isPositive(int num)
 {
    if(num>0)
    {
        return 1;
    }
    return 0;
 }
int main(void)
 {
 int array[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
 int length = sizeof(array) / sizeof(array[0]);
 int resultLength;
 int *filteredNumbers = filter(array, length, isPositive,&resultLength);
 for (int i = 0; i < resultLength; i++) 
 {
 printf("%d ", filteredNumbers[i]);
 }
 printf("\n");
 free(filteredNumbers);
 return 0; */
//} */

/* int func(int a, int b)
 {
 if (!a) return b;
 return func((a & b) << 1, a ^ b);
}
int main(void) {
 int a = 4, b = 9, c = -7;
 printf("%d\n", func(a, func(b, c)));
} */

/* int main()
{

    char a=128;

    printf("%d",a);
} */

/* int main(void)
 {
 char a = 64 & 127;       //00000000 00000000 00000000 01000000
                          //00000000 00000000 00000000 01111111
                          //00000000 00000000 00000000 01000000
                          //截断之后a为01000000   64 
 char b = 64 ^ 127;       //00000000 00000000 00000000 00111111 
                          //截断之后b为00111111   63
 char c = -64 >> 6;       //-64  10000000 00000000 00000000 01000000
                          //     11111111 11111111 11111111 10111111
                          //     11111111 11111111 11111111 11000000
                          //右移后1111111 11111111 11111111 11111111
                          //截断后c为 11111111 所以c为-1
 char ch = a + b - c;     //运算为补码进行相加减.
                          //00000000 00000000 00000000 01000000
                          //00000000 00000000 00000000 00111111
                          //a+b  00000000 00000000 00000000 01111111
                          //     00000000 00000000 00000000 00000001
                         
 printf("a = %d b = %d c = %d\n", a, b, c);
 printf("ch = %d\n", ch);
 } */

/* int main(void) {
 char arr[] = {'L', 'i', 'n', 'u', 'x', '\0', '!'}, str[20];
 short num = 520;
 int num2 = 1314;
 printf("%zu\t%zu\t%zu\n", sizeof(*&arr), sizeof(arr + 0),
 sizeof(num = num2 + 4));
 printf("%d\n", sprintf(str, "0x%x", num) == num);
 printf("%zu\t%zu\n", strlen(&str[0] + 1), strlen(arr + 0)); 
} */

/* int main(void) {
 char *ptr0 = "Welcome to Xiyou Linux!";
 char ptr1[] = "Welcome to Xiyou Linux!";
 if (*ptr0 == *ptr1) {
 printf("%d\n", printf("Hello, Linux Group - 2%d", printf("")));
 }
 int diff = ptr0 - ptr1;
 printf("Pointer Difference: %d\n", diff);
} */

/* char *welcome() {
 // 请你返回自己的姓名
 char *name="哈差";
 return name;
} */
/* int main(void) {
 char *a = welcome();
 printf("Hi, 我相信 %s 可以面试成功!\n", a);
 return 0;
} */

/* #define SWAP(a, b, t) t = a; a = b; b = t
#define SQUARE(a) a *a
#define SWAPWHEN(a, b, t, cond) if (cond) SWAP(a, b, t)
int main() {
    int tmp;
    int x = 1;
    int y = 2;
    int z = 3;
    int w = 3;
    SWAP(x, y, tmp);
    printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
    if (x >y) SWAP(x, y, tmp);
    printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
    SWAPWHEN(x, y, tmp, SQUARE(1 + 2 + z++ + ++w) == 100);
    printf("x = %d, y = %d\n", x, y, tmp);
    printf("z = %d, w = %d, tmp = %d\n", z, w, tmp);
} */
/* int main(int argc, char **argv) {
    int data1[2][3] = {{0x636c6557, 0x20656d6f, 0x58206f74},
                       {0x756f7969, 0x6e694c20, 0x00000000}};
    int data2[] = {0x47207875, 0x70756f72, 0x32303220, 0x00000a32};
    char *a = (char *)data1;
    char *b = (char *)data2;
    char buf[1024];
    strcpy(buf, a);
    strcat(buf, b);
    printf("%s \n", buf);
} */

/* typedef union 
{
    long l;
    int i[5];
    char c;
} UNION;
typedef struct {
    int like;
    UNION coin;
    double collect;
} STRUCT;
int main(void) {
    printf("sizeof (UNION) = %zu\n", sizeof(UNION)); 
    printf("sizeof (STRUCT) = %zu\n", sizeof(STRUCT));
} */

/* #define SWAP(a, b, t) t = a; a = b; b = t
#define SQUARE(a) a *a
#define SWAPWHEN(a, b, t, cond) if (cond) SWAP(a, b, t)
int main() {
    int tmp;
    int x = 1;
    int y = 2;
    int z = 3;
    int w = 3;
    SWAP(x, y, tmp);
	//tmp=x=1;
	//x=y=2;
	//y=tmp=1;
    printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
    if (x y) SWAP(x, y, tmp);
    printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
    SWAPWHEN(x, y, tmp, SQUARE(1 + 2 + z++ + ++w) == 100);
    printf("x = %d, y = %d\n", x, y, tmp);
    printf("z = %d, w = %d, tmp = %d\n", z, w, tmp);
} */

/* int main(void) {
    unsigned char a = 4 | 7;          //00000000 00000000 00000000 00000100
	                                  //00000000 00000000 00000000 00000111
									  //00000000 00000000 00000000 00000111
    a <<= 3;                          //00000000 00000000 00000000 00111000           56
    unsigned char b = 5 & 7;          //00000000 00000000 00000000 00000101
	                                  //00000000 00000000 00000000 00000111
									  //00000000 00000000 00000000 00000101
    b >>= 3;                          //00000000 00000000 00000000 00000000           0 
    unsigned char c = 6 ^ 7;          //00000000 00000000 00000000 00000110
	                                  //00000000 00000000 00000000 00000111
									  //00000000 00000000 00000000 00000001
    c = ~c;                           //11111111 11111111 11111111 11111110           254
    unsigned short d = (a ^ c) << 3;  //00000000 00000000 00000000 00111000
	                                  //11111111 11111111 11111111 11111110
									  //11111111 11111111 11111111 11000110
									  //11111111 11111111 11111110 00110000
    signed char e = -63;              //11111111 11111111 11111111 10111111
	                                  //11111111 11111111 11111110 11111100
    e <<= 2;
    printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, (char)d);
    printf("e: %#x\n", e);
} */

/* int main(void) 
{
    char p0[] = "Hello,Linux";
    char *p1 = "Hello,Linux";
    char p2[11] = "Hello,Linux";
    printf("p0 == p1: %d, strcmp(p0, p2): %d\n", p0 == p1, strcmp(p0, p2));
    printf("sizeof(p0): %zu, sizeof(p1): %zu, sizeof(*p2): %zu\n",
           sizeof(p0), sizeof(p1), sizeof(*p2));
    printf("strlen(p0): %zu, strlen(p1): %zu\n", strlen(p0), strlen(p1));
} */

/* int main(void) {
    if ((3 + 2 < 2) > (3 + 2 > 2))
        printf("Welcome to Xiyou Linux Group\n");
    else
        printf("%d\n", printf("Xiyou Linux Group - 2%d", printf("")));
} */

/* int main(void) {
    int data[] = {0x636c6557, 0x20656d6f, 0x78206f74,
                  0x756f7969, 0x6e694c20, 0x67207875,
                  0x70756f72, 0x32303220, 0x00000a31};
    puts((const char*)data);
} */


/* int main(void){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int(*b)[3]=a;
	++b;
	b[1][1]=10;
	int *ptr=(int *)(&a+1);
	printf("%d %d %d\n",a[2][1],**(a+1),*(ptr-1));
	} */

/* int main()
{
	int c=-1;
	unsigned short d= c *256;
	printf("0x%hx",d);
	return 0;
} */

/* int main()
{
	int a=-1;
	printf("%x\n",a);
	return 0;
} */

/* int main(void){
	short a=-2;// 1000 0000 0000 0010
	           // 1111 1111 1111 1101
	           // 1111 1111 1111 1110 a的补码
	unsigned int b=-1;//11111111 11111111 11111111 11111111 b的补码
	                  //11111111 11111111 11111111 11111110
					  //11111111 11111111 11111111 11111101
	b+=a;
	int c=-1;
	unsigned short d=c*256;
	c<<=4;
	int e=2;
	e=~e | 6;
	d=(d & 0xff)+0x2022;
	printf("a=0x%hx\tb=0x%x\td=0x%hx\te=0x%x\n",a,b,d,e);
	printf("c=0x%hhx\t\n",(signed char )c);
	}  */
//void func(int arr[10][13])
//{
	//for(int i=0;i<10;i++)
	//{
	//	for(int j=0;j<13;j++)
		//	{
	//			printf("%d ",arr[i][j]);
	//		}
	//		printf("\n");
//	}
//}

//int main(void){
	//int arr[10][13];
	//for(int i=0;i<10;i++){
	///	for(int j=0;j<13;j++)
	//	{
		//	arr[i][j]=rand();
		//}
	//}
	//func(arr);
//}