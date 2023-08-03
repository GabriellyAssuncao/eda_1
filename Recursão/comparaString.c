#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int camparastr(char* str1, char* str2){
  if(*str1 == '\0' && *str2 == '\0'){
    return 1;
  }
  if(*str1 == '\0' || *str2 == '\0'){
    return 0;
  }
  if(*str1 != *str2){ // se o primeiro caractere de ambas as string forem diferentes elas não são  iguais
    return 0;
  }
  return camparastr(str1 + 1, str2 + 1); // Caso contrário, chama a função recursivamente com as duas strings avançadas em um caractere
}
int main (){
char str1[20];
char str2[20];

scanf("%s", str1);
scanf("%s", str2);

if(camparastr(str1, str2)){
  printf("As string são iguais");
}else{
  printf("As string são diferentes");
}
return 0;
}