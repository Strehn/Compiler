// C-S21
int gcd(int u, v)
{
    if v==0 then return u;
    else return gcd(v, u - u/v*v);
}

main()
{
    output(gcd(input(), input()));
    outnl();
}

