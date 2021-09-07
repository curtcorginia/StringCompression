//Only scores 60/72, but the print statements make it a little clearer
//what's going on

//Roughly a C++ version of this https://www.youtube.com/watch?v=IhJgguNiYYk

class Solution 
{
public:
    int compress(vector<char>& chars) 
    {
        int index = 0;
        int i = 0;
        while(i < chars.size())
        {
            int j = i;
            while(j != chars.size() && chars[i] == chars[j])
            {
                j++;
            }
            chars[index++] = chars[i];
            for(int ppp = 0; ppp < chars.size(); ppp++)
            {
                std::cout << "\n" << chars[ppp];
            }
            if(j - i >= 2)
            {
                std::string charConv = std::to_string(j - i);
                std::cout << "\nThe value of charConv is " << charConv;
                for(int p = 0; p < charConv.size(); p++)
                {
                    chars[index++] = charConv[p];
                    for(int ppp = 0; ppp < chars.size(); ppp++)
                    {
                        std::cout << "\n" << chars[ppp];
                    }
                }
                std::cout << "\nNow the count after going through that is i " << i << " and j " << j;
            }
            i = j;
        }
        return index;
    }
};