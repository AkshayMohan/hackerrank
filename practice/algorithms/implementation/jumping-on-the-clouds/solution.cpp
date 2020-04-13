int jumpingOnClouds(vector<int> c) {

    int n_jumps = 0, i, j;
    for(i = 0, j = c.size() - 3; i< j; ++n_jumps)
        i += (c[i+2]) ? 1 : 2;
    return n_jumps + 1;
}
