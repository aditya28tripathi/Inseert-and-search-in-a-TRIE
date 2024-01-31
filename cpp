class Solution
{
    public:
        void insert(struct TrieNode *root, string key)
        {
            
            int n
            =key.size();
            TrieNode* node=root;
            for(int i=0; i<n; i++)
            {
                int j=key[i]-'a';
                
                if(node->children[j]==NULL)
                
                {
                    
                    
                    node->children[j]=new TrieNode();
                }
                
                
                node=node->children[j];
            }
            node->isLeaf=1;
        }
        
       
        bool search(struct TrieNode *root, string key) 
        {
            https://media.geeksforgeeks.org/img-practice/prod/courses/5/Web/Content/Clock-4_1706701529.gif
            int n=key.length();
            
            
            TrieNode* node=root;
            
for(int i=0; i<n; i++)
            {
                int j=key[i]-'a';
                
                
                if(node->children[j]==NULL)
                
                return 0;
                
    node=node->children[j];
            }
            
            
            return (node->isLeaf==1);
        }
};
