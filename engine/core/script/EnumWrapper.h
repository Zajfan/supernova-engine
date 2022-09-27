#ifndef EnumWrapper_h
#define EnumWrapper_h

// need to specialized luabridge::Stack and use enum in arguments

template <class T>
struct EnumWrapper
{
    static auto push(lua_State* L, T value, std::error_code& ec) -> std::enable_if_t<std::is_enum_v<T>, bool>
    {
        lua_pushinteger(L, static_cast<std::size_t>(value));
        return true;
    }

    static auto get(lua_State* L, int index) -> std::enable_if_t<std::is_enum_v<T>, T>
    {
        return static_cast<T>(lua_tointeger(L, index));
    }

    static bool isInstance(lua_State* L, int index)
    {
        if (lua_type(L, index) == LUA_TNUMBER)
            return luabridge::is_integral_representable_by<std::size_t>(L, index);

        return false;
    }
};

#endif /* EnumWrapper_h */