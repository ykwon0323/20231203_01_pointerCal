/**
 * 
 * 포인터 연산
 * 
 * 1 포인터끼리의 덧셈, 곱셈, 나눗셈은 의미 없음
 * 2 포인터끼리의 뺄셈은 두 포인터 사이의 상대적 거리를 나타냄
 * 3 포인터에 정수를 더하거나 뺄 수는 있지만, 실수와의 연산은 허용하지 않음 
 * 4 포인터끼리 대입하거나 비교할 수 있음
*/
# include <stdio.h>

int main(void){

    char* ptr_char = 0;
    int* ptr_int = NULL;
    double* ptr_double = 0x00;

    printf("포인터 ptr_char가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_char);
    printf("포인터 ptr_int가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_int);
    printf("포인터 ptr_double이 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_double);  

    printf("포인터 ptr_char가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_char);
    printf("포인터 ptr_int가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_int);
    printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_double);  


    /**
     * - 모든 포인터에 저장된 초기 주소값음 0x00 
     * - 1 증가시키는 포인터 연산 후,
     *   포인터가 가리기고 있는 주소는 각각의 포인터 타입에 따라 달라짐
     *   증가 폭은 포인터가 가리키는 변수의 타입의 크기와 같게됨
     * 
    */

    return 0;
}