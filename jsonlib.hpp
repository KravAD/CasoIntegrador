#ifndef JSONLIB_HPP
#define JSONLIB_HPP

#include <string>
#include <map>
#include <vector>

namespace jsonlib {

    class JsonObject {
    public:
        enum class Type {
            Null,
            Boolean,
            Number,
            String,
            Array,
            Object
        };


        Type type() const;


        bool as_bool() const;
        double as_number() const;
        const std::string& as_string() const;
        const std::vector<JsonObject>& as_array() const;
        const std::map<std::string, JsonObject>& as_object() const;


        static JsonObject parse(const std::string& json_text);
        std::string serialize() const;
    };

}

#endif

#ifndef CASOINTEGRADOR_JSONLIB_HPP
#define CASOINTEGRADOR_JSONLIB_HPP

#endif
