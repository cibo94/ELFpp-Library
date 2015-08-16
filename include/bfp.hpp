// ------------------------------------------------------------------------------ //
//      Binary File Parser version 0.0.1, Copyright (C) 2015 Miroslav Cibulka     //
//  Binary File Parser comes with ABSOLUTELY NO WARRANTY.                         //
//  This is free software, and you are welcome to redistribute it                 //
//      under certain conditions.                                                 //
// ------------------------------------------------------------------------------ //

/**
 * @file bfp.hpp
 * @author Miroslav Cibulka
 * @brief Main header for binary file parser
 *        This includes all necessary headers for use.
 *
 *        Example of use:
 *        @code
 *          #include <iostream>
 *          #include <bfp.hpp>
 *
 *
 *          int main(
 *              int args,
 *              const char **argv)
 *            {
 *              auto _bfd = ::bfp::Parser::get_unique_instance();
 *              try
 *                {
 *                  auto file = _bfd->Open(*argv, "");
 *                  if (file == nullptr)
 *                    {
 *                      BFP_ASSERT();
 *                      return EXIT_FAILURE;
 *                    }
 *                  for (auto &_sec : *file)
 *                    for (auto &_sym : _sec)
 *                      {
 *                        /// process symbol
 *                      }
 *                } catch (::bfp::base_exception &ex)
 *                {
 *                  ::std::cerr << ex.what();
 *                  return EXIT_FAILURE;
 *                }
 *              delete _bfd;
 *              return EXIT_SUCCESS;
 *            }
 *        @endcode
 */

#ifndef BINARY_FILE_PARSER_BFP_HPP
# define BINARY_FILE_PARSER_BFP_HPP

#include <vector>                 // ::std::vector<class>
#include <iterator>               // ::std::iterator
#include <map>                    // ::std::map
#include <string>                 // ::std::to_string, ::std::string
#include <bfd.h>                  // binutils
#include <dis-asm.h>              // disassembler
#include <bfp/exception.hpp>      // all bfp exceptions
#include <bfp/support.hpp>        // support functions
#include <bfp/section.hpp>        // Section class
#include <bfp/instruction.hpp>    // Instruction abstract class + concrete
#include <bfp/symbol.hpp>         // Symbol class
#include <bfp/file.hpp>           // File class
#include <bfp/parser.hpp>         // Parser class


#endif //BINARY_FILE_PARSER_BFP_HPP
