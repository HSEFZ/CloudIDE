#define lson u << 1
#define rson u << 1 | 1

namespace segmentTree{
	struct Node{
		int L, R, max, tag;
	}	T[T_MAX];

	inline void Update(int u) {
		T[u].max = max(T[lson].max, T[rson].max);
	}

	inline void Cover(int u, int C) {
		T[u].max += C;
		T[u].tag += C;
	}

	inline void Push(int u) {
		if (T[u].tag) {
			Cover(lson, T[u].tag);
			Cover(rson, T[u].tag);
			T[u].tag = 0;
		}
	}
	
	inline int Query(int u, int L, int R) {
		if (L <= T[u].L &&　T[u].R <= R) {
			return T[u].max;
		}
		
		Push(u);
		int ans = 0;

		if (L <= T[lson].R) ans = max(ans, Query(lson, L, R));
		if (R >= T[rson].L) ans = max(ans, Query(rson, L, R));

		return T[u].max;
	}
	
	inline void Edit(int u, int L, int R, int C) {
		if (L <= T[u].L && T[u].R <= R) {
			Cover(u, C);
			return;
		}

		Push(u);
		
		if (L <= T[lson].R) Edit(lson ,L, R, C);
		if (R >= T[rson].L) Edit(rson, L, R, C);

		Update(u);
	}
	
	inline void Build(int u, int L, int R) {
		T[u].L = L;
		T[u].R = R;

		if (L == R) {
			T[u].max = A[L];
			return;
		}
		
		int M = (L + R) >> 1;
		Build(lson, L, M);
		Build(rson, M+1, R);

		Update(u);
	}
}
