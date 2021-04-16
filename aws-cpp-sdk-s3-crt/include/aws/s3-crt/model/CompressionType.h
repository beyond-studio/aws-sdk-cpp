﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class CompressionType
  {
    NOT_SET,
    NONE,
    GZIP,
    BZIP2
  };

namespace CompressionTypeMapper
{
AWS_S3CRT_API CompressionType GetCompressionTypeForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForCompressionType(CompressionType value);
} // namespace CompressionTypeMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
