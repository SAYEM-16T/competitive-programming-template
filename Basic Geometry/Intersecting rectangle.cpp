/* -- Intersecting rectangle when bottom-left and top-right corners of two rectangles are given -- */
/*
preoblem => https://codeforces.com/problemset/problem/1028/C 
sol.     => https://codeforces.com/contest/1028/submission/327933200
*/
vector<ll> inter_rec(vector<ll> ua , vector<ll> ub){// ua = {lower_left_x ,lower_left_y ,upper_right_x ,upper_right_y};
	vector<ll> ret = ua;
	ret[0] = max(ua[0] , ub[0]) , ret[1] = max(ua[1] , ub[1]) , ret[2] = min(ua[2] , ub[2]) , ret[3] = min(ua[3] , ub[3]);
	if(ret[0] <= ret[2] && ret[1] <= ret[3]){
		return ret;
	}
	else{// else manea intersection part neai
		ret.clear();
		ret.push_back(INF);ret.push_back(INF);ret.push_back(INF);ret.push_back(INF);
		return ret;
	}
}
