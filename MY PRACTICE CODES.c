//1
//deciding PASS/FAIL status of student
#include <stdio.h>

int main()
{int marks;
    printf("enter marks:");
    scanf("%d", &marks);
    if(marks>30 && marks<=100){
        printf("PASS \n");  }
        else if(marks<=30 && marks>=0){
            printf("FAIL \n");     }
else{ printf("invalid marks");}
    return 0;}

//2
//deciding PASS/FAIL status of student using ternary condition
#include <stdio.h>

int main()
{int marks;
    printf("enter marks:");
    scanf("%d", &marks);
marks<=30 ? printf("FAIL\n"):printf("PASS\n");
    return 0;}

//3
//deciding grades of students
#include <stdio.h>

int main()
{int marks;
    printf("enter marks:");
    scanf("%d", &marks);
if (marks<30){
    printf("grade C");
}
else if (marks>=30 && marks<=70){
    printf("grade B");
}
else if (marks>=70 && marks<=90){
    printf("grade A");
}
else if (marks>=90 && marks<=100){
    printf("grade A+");
}
else {printf("invalid marks");}
    return 0;}

//4
//deciding if english character is upper case or lower case

#include <stdio.h>

int main()
{char ch;
printf("enter character:");
scanf("%c", &ch);
if (ch>='a' && ch<='z'){
    printf("lower case");
}
else if (ch>='A' && ch<='Z'){
printf("upper case");}
else {printf("invalid english character");}
    return 0;}

//4
//deciding if number is natural number or not

#include <stdio.h>

int main()
{int n;
    printf("enter a number:");
    scanf("%d", &n);
    
    if(n>=1){
        printf("natural number");
    }
    else{printf("not natural number");
    }
    return 0;}

    //5
    //deciding whether number is prime or not
    #include <stdio.h>

int main()
{int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=(n-1);i++){
        if(n%i==0){
            printf("not prime");
            return 0;
        }
    }
    printf("prime");
    return 0;}

    
