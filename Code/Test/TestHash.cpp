#include <stdio.h>
int main()
{
  char string[] = "Tinaupw#21";
  char key[] = "wRwrDOsBbao6gky58JABgNZn0v2eGhVkKWNzMsjHv1A2usIDlfevCTQvAvCU0ZTFEIFIwuOj8EwDFEPxLCMRuzhgiLJjOU8";
  char password[32];
  for(int x = 0; x < sizeof(string); x++)
  {
    password[x] = string[x] ^ key[x];
    printf("%c", password[x]);
  }
  return 0;
}