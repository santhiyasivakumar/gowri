

void generateIPUtil( char* str, char* output, int depth, int countDot, int val )
{
        if( !*str )
        {
                output[depth] = '\0';
                if( countDot == 3 && output[depth-1] != '.' )
                        printf( "%s\n", output );
        }
        else
        {
                output[depth] = *str;
                val = val * 10 + *str - '0';
                if( val <= 255 )
                {
                if( countDot < 3)
                {
                        output[depth + 1] = '.';
                        generateIPUtil( str+1, output, depth+2, countDot+1, 0 );
                }
                generateIPUtil( str+1, output, depth+1, countDot, val );
                }
        }
}
 
void generateIP( char* str )
{
        char output[30];
 
        generateIPUtil( str, output, 0, 0, 0 );
}
