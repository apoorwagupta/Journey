class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {

        unordered_map<string, int> priority = {
        {"electronics", 0},
        {"grocery", 1},
        {"pharmacy", 2},
        {"restaurant", 3}
    };
        vector<pair<string,string>> filtered;
        for (int i=0;i<code.size();i++){
        if (!isActive[i]) continue;
        if(code[i].empty()) continue;
        bool isvalid = true;
        for(auto c: code[i]){
            if(!isalnum(c) && c!= '_'){ isvalid= false;break;}
        }
        if (!isvalid) continue;
        if(businessLine[i]!="electronics" && businessLine[i]!="grocery"&& businessLine[i]!="pharmacy" && businessLine[i]!="restaurant") continue;
        
        filtered. push_back({businessLine[i],code[i]});
        }
        sort(filtered.begin(), filtered.end(), [&](const auto &a, const auto &b) {
            if(priority[a.first]!=priority[b.first]) return priority[a.first]<priority[b.first];
            return a.second<b.second;
        });
        vector<string> result;
        for (auto &p : filtered) result.push_back(p.second);
        return result;
    
    }
};