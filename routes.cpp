#include "crow_all.h"

crow::response greet()
{
    return crow::response{"Hello World!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    if (!input) {
        return crow::response(400);
    }
    int sum = input["first"].i() + input["second"].i();
    std::ostringstream os;
    os << sum;
    return crow::response{os.str()};
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    if (!input) {
        return crow::response(400);
    }
    int sum = input["first"].i() + input["second"].i();
    std::ostringstream os;
    os << sum;
    return crow::response{os.str()};

}
