class Solution {
public:
    string interpret(string command) {
        string msg;
        int len = command.size();
        
        for(int i = 0; i < len; i++)
        {
            if(command[i]=='G') msg+='G';              
            else if(command[i]=='(' && command[i+1]==')')
                msg+='o', i++;
            else
                msg+="al", i+=3;
        }     
        return msg;
    }
};