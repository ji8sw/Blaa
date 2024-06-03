#include "miau.h" // just for fun

int main() {
    srand(static_cast<unsigned int>(time(0)));
    
    std::string Input;
    int RandomWordCount = RandomInt(0, Dictionary.size() - 1); // get a random amount of words
    for (int WordIndex = 0; WordIndex < RandomWordCount; WordIndex++) // loop over each word
    {
        int RandomWordIndex = RandomInt(0, Dictionary.size() - 1); // pick a random word from the dictionary
        Input += Dictionary[RandomWordIndex] + " "; // add to the input which will be bla'ified
    }
    
    for (int Index = 0; Index < Input.length(); Index++) // go over every character
    {
        if (Input[Index] != ' ') // if it's not a space then we're in a word
        {
            int End = Input.length(); // assume the word goes till the end of the string
            for (int FindEnd = Index; FindEnd < Input.length(); FindEnd++) // find the next space aka the end of this word
            {
                if (Input[FindEnd] == ' ') // found end of word
                {
                    End = FindEnd;
                    break;
                }
            }
            for (int Index2 = Index; Index2 < End; Index2++) // loop over every character in this word
            {
                if (Index2 - Index == 0)
                    Input[Index2] = 'b';
                else if (Index2 - Index == 1)
                    Input[Index2] = 'l';
                else
                    Input[Index2] = 'a';
            }
            Index = End - 1; // move the outer loop index to the end of the current word
        }
    }
    
    std::cout << Input << std::endl;
    Sleep(1000000000);
    return 0;
}