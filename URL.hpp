#include <string>

using namespace std;

size_t handle_data(void *ptr, size_t size, size_t nmemb, void *stream);

class URL 
{
    private:
        string stringURL;
        char* charURL;

    public:
        URL(string url);
        string getContents();

};
