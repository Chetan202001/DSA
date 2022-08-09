    bool isValid(string s) {
            stack<char> sta; 
        int i;
        for(i = 0; i < s.size(); i++){
			if(s[i] == '}' || s[i] == ']' || s[i] == ')'){ 
                if(sta.empty() == 1){
					return false;
					break;
				}
            	if((sta.top() == '(' && s[i] == ')') || (sta.top() == '{' && s[i] == '}') || (sta.top() == '[' && s[i] == ']')){
        			sta.pop(); 
				}
                else{ 
					return false;
					break;
				}
			}
			else sta.push(s[i]); 
		}
        if(sta.empty()){
            return true;
        }else{
            return false;
    }
    }