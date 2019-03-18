#include <cstdio>
using namespace std;

int main() {
	int mainLoop, secondLoop;
	int marks[1001];
	int total, finalResults;
	double average;

	scanf("%d", &mainLoop);
	while (mainLoop--) {
		scanf("%d", &secondLoop);
		total = 0;
		for (int i = 0; i < secondLoop; i++) {
			scanf("%d", &marks[i]);
			total += marks[i];
		}
		average = (double) total / (double) secondLoop;

		finalResults = 0;
		for (int i = 0; i < secondLoop; i++) {
			if (marks[i] > average)
				finalResults++;
		}

		printf("%.3lf%%\n", (double) finalResults / (double) secondLoop * 100.0);
	}

	return 0;
}