/*
   Copyright 2020 Bloomberg Finance L.P.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 */

#ifndef INCLUDED_PB_ALLOC_H
#define INCLUDED_PB_ALLOC_H

#include <google/protobuf-c/protobuf-c.h>
extern ProtobufCAllocator pb_alloc;
typedef void *(pb_alloc_func)(void *, size_t);
typedef void(pb_free_func)(void *, void *);
ProtobufCAllocator setup_pb_allocator(pb_alloc_func *, pb_free_func *, void *);

#endif
