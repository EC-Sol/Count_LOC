#include <stdio.h>

int main(int argc, char** argv) {
  FILE* file_name = fopen(argv[1], "r");

  char c;
  int loc;

  loc = 0;

  if (file_name == NULL) {
    printf("스트림 생성시 오류 발생, 파일 이름 확인필요\n");
    return 0;
  }

  while (feof(file_name) == 0) {
    c = fgetc(file_name);

    if (c == '}') {
      loc++;
    }
    if (c == ';') {
      loc++;
    }
  }

  fclose(file_name);
  return printf("이 파일의 Line of Code는 %d 줄 입니다.\n", loc);
}
