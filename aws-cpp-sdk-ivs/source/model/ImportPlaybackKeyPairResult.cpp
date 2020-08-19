﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ImportPlaybackKeyPairResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportPlaybackKeyPairResult::ImportPlaybackKeyPairResult()
{
}

ImportPlaybackKeyPairResult::ImportPlaybackKeyPairResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ImportPlaybackKeyPairResult& ImportPlaybackKeyPairResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keyPair"))
  {
    m_keyPair = jsonValue.GetObject("keyPair");

  }



  return *this;
}
