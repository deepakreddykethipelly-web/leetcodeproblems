class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int current_white=0;
        int min_white=0;
        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='W')
            {
                current_white++;
            }
        }
        min_white=current_white;
        if(min_white==0)return 0;
        for(int i=k;i<blocks.size();i++)
        {
            if(blocks[i]=='W')
            current_white++;
            if(blocks[i-k]=='W')
            current_white--;
            if(current_white<min_white)
            min_white=current_white;
            if(min_white==0)
            return 0;
        }
        return min_white;
    }
};