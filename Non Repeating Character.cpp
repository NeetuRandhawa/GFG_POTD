class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
      unordered_map<char,int>freq;
      for(char c:S) freq[c]++;
      for(char c:S) if(freq[c]==1)return c;
      return '$';
    }
};
