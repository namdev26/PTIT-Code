multiset <char> ms;
		for (auto c : s){
			ms.insert(char(c));
		}
		for (auto x : ms){
			cout << x;
		}