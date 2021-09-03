#include <iostream>
#include <string>

std::string myCompression(std::string inputStr)
{
  if(inputStr.size() <= 1) 
  {
    return inputStr;
  }
  std::string finalStr = "";
  int thisCount = 1;
  for(int i = 0; i < inputStr.size() - 1; i++)
  {
    if(inputStr[i] == inputStr[i + 1])
    {
      thisCount++;
      if(i + 1 == inputStr.size() - 1)
      {
        finalStr += inputStr[inputStr.size() - 1];
        finalStr += std::to_string(thisCount);
      }
    }
    else 
    {
      finalStr += inputStr[i];
      finalStr += std::to_string(thisCount);
      thisCount = 1;
      if( i+ 1 == inputStr.size() - 1)
      {
        finalStr += inputStr[inputStr.size() - 1];
        finalStr += std::to_string(thisCount);
      }
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
  std::cout << "Hello World!\n";
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


