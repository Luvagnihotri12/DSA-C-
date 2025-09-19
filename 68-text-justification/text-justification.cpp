class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int i = 0;

        while (i < words.size()) {
            int lineLen = words[i].size();
            int j = i + 1;

            // Try to fit as many words as possible into the current line
            while (j < words.size() && lineLen + 1 + words[j].size() <= maxWidth) {
                lineLen += 1 + words[j].size(); // 1 for space
                j++;
            }

            int numWords = j - i;
            int totalSpaces = maxWidth - (lineLen - (numWords - 1)); // total extra spaces to distribute
            string line;

            // If it's the last line or the line has only one word, left-justify
            if (j == words.size() || numWords == 1) {
                for (int k = i; k < j; ++k) {
                    line += words[k];
                    if (k < j - 1) line += " ";
                }
                line += string(maxWidth - line.size(), ' ');
            } else {
                int spaceBetween = totalSpaces / (numWords - 1);
                int extraSpaces = totalSpaces % (numWords - 1);

                for (int k = i; k < j; ++k) {
                    line += words[k];
                    if (k < j - 1) {
                        int spaces = spaceBetween + (extraSpaces-- > 0 ? 1 : 0);
                        line += string(spaces, ' ');
                    }
                }
            }

            result.push_back(line);
            i = j;
        }

        return result;
    }
};
