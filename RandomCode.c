#include "stdio.h"
#include "stdlib.h"

int multiplyBy8(int v)
{
  v=v*8;
  return v;
}

int setBit6to1(int v)
{
	// TODO: set bit 6 to 1
  v= v | 64;
  return v;
}

int setBit3to0(int v)
{
  // TODO: set bit 3 to 0
  v=v&(~8);
  return v;
}
	
int flipBit5(int v)
{
	// TODO: flip bit 5 (if it is 0, make it 1.  If 0, make 1)
  v=v^(32);
  return v;
}
	
int ifBit7is0(int v)
{
 // TODO: check to see if bit 7 is a 0 - return 1 if true, 0 if false
  int T=1;
  int F=0;
  v=v&128;
  if (v==0)
    return T;
  else
    return F;

}

int ifBit3is1(int v)
{
  // check to see if bit 3 is a 1 - return 1 if true, 0 if fals
  int T=1;
  int F=0;
  v=v&8;
  if (v==0)
    return F;
  else
    return T;
}

int unsignedBits0through5(int v)
{
	// return the unsigned value in bits 0 through 5
	v=v&63;
	return v;
}

int unsignedBits6through9(int v)
{
	// return the unsigned value in bits 6 through 9
  v=v>>6;
  v=v&15;
  return v;
}

int signedBits0through5(int v)
{
  int x=v;
  x=x&32;// return the signed value in bits 0 through 5
  if(x==0){
    v=v&63;
    return v;
  }
  else{
    v=(~v)+1;
    v=v&63;
    v=v*-1;
    return v;
    }

}

int signedBits6through9(int v)
{
	// return the signed value in bits 6 through 9
  v=v>>6;
  int x=v;
  x=x&8;
  if(x==0){
    v=v&15;
    return v;
  }
  else{
    v=(~v)+1;
    v=v&15;
    v=v*-1;
    return v;
    }

}


int setBits4through9(int v, int setValue)
{
	// set bits 4 through 9 in v to become set
  setValue=setValue&63;
  setValue=setValue<<4;
  v=v&(~1008);
  v=v | setValue;
  return v;
}




