//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  
  for(int i=0;i<str.length()/2;i++)
  {
     swap(str[i],str[str.length()-1-i]);
  }
  return str;
}
