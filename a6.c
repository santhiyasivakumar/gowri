int main()
{
     int ar[] = {2, 3, 5, 4, 5, 3, 4};
     int n = sizeof(ar)/sizeof(ar[0]);
     cout << "Element occurring once is " << findSingle(ar, n);
     return 0;
}
