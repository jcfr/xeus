/***************************************************************************
* Copyright (c) 2016, Johan Mabille and Sylvain Corlay                     *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

#ifndef XMIDDLEWARE_HPP
#define XMIDDLEWARE_HPP

#include "xeus.hpp"

#include <string>

namespace xeus
{

    XEUS_API std::string get_controller_end_point();
    XEUS_API std::string get_publisher_end_point();

    std::string XEUS_API get_end_point(const std::string& transport,
                              const std::string& ip,
                              const std::string& port);

    int XEUS_API get_socket_linger();

}

#endif
