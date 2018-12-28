/* Copyright (c) 1997 John D. Polstra.
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:
   1. Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

   THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
   ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
   FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
   DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
   OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
   OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
   SUCH DAMAGE. 
   如果满足以下条件，则允许以源代码和二进制形式重新分发和使用，无论是否经过修改：
   1.源代码的再分发必须保留上述版权声明，此条件列表和以下免责声明。
   2.二进制形式的再分发必须在随分发提供的文档和/或其他材料中复制上述版权声明，此条件列表和以下免责声明。

   2本软件由作者和贡献者按“原样”提供，并且不承担任何明示或暗示的担保，包括但不限于对
  适销性和特定用途的适用性的暗示担保。在任何情况下，作者或撰稿人均不对任何直接，间接，
  偶然，特殊，惩戒或后果性损害（包括但不限于采购替代商品或服务;损失使用，数据或利润;或
  业务中断）无论如何引起并承担任何责任理论，无论是在使用本软件的任何方式下产生的合同，
  严格责任或侵权（包括疏忽或其他），即使被告知此类损害的可能性。 */

#ifndef	_ELF_HINTS_H_
#define	_ELF_HINTS_H_

#include "bfd_stdint.h"

/* Hints file produced by ldconfig.  */
struct elfhints_hdr
{
  uint32_t magic;		/* Magic number.  */
  uint32_t version;		/* File version (1).  */
  uint32_t strtab;		/* Offset of string table in file.  */
  uint32_t strsize;		/* Size of string table.  */
  uint32_t dirlist;		/* Offset of directory list in string table.  */
  uint32_t dirlistlen;		/* strlen(dirlist).  */
  uint32_t spare[26];		/* Room for expansion.  */
};

#define ELFHINTS_MAGIC	0x746e6845

#define _PATH_ELF_HINTS	"/var/run/ld-elf.so.hints"

#endif /* !_ELF_HINTS_H_ */
