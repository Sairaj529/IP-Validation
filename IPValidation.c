/* Return 1 is addr is a valid IP address, return 0 otherwise */
#include<ctype.h>
int is_valid_ip(const char * addr) {

    int dot=0;
  for(int i=0;addr[i]!='\0';i++){
    
    if(addr[i]=='.')
      ++dot;
  }
  int num=0;
  if(dot!=3) return 0;
  for(int i=0;addr[i]!='\0';i++){
    //if(isdigit(addr[i]))
      //return 0;
      if(addr[i]==' ')
        return 0;
      if((addr[i]=='.')&&(addr[i+1]=='0')&&(isdigit(addr[i+2]))) return 0;
    if(addr[i]!='.'){
      num*=10;
      if(!isdigit(addr[i])) return 0;
      num+=(addr[i]-48);
    }
    else
      {
      printf("%d\n",num);
      if(!((num>=0)&&(num<=255)))
        return 0;
      num=0;
        
    }
  }
  return 1;

}
