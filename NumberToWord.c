/*15. Write a program to convert the digits of a 3-digit number into words.
for example, if input: 123 Output: One Two Three*/
#include<Stdio.h>
int main(){
    int num;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    int num1=num;
    int rev_num=0;
    while(num1>0){
        rev_num=rev_num*10+num1%10;
        num1/=10;
    }
    void numberConverter(int n){
        switch (n)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        default:
        printf("Invalid");
            break;
        }
    }
    return 0;
}