#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::string;
int main()
{

    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, count, tmpj;
    std::cin >> t;
    std::string word;
    while (t--)
    {
        
        count = 0;
        std::cin >> word;

        for (int i = 0; i < word.size(); i++) {
            if(word.find(i+1)){
                count++;
                continue;
            }
            for (int j = i + 1; j < word.size(); j++){
                if (word[i] == word[j]){
                    i = j;
                    tmpj = j;
                    break;
                }else 
                    count++;
            }
                if (tmpj - i > 1)
                    count--;
        }
        std::cout << count << "\n";
    }
}

