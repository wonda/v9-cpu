#include <u.h>
	
int x;
	
in(){
  asm(LI, 0);
  asm(BIN);
  asm(PSHA);
  asm(POPB);
}
	
out(port){
  asm(LL, 8);
  asm(BOUT);
}

main()
{
  while(1) {
    in();
    out(1);
  }
  asm(HALT);
}
