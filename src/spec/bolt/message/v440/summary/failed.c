/*
 * failed.c 
 * 
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 * IDENTIFICATION
 *	  src/spec/bolt/message/v440/failed.c
 */

#include "graph_protocol_stddef.h"

#include "spec/bolt/message/v440/message.h"
#include "spec/bolt/message/v440/chunk.h"
#include "spec/bolt/message/v440/signature.h"
#include "spec/bolt/message/v440/tag.h"


#include "spec/packstream/v100/packstream_v100.h"
#include "spec/packstream/v100/coretypes.h"
#include "spec/packstream/v100/marker.h"
#include "spec/packstream/pack_utils.h"
#include "utils/utils.h"

#include "communication/socket_manager.h"
#include "stubs/stubs.h"
#include "spec/bolt/message/v440/tag.h"

#include "libwebsockets.h"