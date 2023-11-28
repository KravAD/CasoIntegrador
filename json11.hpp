#include <string>
#include <vector>
#include <map>

namespace json11 {

    enum JsonParse {
        STANDARD,
        COMMENTS
    };

    enum JsonTag {
        TAG_NULL,
        TAG_NUMBER,
        TAG_BOOL,
        TAG_STRING,
        TAG_ARRAY,
        TAG_OBJECT
    };

    class Json {
    public:



        double number_value() const;
        int int_value() const;
        bool bool_value() const;
        const std::string& string_value() const;
        const std::vector<Json>& array_items() const;
        const std::map<std::string, Json>& object_items() const;

        // Métodos para serializar/deserializar
        static Json parse(const std::string& in,
                          std::string& err,
                          JsonParse strategy = JsonParse::STANDARD);
        static Json parse(const char* in,
                          std::string& err,
                          JsonParse strategy = JsonParse::STANDARD);
        std::string dump() const;


    };

}

#ifndef CASOINTEGRADOR_JSON11_HPP
#define CASOINTEGRADOR_JSON11_HPP

#endif //CASOINTEGRADOR_JSON11_HPP
