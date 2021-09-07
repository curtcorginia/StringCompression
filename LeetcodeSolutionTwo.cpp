//Accepted
//Roughly a C++ version of this https://www.youtube.com/watch?v=IhJgguNiYYk
class Solution 
{
public:
    int compress(vector<char>& chars) 
    {
        int i = 0;
        int index = 0;
        
        while(i < chars.size())
        {
            int j = i;
        
            while(j < chars.size() && chars[i] == chars[j])
            {
                j++;
            }
            chars[index++] = chars[i];
            if(j - i >= 2)
            {
                std::string strConv = std::to_string(j - i);
                for(int x = 0; x < strConv.size(); x++)
                {
                    chars[index++] = strConv[x];
                }
            }
            i = j;
        }
        
        return index;
    }
};