int sockMerchant(int n, vector<int> ar) {

    int n_pairs = 0;
    std::unordered_set<int> sock_set;
    for(auto i : ar) {

        if(sock_set.find(i) != sock_set.end()) {

            ++n_pairs;
            sock_set.erase(i);
        } else
            sock_set.insert(i);
    }
    return n_pairs;
}
