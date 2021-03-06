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

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/HostHeaderConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/PathPatternConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/HttpHeaderConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/QueryStringConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/HttpRequestMethodConditionConfig.h>
#include <aws/elasticloadbalancingv2/model/SourceIpConditionConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a condition for a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RuleCondition">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API RuleCondition
  {
  public:
    RuleCondition();
    RuleCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
    RuleCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the field. The possible values are <code>host-header</code> and
     * <code>path-pattern</code>.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The name of the field. The possible values are <code>host-header</code> and
     * <code>path-pattern</code>.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The name of the field. The possible values are <code>host-header</code> and
     * <code>path-pattern</code>.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The name of the field. The possible values are <code>host-header</code> and
     * <code>path-pattern</code>.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The name of the field. The possible values are <code>host-header</code> and
     * <code>path-pattern</code>.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The name of the field. The possible values are <code>host-header</code> and
     * <code>path-pattern</code>.</p>
     */
    inline RuleCondition& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The name of the field. The possible values are <code>host-header</code> and
     * <code>path-pattern</code>.</p>
     */
    inline RuleCondition& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The name of the field. The possible values are <code>host-header</code> and
     * <code>path-pattern</code>.</p>
     */
    inline RuleCondition& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The condition value.</p> <p>If the field name is <code>host-header</code>,
     * you can specify a single host name (for example, my.example.com). A host name is
     * case insensitive, can be up to 128 characters in length, and can contain any of
     * the following characters. You can include up to three wildcard characters.</p>
     * <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0
     * or more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If the field name is <code>path-pattern</code>, you can specify a
     * single path pattern (for example, /img/ *). A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters. You can include up to three wildcard characters.</p> <ul> <li>
     * <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp;
     * (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li>
     * <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The condition value.</p> <p>If the field name is <code>host-header</code>,
     * you can specify a single host name (for example, my.example.com). A host name is
     * case insensitive, can be up to 128 characters in length, and can contain any of
     * the following characters. You can include up to three wildcard characters.</p>
     * <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0
     * or more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If the field name is <code>path-pattern</code>, you can specify a
     * single path pattern (for example, /img/ *). A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters. You can include up to three wildcard characters.</p> <ul> <li>
     * <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp;
     * (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li>
     * <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The condition value.</p> <p>If the field name is <code>host-header</code>,
     * you can specify a single host name (for example, my.example.com). A host name is
     * case insensitive, can be up to 128 characters in length, and can contain any of
     * the following characters. You can include up to three wildcard characters.</p>
     * <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0
     * or more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If the field name is <code>path-pattern</code>, you can specify a
     * single path pattern (for example, /img/ *). A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters. You can include up to three wildcard characters.</p> <ul> <li>
     * <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp;
     * (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li>
     * <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The condition value.</p> <p>If the field name is <code>host-header</code>,
     * you can specify a single host name (for example, my.example.com). A host name is
     * case insensitive, can be up to 128 characters in length, and can contain any of
     * the following characters. You can include up to three wildcard characters.</p>
     * <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0
     * or more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If the field name is <code>path-pattern</code>, you can specify a
     * single path pattern (for example, /img/ *). A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters. You can include up to three wildcard characters.</p> <ul> <li>
     * <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp;
     * (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li>
     * <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The condition value.</p> <p>If the field name is <code>host-header</code>,
     * you can specify a single host name (for example, my.example.com). A host name is
     * case insensitive, can be up to 128 characters in length, and can contain any of
     * the following characters. You can include up to three wildcard characters.</p>
     * <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0
     * or more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If the field name is <code>path-pattern</code>, you can specify a
     * single path pattern (for example, /img/ *). A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters. You can include up to three wildcard characters.</p> <ul> <li>
     * <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp;
     * (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li>
     * <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The condition value.</p> <p>If the field name is <code>host-header</code>,
     * you can specify a single host name (for example, my.example.com). A host name is
     * case insensitive, can be up to 128 characters in length, and can contain any of
     * the following characters. You can include up to three wildcard characters.</p>
     * <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0
     * or more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If the field name is <code>path-pattern</code>, you can specify a
     * single path pattern (for example, /img/ *). A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters. You can include up to three wildcard characters.</p> <ul> <li>
     * <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp;
     * (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li>
     * <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The condition value.</p> <p>If the field name is <code>host-header</code>,
     * you can specify a single host name (for example, my.example.com). A host name is
     * case insensitive, can be up to 128 characters in length, and can contain any of
     * the following characters. You can include up to three wildcard characters.</p>
     * <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0
     * or more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If the field name is <code>path-pattern</code>, you can specify a
     * single path pattern (for example, /img/ *). A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters. You can include up to three wildcard characters.</p> <ul> <li>
     * <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp;
     * (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li>
     * <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The condition value.</p> <p>If the field name is <code>host-header</code>,
     * you can specify a single host name (for example, my.example.com). A host name is
     * case insensitive, can be up to 128 characters in length, and can contain any of
     * the following characters. You can include up to three wildcard characters.</p>
     * <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0
     * or more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If the field name is <code>path-pattern</code>, you can specify a
     * single path pattern (for example, /img/ *). A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters. You can include up to three wildcard characters.</p> <ul> <li>
     * <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp;
     * (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li>
     * <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The condition value.</p> <p>If the field name is <code>host-header</code>,
     * you can specify a single host name (for example, my.example.com). A host name is
     * case insensitive, can be up to 128 characters in length, and can contain any of
     * the following characters. You can include up to three wildcard characters.</p>
     * <ul> <li> <p>A-Z, a-z, 0-9</p> </li> <li> <p>- .</p> </li> <li> <p>* (matches 0
     * or more characters)</p> </li> <li> <p>? (matches exactly 1 character)</p> </li>
     * </ul> <p>If the field name is <code>path-pattern</code>, you can specify a
     * single path pattern (for example, /img/ *). A path pattern is case-sensitive, can
     * be up to 128 characters in length, and can contain any of the following
     * characters. You can include up to three wildcard characters.</p> <ul> <li>
     * <p>A-Z, a-z, 0-9</p> </li> <li> <p>_ - . $ / ~ " ' @ : +</p> </li> <li> <p>&amp;
     * (using &amp;amp;)</p> </li> <li> <p>* (matches 0 or more characters)</p> </li>
     * <li> <p>? (matches exactly 1 character)</p> </li> </ul>
     */
    inline RuleCondition& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    
    inline const HostHeaderConditionConfig& GetHostHeaderConfig() const{ return m_hostHeaderConfig; }

    
    inline bool HostHeaderConfigHasBeenSet() const { return m_hostHeaderConfigHasBeenSet; }

    
    inline void SetHostHeaderConfig(const HostHeaderConditionConfig& value) { m_hostHeaderConfigHasBeenSet = true; m_hostHeaderConfig = value; }

    
    inline void SetHostHeaderConfig(HostHeaderConditionConfig&& value) { m_hostHeaderConfigHasBeenSet = true; m_hostHeaderConfig = std::move(value); }

    
    inline RuleCondition& WithHostHeaderConfig(const HostHeaderConditionConfig& value) { SetHostHeaderConfig(value); return *this;}

    
    inline RuleCondition& WithHostHeaderConfig(HostHeaderConditionConfig&& value) { SetHostHeaderConfig(std::move(value)); return *this;}


    
    inline const PathPatternConditionConfig& GetPathPatternConfig() const{ return m_pathPatternConfig; }

    
    inline bool PathPatternConfigHasBeenSet() const { return m_pathPatternConfigHasBeenSet; }

    
    inline void SetPathPatternConfig(const PathPatternConditionConfig& value) { m_pathPatternConfigHasBeenSet = true; m_pathPatternConfig = value; }

    
    inline void SetPathPatternConfig(PathPatternConditionConfig&& value) { m_pathPatternConfigHasBeenSet = true; m_pathPatternConfig = std::move(value); }

    
    inline RuleCondition& WithPathPatternConfig(const PathPatternConditionConfig& value) { SetPathPatternConfig(value); return *this;}

    
    inline RuleCondition& WithPathPatternConfig(PathPatternConditionConfig&& value) { SetPathPatternConfig(std::move(value)); return *this;}


    
    inline const HttpHeaderConditionConfig& GetHttpHeaderConfig() const{ return m_httpHeaderConfig; }

    
    inline bool HttpHeaderConfigHasBeenSet() const { return m_httpHeaderConfigHasBeenSet; }

    
    inline void SetHttpHeaderConfig(const HttpHeaderConditionConfig& value) { m_httpHeaderConfigHasBeenSet = true; m_httpHeaderConfig = value; }

    
    inline void SetHttpHeaderConfig(HttpHeaderConditionConfig&& value) { m_httpHeaderConfigHasBeenSet = true; m_httpHeaderConfig = std::move(value); }

    
    inline RuleCondition& WithHttpHeaderConfig(const HttpHeaderConditionConfig& value) { SetHttpHeaderConfig(value); return *this;}

    
    inline RuleCondition& WithHttpHeaderConfig(HttpHeaderConditionConfig&& value) { SetHttpHeaderConfig(std::move(value)); return *this;}


    
    inline const QueryStringConditionConfig& GetQueryStringConfig() const{ return m_queryStringConfig; }

    
    inline bool QueryStringConfigHasBeenSet() const { return m_queryStringConfigHasBeenSet; }

    
    inline void SetQueryStringConfig(const QueryStringConditionConfig& value) { m_queryStringConfigHasBeenSet = true; m_queryStringConfig = value; }

    
    inline void SetQueryStringConfig(QueryStringConditionConfig&& value) { m_queryStringConfigHasBeenSet = true; m_queryStringConfig = std::move(value); }

    
    inline RuleCondition& WithQueryStringConfig(const QueryStringConditionConfig& value) { SetQueryStringConfig(value); return *this;}

    
    inline RuleCondition& WithQueryStringConfig(QueryStringConditionConfig&& value) { SetQueryStringConfig(std::move(value)); return *this;}


    
    inline const HttpRequestMethodConditionConfig& GetHttpRequestMethodConfig() const{ return m_httpRequestMethodConfig; }

    
    inline bool HttpRequestMethodConfigHasBeenSet() const { return m_httpRequestMethodConfigHasBeenSet; }

    
    inline void SetHttpRequestMethodConfig(const HttpRequestMethodConditionConfig& value) { m_httpRequestMethodConfigHasBeenSet = true; m_httpRequestMethodConfig = value; }

    
    inline void SetHttpRequestMethodConfig(HttpRequestMethodConditionConfig&& value) { m_httpRequestMethodConfigHasBeenSet = true; m_httpRequestMethodConfig = std::move(value); }

    
    inline RuleCondition& WithHttpRequestMethodConfig(const HttpRequestMethodConditionConfig& value) { SetHttpRequestMethodConfig(value); return *this;}

    
    inline RuleCondition& WithHttpRequestMethodConfig(HttpRequestMethodConditionConfig&& value) { SetHttpRequestMethodConfig(std::move(value)); return *this;}


    
    inline const SourceIpConditionConfig& GetSourceIpConfig() const{ return m_sourceIpConfig; }

    
    inline bool SourceIpConfigHasBeenSet() const { return m_sourceIpConfigHasBeenSet; }

    
    inline void SetSourceIpConfig(const SourceIpConditionConfig& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = value; }

    
    inline void SetSourceIpConfig(SourceIpConditionConfig&& value) { m_sourceIpConfigHasBeenSet = true; m_sourceIpConfig = std::move(value); }

    
    inline RuleCondition& WithSourceIpConfig(const SourceIpConditionConfig& value) { SetSourceIpConfig(value); return *this;}

    
    inline RuleCondition& WithSourceIpConfig(SourceIpConditionConfig&& value) { SetSourceIpConfig(std::move(value)); return *this;}

  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    HostHeaderConditionConfig m_hostHeaderConfig;
    bool m_hostHeaderConfigHasBeenSet;

    PathPatternConditionConfig m_pathPatternConfig;
    bool m_pathPatternConfigHasBeenSet;

    HttpHeaderConditionConfig m_httpHeaderConfig;
    bool m_httpHeaderConfigHasBeenSet;

    QueryStringConditionConfig m_queryStringConfig;
    bool m_queryStringConfigHasBeenSet;

    HttpRequestMethodConditionConfig m_httpRequestMethodConfig;
    bool m_httpRequestMethodConfigHasBeenSet;

    SourceIpConditionConfig m_sourceIpConfig;
    bool m_sourceIpConfigHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
