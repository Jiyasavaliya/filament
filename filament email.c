#include<stdio.h>
#include<string.h>
int main(){
  
  char email[50];
  char password[20];
  
  char corectemail[] = "abc44@gmail.com";
  char corectpassword[] = "123456";
  
  printf("enter email : ");
  scanf("%s",email);
  
  printf("enter password : ");
  scanf("%s",password);
  
  if(strcmp(email, corectemail) == 0 || strcmp(password, corectpassword) ==0){
  	printf("login successful");
  }	
  else{
  	printf("login failed, plese try again");
  }
  return 0;
}
