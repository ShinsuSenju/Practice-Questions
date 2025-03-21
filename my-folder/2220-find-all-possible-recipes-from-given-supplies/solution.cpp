

class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_set<string> supplySet(supplies.begin(), supplies.end());
        vector<string> ans;
        int recipesLeft = recipes.size();
        
        while (recipesLeft > 0) { 
            int prevRecipesLeft = recipesLeft;
            
            for (int i = 0; i < recipes.size(); i++) {
                string recipe = recipes[i];
                if (supplySet.count(recipe)) continue;  
                
                bool canMake = true;
                for (const string& ing : ingredients[i]) {
                    if (!supplySet.count(ing)) { 
                        canMake = false;
                        break;
                    }
                }
                
                if (canMake) {
                    supplySet.insert(recipe);
                    ans.push_back(recipe);
                    recipesLeft--;  
                }
            }
            
            if (recipesLeft == prevRecipesLeft) break;  
        }
        return ans;
    }
};

