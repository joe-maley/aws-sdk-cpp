﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sqs/model/ChangeMessageVisibilityBatchResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ChangeMessageVisibilityBatchResult::ChangeMessageVisibilityBatchResult()
{
}

ChangeMessageVisibilityBatchResult::ChangeMessageVisibilityBatchResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ChangeMessageVisibilityBatchResult& ChangeMessageVisibilityBatchResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ChangeMessageVisibilityBatchResult"))
  {
    resultNode = rootNode.FirstChild("ChangeMessageVisibilityBatchResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successfulNode = resultNode.FirstChild("ChangeMessageVisibilityBatchResultEntry");
    if(!successfulNode.IsNull())
    {
      XmlNode changeMessageVisibilityBatchResultEntryMember = successfulNode;
      while(!changeMessageVisibilityBatchResultEntryMember.IsNull())
      {
        m_successful.push_back(changeMessageVisibilityBatchResultEntryMember);
        changeMessageVisibilityBatchResultEntryMember = changeMessageVisibilityBatchResultEntryMember.NextNode("ChangeMessageVisibilityBatchResultEntry");
      }

    }
    XmlNode failedNode = resultNode.FirstChild("BatchResultErrorEntry");
    if(!failedNode.IsNull())
    {
      XmlNode batchResultErrorEntryMember = failedNode;
      while(!batchResultErrorEntryMember.IsNull())
      {
        m_failed.push_back(batchResultErrorEntryMember);
        batchResultErrorEntryMember = batchResultErrorEntryMember.NextNode("BatchResultErrorEntry");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::SQS::Model::ChangeMessageVisibilityBatchResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
