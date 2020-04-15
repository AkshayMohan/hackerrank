string hackerrankInString(string s) {

    unsigned int i = 0;
    const char *hrank_str = "hackerrank";
    for(auto &c : s) {

        if(c == hrank_str[i])
            ++i;
        if(i == 10)
            return "YES";
    }
    return "NO";
}
