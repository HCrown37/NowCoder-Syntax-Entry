void reverse(char a[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        char c = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = c;
    }
}

int main()
{
    int t; scanf("%d", &t);
    while (t--)
    {
        char a[55];
        char b[55];
        int c[1000] = {0};
        scanf("%s %s", a, b);
        int len1 = strlen(a);
		int len2 = strlen(b);
        reverse(a, len1); reverse(b, len2);
        int len = len1 + len2 - 1;
        int max = len;
        for (int i = 0; i < len1; i++)
        {
            for (int j = 0; j < len2; j++)
            {
                c[i + j] += (a[i] - 48) * (b[j] - 48);
            }
        }
        for (int i = 0; i < len; i++)
        {
            if (c[i] >= 10)
            {
                c[i + 1] += c[i] / 10;
                c[i] %= 10;
                if (i >= len - 1)
                    len++;
            }
        }
        for (int i = len - 1; i >= 0; i--)
        {
            printf("%d", c[i]);
        }
        printf("\n");
    }
}