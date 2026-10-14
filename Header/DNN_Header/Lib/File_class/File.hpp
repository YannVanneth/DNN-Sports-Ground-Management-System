#ifndef _DNN_FILE_H_
#define _DNN_FILE_H_

// HEADER FILES // --------------------------------------------------------------------------//
   #include "../../DNN.hpp"
   #include <sys/stat.h> 
//-------------------------------------------------------------------------------------------//

// CLASS BODY DEFINITION //-----------------------------------------------------------------------------------------//

template <typename T>
vector<T> DNN::File<T>::read(const char* path)
{
    struct stat bs;
    char dir[] = "App_Data//";

    path = strcat(dir, path);

    ifstream file(path, ios::in | ios::binary);
    
    T temp; vector<T> vec;

    if (file.is_open())
    {
        vec.clear();

        while (file.read((char*)&temp, sizeof(T)))
        {
            vec.push_back(temp);
        }
        file.close();
    }

    return vec;
}

template <typename T>
void DNN::File<T>::write(const char* path, T &obj)
{
    struct stat bs;
    char dir[] = "App_Data//";

    // IF DOESN'T EXIST, CREATE IT.
    if(stat(dir , &bs) != 0)
    {
        mkdir(dir);
    }

    path = strcat(dir, path);

    fstream file(path, ios::out | ios::app | ios::binary);
    
    if (file.is_open())
    {
        file.write((char*)&obj, sizeof(T));
        
        file.close();
    }
    
    else cout << "Unable to open file";

}

template <typename T>
void DNN::File<T>::write(const char* path, vector<T> *obj)
{
    struct stat bs;
    char dir[] = "App_Data//";

    // IF DOESN'T EXIST, CREATE IT.
    if(stat(dir , &bs) != 0)
    {
        mkdir(dir);
    }

    path = strcat(dir, path);
    
    ofstream file(path, ios::out | ios::binary);

    if (file.is_open())
    {
        for (int i = 0; i < obj->size(); i++)
        {
            file.write((char*)&((*obj)[i]), sizeof(T));
        }
        
        file.close();
    }
    
    else cout << "Unable to open file";
}


#endif