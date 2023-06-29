int search_positions(char s1[], char s2[]) {
    int count_s1, count_s2;
    for(count_s1 = 0; s1[count_s1] != '\0'; count_s1++)
    {
        for(count_s2 = 0; s2[count_s2] != '\0'; count_s2++)
       	{
            if (s1[count_s1] == s2[count_s2])
                return count_s1;
        }
    }
    return -1;
}


