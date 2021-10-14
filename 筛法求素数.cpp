const int maxn = 1000001;
int prime[maxn], num = 0;
bool p[maxn] = {false};
void find_prime(int n)
{
		for(int i = 2; i < maxn; i++){
					if(p[i] == false){
								prime[num++] = i;
										if(num >= n) break;
												for(int j = 2 * i; j < maxn; j += i)														p[j] = true;																	}
		}
}

