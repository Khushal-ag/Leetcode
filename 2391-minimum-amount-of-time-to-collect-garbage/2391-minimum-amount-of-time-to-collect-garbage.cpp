class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int g=0,p=0,m=0;
        int lg=0,lp=0,lm=0;
        for(int i=garbage.size()-1;i>=0;i--)
        {
            for(int j=0;j<garbage[i].size();j++)
            {
                if(garbage[i][j]=='G')
                {
                    lg=max(lg,i+1);
                }
                 if(garbage[i][j]=='P')
                {
                    lp=max(lp,i+1);
                }
                 if(garbage[i][j]=='M')
                {
                    lm=max(lm,i+1);
                }
            }
        }
        for(int j=0;j<lg;j++)
        {
            for(int i=0;i<garbage[j].size();i++)
            {
                if(garbage[j][i]=='G')
                {
                    g+=1;
                }
            }
            if(j<lg-1)
            g+=travel[j];            
        }
        for(int j=0;j<lp;j++)
        {
            for(int i=0;i<garbage[j].size();i++)
            {
                if(garbage[j][i]=='P')
                {
                    p+=1;
                }
            }if(j<lp-1)
            p+=travel[j];
            cout<<p<<" ";
        }
        for(int j=0;j<lm;j++)
        {
            for(int i=0;i<garbage[j].size();i++)
            {
                if(garbage[j][i]=='M')
                {
                    m+=1;
                }
            }if(j<lm-1)
            m+=travel[j];
        }
        return g+m+p;
    }
};