/* The MIT License (MIT)
 *
 * Copyright (c) 2014-2018 David Medina and Tim Warburton
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 */

#include <occa/defines.hpp>
#include <occa/tools/string.hpp>
#include <occa/tools/sys.hpp>

#define ASSERT_EQ(a, b)                         \
  OCCA_ERROR("Comparison Failed",               \
             occa::test::assertEqual(a, b));

#define ASSERT_NEQ(a, b)                        \
  OCCA_ERROR("Comparison Failed",               \
             occa::test::assertNotEqual(a, b));

#define ASSERT_EQ_BINARY(a, b)                      \
  OCCA_ERROR("Comparison Failed",                   \
             occa::test::assertEqualBinary(a, b));

#define ASSERT_NEQ_BINARY(a, b)                       \
  OCCA_ERROR("Comparison Failed",                     \
             occa::test::assertNotEqualBinary(a, b));

#define ASSERT_TRUE(value)                          \
  OCCA_ERROR("Comparison Failed", (bool) (value));

#define ASSERT_FALSE(value)                           \
  OCCA_ERROR("Comparison Failed", !((bool) (value)));

namespace occa {
  namespace test {
    template <class TM1, class TM2>
    bool areEqual(const TM1 &a, const TM2 &b) {
      return (a == b);
    }

    template <class TM1, class TM2>
    bool assertEqual(const TM1 &a, const TM2 &b) {
      if (!areEqual(a, b)) {
        std::cerr << "left : " << a << '\n'
                  << "right: " << b;
        return false;
      }
      return true;
    }

    template <class TM1, class TM2>
    bool assertNotEqual(const TM1 &a, const TM2 &b) {
      if (areEqual(a, b)) {
        std::cerr << "left : " << a << '\n'
                  << "right: " << b;
        return false;
      }
      return true;
    }

    template <class TM1, class TM2>
    bool assertEqualBinary(const TM1 &a, const TM2 &b) {
      if (a != b) {
        std::cerr << "left : " << stringifySetBits(a) << '\n'
                  << "right: " << stringifySetBits(b);
        return false;
      }
      return true;
    }

    template <class TM1, class TM2>
    bool assertNotEqualBinary(const TM1 &a, const TM2 &b) {
      if (a != b) {
        std::cerr << "left : " << stringifySetBits(a) << '\n'
                  << "right: " << stringifySetBits(b);
        return false;
      }
      return true;
    }

    template <>
    bool areEqual<float, float>(const float &a, const float &b);

    template <>
    bool areEqual<double, float>(const double &a, const float &b);

    template <>
    bool areEqual<float, double>(const float &a, const double &b);

    template <>
    bool areEqual<double, double>(const double &a, const double &b);
  }
}
