int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        if (N > M) {
            cout << N - M << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}