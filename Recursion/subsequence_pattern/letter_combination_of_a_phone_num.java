import java.util.ArrayList;
import java.util.List;

public class letter_combination_of_a_phone_num {
    String[] map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    private void helper(int ind,String digits,List<String> ans,StringBuilder ds){
        if(digits.length() == ind){
            ans.add(ds.toString());
            return;
        }
        String letter = map[digits.charAt(ind)-'0'];
        for(char ch : letter.toCharArray()){
            ds.append(ch);
            helper(ind+1,digits,ans,ds);
            ds.deleteCharAt(ds.length()-1);
        }
    }
    public List<String> letterCombinations(String digits) {
        List<String> ans = new ArrayList<>();
        if(digits.length() == 0) return ans;
        helper(0,digits,ans,new StringBuilder());
        return ans;
    }
}
