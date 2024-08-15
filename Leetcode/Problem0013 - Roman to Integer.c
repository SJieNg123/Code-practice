int romanToInt(char* s) {
    int len = strlen(s);
    int ans = 0;
    for(int i=0; i<len; i++)
    {
        switch (s[i])
        {
            case 'I':
            {
                if(s[i+1] == 'V')
                {
                    ans += 4;
                    i++;
                }
                else if(s[i+1] == 'X')
                {
                    ans += 9;
                    i++;
                }
                else ans += 1;
                break;

                case 'V':
                {
                    ans += 5;
                    break;
                }

                case 'X':
                {
                    if(s[i+1] == 'L')
                    {
                        ans += 40;
                        i++;
                    }
                    else if(s[i+1] == 'C')
                    {
                        ans += 90;
                        i++;
                    }
                    else ans += 10;
                    break;
                }

                case 'L':
                {
                    ans += 50;
                    break;
                }

                case 'C':
                {
                    if(s[i+1] == 'D')
                    {
                        ans += 400;
                        i++;
                    }
                    else if(s[i+1] == 'M')
                    {
                        ans += 900;
                        i++;
                    }
                    else ans += 100;
                    break;
                }

                case 'D':
                {
                    ans += 500;
                    break;
                }

                case 'M':
                {
                    ans += 1000;
                    break;
                }
            }
        }
    }
    return ans;
}
