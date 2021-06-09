//User function Template for C++

string reverseWord(string str){
    char a;
    int b=str.length();
  for (int i=0;i<b/2;i++)
  {
      a=str[i];
      str[i]=str[b-1-i];
      str[b-1-i]=a;
  }
  return str;
}
