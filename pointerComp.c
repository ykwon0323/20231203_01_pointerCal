/**
 * 포인터의 비교 연산과 대입 연산
 * 
*/

# include <stdio.h>

int main(void){
    int num01 = 10;
    int num02 = 20;
    int *ptr_num01 = &num01;
    int *ptr_num02 = &num02;

    if(ptr_num01 != ptr_num02){
        printf("포인터 ptr_num01이 카리키고 있는 주소에 저장된 값은 %d 입니다\n", *ptr_num01);
        printf("포인터 ptr_num02이 카리키고 있는 주소에 저장된 값은 %d 입니다\n", *ptr_num02);


        printf("포인터 ptr_num01 주소값은 %#x 입니다\n", ptr_num01);
        printf("포인터 ptr_num02 주소값은 %#x 입니다\n", ptr_num02);

        printf("포인터 ptr_num01, ptr_02는 현재 다른 주소를 가리키고 있습니다\n\n");
        ptr_num02 = ptr_num01; // 대입연산
    }
    printf("포인터 ptr_num01이 카리키고 있는 주소에 저장된 값은 %d 입니다\n", *ptr_num01);
    printf("포인터 ptr_num02이 카리키고 있는 주소에 저장된 값은 %d 입니다\n", *ptr_num02);
        
    if(ptr_num01 == ptr_num02){

        printf("포인터 ptr_num01 주소값은 %#x 입니다\n", ptr_num01);
        printf("포인터 ptr_num02 주소값은 %#x 입니다\n", ptr_num02);
        printf("포인터 ptr_num01, ptr_02는 현재 같은 주소를 가리키고 있습니다\n\n");
    }

}