#include <bits/stdc++.h>
using namespace std;

void search(char* pat, char* txt)
{
	int M = strlen(pat);
	int N = strlen(txt);

	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) {
		int j;

		/* For current index i, check for pattern match */
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
			heavy.push_back(i);
	}
}


int main()
{
    char txt[] = "lkjsdhfihedkjedh";
	char pat[] = "heavy";
	char pat1[] = "metal";
	search(pat, txt);
	heavy.push_back(-1);
	search(pat1, txt);


	return 0;
}
