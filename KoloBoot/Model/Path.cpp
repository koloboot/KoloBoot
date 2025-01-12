//
//  Path.cpp
//  KoloBoot
//
//  Created by Abu Muhammad on 09/04/18.
//  Copyright © 2018 Abu Muhammad. All rights reserved.
//

#include "Path.hpp"

namespace Model {
    Path::Path(int id_pth, int proj_id, const std::string& nm, const std::string& pth, std::string&& t):
        Model::BaseModel(id_pth, nm),
        Model::GeneralModel(t),
        project_id(proj_id),
        path(pth)
    {
        
    }
    
    Path::Path(int proj_id, const std::string& nm, const std::string& pth, std::string&& t):
        Model::BaseModel(nm),
        Model::GeneralModel(t),
        project_id(proj_id),
        path(pth)
    {
        
    }
    
    Path::Path()
    {
        
    }
    
    Path::~Path()
    {
        
    }
    
    void Path::setPath(const std::string &pth)
    {
        path = pth;
    }
    
    const std::string Path::getPath() const noexcept
    {
        return path;
    }
    
    void Path::setProjectId(int proj)
    {
        project_id = proj;
    }
    
    int Path::getProjectId() const noexcept
    {
        return project_id;
    }
    
    void Path::setParams(const std::vector<Model::Param> &par)
    {
        params = par;
    }
    
    std::vector<Model::Param> Path::getParams() const noexcept
    {
        return params;
    }
    
    std::ostream& operator<<(std::ostream &os, const Model::Path& pth) {
        os << "[" << pth.getId() <<" "<< pth.getName() <<" "<< pth.getProjectId() << " " << pth.getPath() << " " << pth.getType<std::string>() << "]";
        return os;
    }
}

