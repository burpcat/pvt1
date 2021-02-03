// This program pulls the second largest number of the given 4 numbers
//It uses the if else ladder for program operation

#include<stdio.h>

int main(){
    int max1=0, max2=0;
    int i,number,ct=1;
    
    for(i=4;i>0;i--){                             // 4 numbers are considered here
        printf("Enter the %d number",ct);
        scanf("%d",&number);
        
        if(number>max1){
            max2=max1;                            //If a larger number is later inputted, the number will be prevented from deletion
            max1=number;
            printf("current max1 %d \n",max1);
            printf("current max2 %d \n",max2);
        }
        
        else if(number==max1){
            break;
        }
            else if(number>max2 && number<max1){
                max2=number;
                printf("current max1 %d \n",max1);
                printf("current max2 %d \n",max2);
            }
            
            else if(number>max2 && number >>max1){          // Optional if else ladder of the above statement
                max1=number;
                printf("current max1 %d\n ",max1);
                printf("current max2 %d \n",max2);
            }
        
            else if(number==max2){
                 break;
            }
        ct=ct+1;                                           // Here 'ct' is the variable which shows which number is taken as input for UX reasons.
        
    }
    printf("The first largest number is %d \n",max1);
    printf("The second largest number is %d",max2);
    
return 0;
}
