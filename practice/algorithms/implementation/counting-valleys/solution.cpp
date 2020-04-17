int countingValleys(int n, string s) {

    int altitude = 0, n_valleys = 0;
    for(int i = 0; i< n; ++i) {

        if(s[i] == 'U') {

            if(altitude++ == -1)
                ++n_valleys;
        }
        else
            --altitude;
    }
    return n_valleys;
}
