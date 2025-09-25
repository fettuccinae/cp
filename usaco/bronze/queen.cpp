#include <bits/stdc++.h>
using namespace std;

const int DIM = 8;

vector<vector<bool>> blocked(DIM, vector<bool>(DIM));
vector<bool> rows_taken(DIM);
vector<bool> diag1(DIM * 2 - 1);
vector<bool> diag2(DIM * 2 - 1);

int valid_num = 0;

void search_queens(int c = 0) {
	if (c == DIM) {
		valid_num++;
		return;
	}

	for (int r = 0; r < DIM; r++) {
		bool row_open = !rows_taken[r];
		bool diag_open = !diag1[r + c] && !diag2[r - c + DIM - 1];
		if (!blocked[r][c] && row_open && diag_open) {
			rows_taken[r] = diag1[r + c] = diag2[r - c + DIM - 1] = true;
			search_queens(c + 1);
			rows_taken[r] = diag1[r + c] = diag2[r - c + DIM - 1] = false;
		}
	}
}

int main() {
	for (int r = 0; r < DIM; r++) {
		string row;
		cin >> row;
		for (int c = 0; c < DIM; c++) { blocked[r][c] = row[c] == '*'; }
	}

	search_queens();

	cout << valid_num << endl;
}