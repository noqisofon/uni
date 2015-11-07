/*

 type.h
 
 Author:
      ned rihine <ned.rihine@gmail.com>

 Copyright (c) 2015 ned rihine

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/
#ifndef uni_type_h
#define uni_type_h

/*
  当ソースコード固有のプレフィックスは `UR` です。
 */

typedef    unsigned char     URBoolean;

typedef    signed char       URSInt8;
typedef    signed short      URSInt16;
typedef    signed long       URSInt32;
typedef    signed int        URSInt;

typedef    unsigned char     URUInt8;
typedef    unsigned short    URUInt16;
typedef    unsigned long     URUInt32;
typedef    unsigned int      URUInt;

typedef    void*             URValue;

/*
  引数パラメータを受け取らず、戻り値も持たない関数ポインタ型を表します。
 */
typedef    void            (*URAction)(void);

/*
  一定の基準を定義し、指定された引数が指し示すオブジェクトがこれらの基準を満たしているかどうかを判断する
  関数ポインタ型を表します。
 */
typedef    URBoolean       (*URPredicate)(URValue value);

/*
  それぞれの引数が指し示す 2 つのオブジェクトを比較する関数ポインタ型を表します。
 */
typedef    URSInt          (*URValueComparison)(URValue left, URValue right);


#ifndef FALSE
#   define    FALSE   ((URBoolean)0)
#endif  /* ndef TRUE */
#ifndef TRUE
#   define    TRUE    ((URBoolean)1)
#endif  /* ndef TRUE */

#endif  /* uni_type_h */
