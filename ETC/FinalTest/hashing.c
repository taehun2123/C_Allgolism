#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CODE_LENGTH 5
#define MAX_ADVANCED_CODE 5
#define MAX_TABLE_LENGTH 50

int showMenu();
void enterAdvancedCodes(char advancedCode[][MAX_CODE_LENGTH]);
void printAdvancedCodes(char advancedCode[][MAX_CODE_LENGTH]);
int additiveHash(char key[]);
int foldingHash(char *code);
int squareHash(int number);

// 메뉴 함수 정의
int showMenu() {
    int choice;
    printf("\n------ 메뉴 ------\n");
    printf("0. 사전코드 목록 출력\n");
    printf("1. 암호화\n");
    printf("2. 해시 테이블 목록 출력\n");
    printf("3. 해시 테이블 복호화 목록\n");
    printf("4. 종료\n");
    printf("메뉴를 선택하세요: ");
    scanf("%d", &choice);
    return choice;
}

// 사전 코드 입력 함수
// advancedCode는 4자리 까지만 지정하기 위한 배열 5 선언
void enterAdvancedCodes(char advancedCode[][MAX_CODE_LENGTH]) { //numCodes는 메인에 5로 지정되어있음.
    printf("사전 코드를 입력하세요:\n");
    for (int i = 0; i < MAX_ADVANCED_CODE; i++) { // 최대 5개의 사전코드 지정
        printf("%d번째 사전코드: ", i + 1);
        scanf("%s", advancedCode[i]); // advancedCode[i] 배열에 저장
        if(strlen(advancedCode[i]) > 4 || strlen(advancedCode[i]) < 4){
            printf("사전코드는 4글자만 가능합니다.\n");
            i--;
        }   
    }
}

// 사전 코드 출력 함수
void printAdvancedCodes(char advancedCode[][MAX_CODE_LENGTH]) {
    printf("\n--- 사전 코드 목록 ---\n");
    for (int i = 0; i < MAX_ADVANCED_CODE; i++) {
        if (advancedCode[i] != 0) {
            printf("%d번 사전코드: %s\n", i + 1, advancedCode[i]);
        }
    }
    printf("------------------------\n");
}

//제산 해시함수 
/* %(mod 방법으로 변경합시다.) */
int additiveHash(char key[]) {
    int hash = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        hash = (hash + (int)key[i]) % MAX_TABLE_LENGTH;
    }
    return hash;
}
//폴딩 해시함수
/* 코드의 길이를 자릿수만큼 나누어,
     다시 합산한 후 반환하는 함수*/
int foldingHash(char *code) { 
  int hash = 0;
  int len = strlen(code);
  int step = len / 4; // 나눠서 합치는 간격

  for (int i = 0; i < len; i += step) {
      int segment = 0;
      for (int j = 0; j < step && (i + j) < len; j++) {
          segment = segment * 10 + code[i + j] - '0';
      }
      hash += segment;
  }

  return hash;
}

//중간제곱 함수
//제곱한 값에 %100한 값을 해쉬값으로 반환
int squareHash(int number) {
    return (number * number)%100;
}

// 구조체 정의
typedef struct {
    char codes[MAX_TABLE_LENGTH][MAX_CODE_LENGTH]; // 암호화 이전 코드 저장
    char hashTable[MAX_TABLE_LENGTH][MAX_CODE_LENGTH]; // 최대 5개의 암호화된 코드 저장
    int count;        // 현재 저장된 코드의 개수
} EncryptedCodes;     // EncryptedCodes라는 구조체로 정의

// 암호화 함수 정의
void encrypt(EncryptedCodes* encryptedCodes, char advancedCode[][MAX_ADVANCED_CODE]) {
    char inputCode[MAX_CODE_LENGTH]; // 최대 4글자까지만 수용, 넘은경우 4글자까지만 잘라서 수용함
    int hashChoice;
    int hashValue;

    printf("암호화할 코드를 입력하세요 (4글자): ");
    scanf("%s", inputCode);

    // 코드 일치 여부 확인
    int match = 0;
    for (int i = 0; i < MAX_ADVANCED_CODE; i++) { // numCodes는 메인에서 5로 초기화 되어있음
        if (strcmp(inputCode, advancedCode[i]) == 0) { //strcmp : 문자열이 완전히 같다면 0 반환
            match = 1;
            break;
        }
    }

    if (!match) {
        printf("코드가 일치하지 않습니다.\n");
        return;
    }

    printf("해싱 처리할 함수를 선택하세요 (1. 제산함수, 2. 폴딩함수, 3. 중간제곱 함수): ");
    scanf("%d", &hashChoice);
    // 해싱 처리
		switch(hashChoice){
			case 1:
				hashValue = additiveHash(inputCode);
				break;
			case 2:
				hashValue = foldingHash(inputCode);
				break;
			case 3:
				if (inputCode[0] >= '0' && inputCode[0] <= '9') {
                int number = atoi(inputCode); //코드를 정수로 변환
                hashValue = squareHash(number); //수를 제곱하여 해쉬 값으로 지정
                } else {
                printf("타입이 문자인 경우, 중간제곱 함수를 사용할 수 없습니다.\n");
                return;
                } break;
            default:
                printf("올바른 번호를 선택하세요.\n");
                break;
            }

    // 충돌 처리
    int prevHashValue;
    if (encryptedCodes->hashTable[hashValue % MAX_TABLE_LENGTH][0] != '\0') {
        if (hashValue % 2 == 0) {
            // 암호화 할 코드가 짝수인 경우 선형 조사법 - 충돌 발생 시 배열에서 다음 빈 슬롯을 찾아 해시 값을 조정함
            int temp = hashValue;
            int i = 1; // 선형 조사법에 사용될 간격을 나타내는 변수
            int index = hashValue % MAX_TABLE_LENGTH; // hashValue를 테이블의 크기로 나눈 나머지를 취해 배열 내 위치 저장 결정
            while (encryptedCodes->hashTable[index][0] != '\0') { // i%5의 위치가 비어 있는지 확인
                index = (hashValue + i) % MAX_TABLE_LENGTH; // 비어있지 않다면? -> 충돌 발생, hashvalue에 i를 더하여 다음 위치 계산, 새로운 해시 값 얻을 수 있음
                i++;
            }
            hashValue = index;
            prevHashValue = temp;
        } else {
            // 홀수인 경우 체이닝
            int temp = hashValue;
            int index = hashValue % MAX_TABLE_LENGTH; // hashValue를 테이블의 크기로 나눈 나머지를 취해 배열 내 위치 저장 결정
            while (encryptedCodes->hashTable[index][0] != '\0') { // 선택한 인덱스에 다른 코드가 존재하는지 확인
                index += 1; // 충돌이 발생하면 다음 슬롯으로 이동하여 빈 슬롯을 찾기위해 인덱스를 증가시킴
            }
            hashValue = index;
            prevHashValue = temp;
        }
    } else {
        prevHashValue = hashValue;
        hashValue = hashValue % MAX_TABLE_LENGTH;
    }

    sprintf(encryptedCodes->hashTable[hashValue], "%d", prevHashValue); // 해싱된 값을 암호화 한 배열에 저장
    strcpy(encryptedCodes->codes[hashValue], inputCode); // 암호화 이전 코드를 복호화 목록에 저장
    printf("암호화 완료! 해싱된 코드: %d, 저장된 공간 %d번", prevHashValue, hashValue);
    encryptedCodes->count++;
}


// 암호화된 배열 출력 함수
void printEncryptedArray(EncryptedCodes* encryptedCodes) {
    printf("\n--- 암호화된 코드 목록 ---\n");
    for (int i = 0; i < MAX_TABLE_LENGTH; i++) {
        if (encryptedCodes->codes[i][0] != '\0') {
            printf("해시테이블 %d번에 저장된 암호화 코드: %s\n",i, encryptedCodes->hashTable[i]);
        }
    }
    printf("------------------------\n");
}

// 복호화 함수 출력
void decrypt(EncryptedCodes* encryptedCodes) {
    printf("\n--- 복호화된 코드 목록 ---\n");
    for (int i = 0; i < MAX_TABLE_LENGTH; i++) {
        if (encryptedCodes->codes[i][0] != '\0') { //저장된 공간 중 빈 배열이 아닌 것을 복호화함.
            printf("해시테이블 %d번에 저장된 복호화 코드: %s\n", i, encryptedCodes->codes[i]); //원래의 사전 코드 번호와, 사전 코드가 나옴
        }
    }
    printf("------------------------\n");
}

int main() {
    char advancedCode[MAX_ADVANCED_CODE][MAX_CODE_LENGTH]; // 최대 5개의 코드를 저장할 배열
    enterAdvancedCodes(advancedCode);
    EncryptedCodes encryptedCodes;
    encryptedCodes.count = 0;

    while (1) {
        int choice = showMenu();

        switch (choice) {
            case 0: //사전코드 출력
                printAdvancedCodes(advancedCode);
                break;
            case 1: // 암호화 하기
                encrypt(&encryptedCodes, advancedCode);
                break;
            case 2: // 암호화 된거 출력
                printEncryptedArray(&encryptedCodes);
                break;
            case 3: // 복호화 된거 출력
                decrypt(&encryptedCodes);
                break;
            case 4: // 종료
                printf("프로그램을 종료합니다.\n");
                return 0;
            default:
                printf("올바른 메뉴 번호를 선택하세요.\n");
        }
    }

    return 0;
}