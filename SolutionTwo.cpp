#include <iostream>
#include <string>

//the smack solution
std::string myCompression(std::string inputStr)
{
  std::string finalStr; 
  unsigned int count = 1; 
  for(auto it = inputStr.begin(); it != inputStr.end(); it++)
  {
    if(*(it+1) == *it)
    {
      count++;
    }
    else
    {
      if(count >= 1) 
      {
        finalStr += *it; 
        finalStr += std::to_string(count); 
      }
      else
      {
        finalStr += *it;
      }
      count = 1;
    }
  } 
  if(finalStr.size() < inputStr.size())
  {
    return finalStr;
  }
  return inputStr;
}  

int main() 
{
  if(myCompression("AABBCCCADEEEEEE") == "A2B2C3A1D1E6") 
  {
    std::cout << "\nPASS";
  }
  else
  {
    std::cout << "\nFAIL";
  }

  if(myCompression("AABBBBBBCCCADE") == "A2B6C3A1D1E1") 
  {
    std::cout << "\nPASS";
  }
  else
  {
    std::cout << "\nFAIL";
  }
  if(myCompression("A") == "A") 
  {
    std::cout << "\nPASS";
  }
  else
  {
    std::cout << "\nFAIL";
  }
  if(myCompression("AAAAAAAAAAAA") == "A12")
  {
    std::cout << "\nPASS";
  }
  else
  {
    std::cout << "\nFAIL";
  }
  
}
