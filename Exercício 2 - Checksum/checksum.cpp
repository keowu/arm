int checksum(int *dados, unsigned int s){
  int chk = 0;
  for(; s !=0; s--)
     chk += *(dados++);
  return chk;
}
