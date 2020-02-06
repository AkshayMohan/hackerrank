string timeInWords(int h, int m) {

    const std::string time_str[] = {

        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "quarter",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "half",
        " minutes "
    };
    std::string ret_str; //String to be returned.

    if(!m) {

        ret_str = time_str[h-1] + " o' clock";
    } else {

        //check for past or to.
        if(m <= 30)
            ret_str = "past " + time_str[(h-1) % 12];
        else if(m < 60) {
            
            ret_str = "to " + time_str[h % 12];
            m = 60 - m;
        }
        m = ((m == 45) ? 15 : ((m == 30) ? 21 : m));

        if(m == 15 || m == 21) {

            ret_str = time_str[m - 1] + ' ' + ret_str;
        } else if(m <= 20) {

            ret_str = time_str[m-1] + ((m != 1) ? (time_str[21]) : (" minute ")) + ret_str;
        }
        else {

            int i = m % 10;
            ret_str = time_str[i-1] + time_str[21] + ret_str;

            i = m - i;
            ret_str = time_str[i - 1] + ' ' + ret_str;
        }
    }
    return ret_str;
}
