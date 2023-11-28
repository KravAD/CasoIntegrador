#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "json11.hpp"
#include "jsonlib.hpp"

enum variant_type{ simbolo, numero, lista, proc, lambda, cadena};

struct entorno;

class Variant {
    public:
    typedef Variant(*proc_type) ( const std::vector<Variant>& );
    typedef std::vector<Variant>::const_iterator iter;
    typedef std::map<std::string, Variant> map;

    variant_type type;
    std::string val;
    std::vector<Variant> list;
    proc_type proc;
    entorno* env;

    Variant(variant_type type = simbolo) : type(type) , env(0), proc(0) { }
    Variant(variant_type type, const std::string& val) : type(type), val(val) , env(0) , proc(0) { }
    Variant(proc_type proc) : type(proc), proc(proc) , env(0) { }

    std::string to_string();
    std::string to_json_string();
    static Variant from_json_string(std::string json);
    static Variant parse_json(jsonlib::Json job);

};

std::string Variant::to_string() {
    std::cout << "to_string" << std::endl;
}

std::string Variant::to_json_string() {
    std::cout << "to_json_string" << std::endl;
}

Variant Variant::from_json_string(std::string sjson) {
    std::cout << "from_json_string" << std::endl;
}

Variant Variant::parse_json(jsonlib::Json job) {
    // Tu implementación aquí
}

struct entorno {
    
};
