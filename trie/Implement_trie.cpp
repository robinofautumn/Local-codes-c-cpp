#include<bits/stdc++.h>
using namespace std;

struct TrieNode
{
    char data;
    int wordEndCount;
    struct TrieNode* child[26];

    TrieNode()
    {
        data = '0';
        wordEndCount = 0;
        for(int i=0; i<26; i++)
        {
            child[i] = NULL;
        }

    }
};

void insertTrie(struct TrieNode* root, string &word)
{
    struct TrieNode* curr = root;

    for(auto i:word)
    {
        int index = i-'a';

        if(!curr->child[index])
        {
            struct TrieNode* temp = new TrieNode();

            curr->child[index] = temp;

            temp->data = i;
        }
        curr = curr->child[index];
    }
    curr->wordEndCount++;

    cout<<word<<"inserted\t"<<"Word count -> "<<curr->wordEndCount<<endl;
}

bool searchTrie(struct TrieNode* root, string &word)
{
    struct TrieNode* curr = root;

    for(auto c:word)
    {
        if(!curr->child[c-'a'])
        {
            return false;
        }
        curr = curr->child[c-'a'];
    }
    return (curr->wordEndCount>0);
}

bool deleteTrieWord(struct TrieNode* root, string &word)
{
    if(searchTrie(root,word))
    {
        struct TrieNode* curr = root;
        for(auto c:word)
        {
            int index = c-'a' ;

            curr=curr->child[index];
        }

        curr->wordEndCount = 0;

        return true;
    }
    return false;
}

int main(){
    vector<string>insert_key = {"geek", "bat", "dad", "bad", "god", "dark", "geese", "good", "at", "all", "alas"};
    vector<string>search_key = {"god", "good", "geese", "bad"};
    vector<string>delete_key = {"god", "good", "bad", "gek"};
    
    struct TrieNode* root = new TrieNode(); // creating a new trie node (root) using the constructor

    // insert keys in the trie
    for(auto i:insert_key)
    {
        insertTrie(root,i);
    }

    // search keys in trie
    for(auto i:search_key)
    {
        if(searchTrie(root, i))
        {
            cout<<i<<" found in the trie "<<endl;
        }
        else cout<<i<<" Not Found in the trie\n";
    }

    // delete keys in trie
    for(auto i:delete_key)
    {
        if(deleteTrieWord(root, i))
        {
            cout<<i<<" found and deleted successfully! \n";
        }
        else cout<<i<<" NOT FOUND and hence can't delete!\n";
    }

    // search keys in trie
    for(auto i:search_key)
    {
        if(searchTrie(root, i))
        {
            cout<<i<<" found in the trie "<<endl;
        }
        else cout<<i<<" Not Found in the trie\n";
    }

    return 0;
}