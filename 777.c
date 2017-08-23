
#include<stdio.h>
int main()
{
    char ip1[] = "128.0.0.1";
    char ip2[] = "125.16.100.1";
    char ip3[] = "125.512.100.1";
    char ip4[] = "125.512.100.abc";
    is_valid_ip(ip1)? printf("Valid\n"): printf("Not valid\n");
    is_valid_ip(ip2)? printf("Valid\n"): printf("Not valid\n");
    is_valid_ip(ip3)? printf("Valid\n"): printf("Not valid\n");
    is_valid_ip(ip4)? printf("Valid\n"): printf("Not valid\n");
    return 0;
