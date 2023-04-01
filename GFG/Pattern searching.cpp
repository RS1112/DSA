bool searchPattern(string str, string pat)
{
    if(str.length()<pat.length()){
        return false;
    }
    int limit=str.length()-pat.length()+1;
    for(int i=0; i<limit; i++){
        for(int j=0; j<pat.length(); j++){
            if(str[i+j]!=pat[j])
                break;
            if(j==(pat.length()-1))
                return true;
        }
    }
    return false;
}