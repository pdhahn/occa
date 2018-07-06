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
/*
-------------[ DO NOT EDIT ]-------------
 THIS IS AN AUTOMATICALLY GENERATED FILE
 EDIT: scripts/setupKernelOperators.py
=========================================
*/
  void kernel::operator() (const kernelArg &arg0) const {
    kernelArg args[] = { arg0 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(1);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 1);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1) const {
    kernelArg args[] = { arg0, arg1 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(2);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 2);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2) const {
    kernelArg args[] = { arg0, arg1, arg2 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(3);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 3);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(4);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 4);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(5);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 5);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(6);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 6);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(7);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 7);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(8);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 8);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(9);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 9);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(10);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 10);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(11);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 11);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(12);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 12);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(13);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 13);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(14);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 14);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(15);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 15);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(16);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 16);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(17);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 17);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(18);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 18);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(19);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 19);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(20);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 20);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(21);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 21);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(22);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 22);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(23);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 23);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(24);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 24);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(25);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 25);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(26);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 26);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(27);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 27);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(28);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 28);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(29);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 29);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(30);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 30);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(31);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 31);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(32);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 32);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(33);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 33);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(34);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 34);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(35);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 35);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(36);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 36);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(37);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 37);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(38);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 38);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(39);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 39);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(40);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 40);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(41);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 41);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(42);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 42);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(43);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 43);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(44);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 44);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(45);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 45);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(46);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 46);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(47);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 47);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(48);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 48);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(49);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 49);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(50);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 50);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(51);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 51);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(52);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 52);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(53);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 53);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(54);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 54);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(55);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 55);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(56);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 56);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(57);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 57);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(58);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 58);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(59);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 59);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(60);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 60);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(61);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 61);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(62);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 62);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(63);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 63);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(64);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 64);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(65);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 65);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(66);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 66);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(67);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 67);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(68);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 68);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(69);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 69);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(70);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 70);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(71);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 71);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(72);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 72);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(73);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 73);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(74);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 74);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(75);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 75);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(76);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 76);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(77);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 77);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(78);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 78);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(79);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 79);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(80);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 80);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(81);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 81);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(82);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 82);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(83);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 83);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(84);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 84);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(85);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 85);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(86);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 86);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(87);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 87);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(88);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 88);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(89);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 89);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(90);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 90);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(91);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 91);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90,  const kernelArg &arg91) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90, arg91 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(92);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 92);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90,  const kernelArg &arg91,  const kernelArg &arg92) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90, arg91, arg92 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(93);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 93);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90,  const kernelArg &arg91,  const kernelArg &arg92,
                      const kernelArg &arg93) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90, arg91, arg92, arg93 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(94);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 94);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90,  const kernelArg &arg91,  const kernelArg &arg92,
                      const kernelArg &arg93,  const kernelArg &arg94) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90, arg91, arg92, arg93, arg94 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(95);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 95);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90,  const kernelArg &arg91,  const kernelArg &arg92,
                      const kernelArg &arg93,  const kernelArg &arg94,  const kernelArg &arg95) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90, arg91, arg92, arg93, arg94, arg95 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(96);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 96);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90,  const kernelArg &arg91,  const kernelArg &arg92,
                      const kernelArg &arg93,  const kernelArg &arg94,  const kernelArg &arg95,
                      const kernelArg &arg96) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90, arg91, arg92, arg93, arg94, arg95, arg96 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(97);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 97);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90,  const kernelArg &arg91,  const kernelArg &arg92,
                      const kernelArg &arg93,  const kernelArg &arg94,  const kernelArg &arg95,
                      const kernelArg &arg96,  const kernelArg &arg97) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90, arg91, arg92, arg93, arg94, arg95, arg96, arg97 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(98);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 98);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90,  const kernelArg &arg91,  const kernelArg &arg92,
                      const kernelArg &arg93,  const kernelArg &arg94,  const kernelArg &arg95,
                      const kernelArg &arg96,  const kernelArg &arg97,  const kernelArg &arg98) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90, arg91, arg92, arg93, arg94, arg95, arg96, arg97, arg98 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(99);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 99);
    run();
  }

  void kernel::operator() (const kernelArg &arg0,  const kernelArg &arg1,  const kernelArg &arg2,
                      const kernelArg &arg3,  const kernelArg &arg4,  const kernelArg &arg5,
                      const kernelArg &arg6,  const kernelArg &arg7,  const kernelArg &arg8,
                      const kernelArg &arg9,  const kernelArg &arg10,  const kernelArg &arg11,
                      const kernelArg &arg12,  const kernelArg &arg13,  const kernelArg &arg14,
                      const kernelArg &arg15,  const kernelArg &arg16,  const kernelArg &arg17,
                      const kernelArg &arg18,  const kernelArg &arg19,  const kernelArg &arg20,
                      const kernelArg &arg21,  const kernelArg &arg22,  const kernelArg &arg23,
                      const kernelArg &arg24,  const kernelArg &arg25,  const kernelArg &arg26,
                      const kernelArg &arg27,  const kernelArg &arg28,  const kernelArg &arg29,
                      const kernelArg &arg30,  const kernelArg &arg31,  const kernelArg &arg32,
                      const kernelArg &arg33,  const kernelArg &arg34,  const kernelArg &arg35,
                      const kernelArg &arg36,  const kernelArg &arg37,  const kernelArg &arg38,
                      const kernelArg &arg39,  const kernelArg &arg40,  const kernelArg &arg41,
                      const kernelArg &arg42,  const kernelArg &arg43,  const kernelArg &arg44,
                      const kernelArg &arg45,  const kernelArg &arg46,  const kernelArg &arg47,
                      const kernelArg &arg48,  const kernelArg &arg49,  const kernelArg &arg50,
                      const kernelArg &arg51,  const kernelArg &arg52,  const kernelArg &arg53,
                      const kernelArg &arg54,  const kernelArg &arg55,  const kernelArg &arg56,
                      const kernelArg &arg57,  const kernelArg &arg58,  const kernelArg &arg59,
                      const kernelArg &arg60,  const kernelArg &arg61,  const kernelArg &arg62,
                      const kernelArg &arg63,  const kernelArg &arg64,  const kernelArg &arg65,
                      const kernelArg &arg66,  const kernelArg &arg67,  const kernelArg &arg68,
                      const kernelArg &arg69,  const kernelArg &arg70,  const kernelArg &arg71,
                      const kernelArg &arg72,  const kernelArg &arg73,  const kernelArg &arg74,
                      const kernelArg &arg75,  const kernelArg &arg76,  const kernelArg &arg77,
                      const kernelArg &arg78,  const kernelArg &arg79,  const kernelArg &arg80,
                      const kernelArg &arg81,  const kernelArg &arg82,  const kernelArg &arg83,
                      const kernelArg &arg84,  const kernelArg &arg85,  const kernelArg &arg86,
                      const kernelArg &arg87,  const kernelArg &arg88,  const kernelArg &arg89,
                      const kernelArg &arg90,  const kernelArg &arg91,  const kernelArg &arg92,
                      const kernelArg &arg93,  const kernelArg &arg94,  const kernelArg &arg95,
                      const kernelArg &arg96,  const kernelArg &arg97,  const kernelArg &arg98,
                      const kernelArg &arg99) const {
    kernelArg args[] = { arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28, arg29, arg30, arg31, arg32, arg33, arg34, arg35, arg36, arg37, arg38, arg39, arg40, arg41, arg42, arg43, arg44, arg45, arg46, arg47, arg48, arg49, arg50, arg51, arg52, arg53, arg54, arg55, arg56, arg57, arg58, arg59, arg60, arg61, arg62, arg63, arg64, arg65, arg66, arg67, arg68, arg69, arg70, arg71, arg72, arg73, arg74, arg75, arg76, arg77, arg78, arg79, arg80, arg81, arg82, arg83, arg84, arg85, arg86, arg87, arg88, arg89, arg90, arg91, arg92, arg93, arg94, arg95, arg96, arg97, arg98, arg99 };
    kHandle->arguments.clear();
    kHandle->arguments.reserve(100);
    kHandle->arguments.insert(kHandle->arguments.begin(), args, args + 100);
    run();
  }
