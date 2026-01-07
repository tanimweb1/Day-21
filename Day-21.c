#include<stdio.h>
 int main(){


    // max & min in array

    int numbers[] = {23, 45, 65, 75, 43, 56, 354, 645, 56, 43};

    int max = numbers[0];
    int min = numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
        if (min > numbers)
        {
            min = numbers[i];
        }
    }

    printf("Max is %d\n", max);
    printf("Min is %d\n", min);


//     //linear search in array 

int numbers[]= {13,34,23,45,67,54,};
int searchNumber = 21;
int found = -1;

for(int i=0;i<6;i++){
if(numbers[i]==searchNumber){
    found = i;
    break;
}
}

if(found==-1){
    printf("%d is not found ", searchNumber);
}
else{
    printf("%d is found", searchNumber);
}


  //calculate the sum & avarage  of 10 students math result using array

int math[10], sum=0; 
float avarage;

for(int i = 0;i<10;i++){

printf("Student [%d] = ", i+1);
scanf("%d", &math[i]);

}

for(int i = 0; i<10 ;i++){
    sum = sum + math[i];
}
printf("Sum is %d\n", sum);
avarage = (float)sum/5;
printf("Avarage is %0.2f\n", avarage);


  

    return 0;

 }






