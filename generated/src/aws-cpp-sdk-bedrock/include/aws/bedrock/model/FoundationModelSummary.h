﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ModelModality.h>
#include <aws/bedrock/model/ModelCustomization.h>
#include <aws/bedrock/model/InferenceType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Summary information for a foundation model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/FoundationModelSummary">AWS
   * API Reference</a></p>
   */
  class FoundationModelSummary
  {
  public:
    AWS_BEDROCK_API FoundationModelSummary();
    AWS_BEDROCK_API FoundationModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API FoundationModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline FoundationModelSummary& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline FoundationModelSummary& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the foundation model.</p>
     */
    inline FoundationModelSummary& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The model Id of the foundation model.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The model Id of the foundation model.</p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>The model Id of the foundation model.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>The model Id of the foundation model.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>The model Id of the foundation model.</p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>The model Id of the foundation model.</p>
     */
    inline FoundationModelSummary& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model Id of the foundation model.</p>
     */
    inline FoundationModelSummary& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model Id of the foundation model.</p>
     */
    inline FoundationModelSummary& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline FoundationModelSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline FoundationModelSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline FoundationModelSummary& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The model's provider name.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The model's provider name.</p>
     */
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }

    /**
     * <p>The model's provider name.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The model's provider name.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }

    /**
     * <p>The model's provider name.</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The model's provider name.</p>
     */
    inline FoundationModelSummary& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The model's provider name.</p>
     */
    inline FoundationModelSummary& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The model's provider name.</p>
     */
    inline FoundationModelSummary& WithProviderName(const char* value) { SetProviderName(value); return *this;}


    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline const Aws::Vector<ModelModality>& GetInputModalities() const{ return m_inputModalities; }

    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline bool InputModalitiesHasBeenSet() const { return m_inputModalitiesHasBeenSet; }

    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline void SetInputModalities(const Aws::Vector<ModelModality>& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities = value; }

    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline void SetInputModalities(Aws::Vector<ModelModality>&& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities = std::move(value); }

    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline FoundationModelSummary& WithInputModalities(const Aws::Vector<ModelModality>& value) { SetInputModalities(value); return *this;}

    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline FoundationModelSummary& WithInputModalities(Aws::Vector<ModelModality>&& value) { SetInputModalities(std::move(value)); return *this;}

    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline FoundationModelSummary& AddInputModalities(const ModelModality& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities.push_back(value); return *this; }

    /**
     * <p>The input modalities that the model supports.</p>
     */
    inline FoundationModelSummary& AddInputModalities(ModelModality&& value) { m_inputModalitiesHasBeenSet = true; m_inputModalities.push_back(std::move(value)); return *this; }


    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline const Aws::Vector<ModelModality>& GetOutputModalities() const{ return m_outputModalities; }

    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline bool OutputModalitiesHasBeenSet() const { return m_outputModalitiesHasBeenSet; }

    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline void SetOutputModalities(const Aws::Vector<ModelModality>& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities = value; }

    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline void SetOutputModalities(Aws::Vector<ModelModality>&& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities = std::move(value); }

    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline FoundationModelSummary& WithOutputModalities(const Aws::Vector<ModelModality>& value) { SetOutputModalities(value); return *this;}

    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline FoundationModelSummary& WithOutputModalities(Aws::Vector<ModelModality>&& value) { SetOutputModalities(std::move(value)); return *this;}

    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline FoundationModelSummary& AddOutputModalities(const ModelModality& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities.push_back(value); return *this; }

    /**
     * <p>The output modalities that the model supports.</p>
     */
    inline FoundationModelSummary& AddOutputModalities(ModelModality&& value) { m_outputModalitiesHasBeenSet = true; m_outputModalities.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the model supports streaming.</p>
     */
    inline bool GetResponseStreamingSupported() const{ return m_responseStreamingSupported; }

    /**
     * <p>Indicates whether the model supports streaming.</p>
     */
    inline bool ResponseStreamingSupportedHasBeenSet() const { return m_responseStreamingSupportedHasBeenSet; }

    /**
     * <p>Indicates whether the model supports streaming.</p>
     */
    inline void SetResponseStreamingSupported(bool value) { m_responseStreamingSupportedHasBeenSet = true; m_responseStreamingSupported = value; }

    /**
     * <p>Indicates whether the model supports streaming.</p>
     */
    inline FoundationModelSummary& WithResponseStreamingSupported(bool value) { SetResponseStreamingSupported(value); return *this;}


    /**
     * <p>Whether the model supports fine-tuning or continual pre-training.</p>
     */
    inline const Aws::Vector<ModelCustomization>& GetCustomizationsSupported() const{ return m_customizationsSupported; }

    /**
     * <p>Whether the model supports fine-tuning or continual pre-training.</p>
     */
    inline bool CustomizationsSupportedHasBeenSet() const { return m_customizationsSupportedHasBeenSet; }

    /**
     * <p>Whether the model supports fine-tuning or continual pre-training.</p>
     */
    inline void SetCustomizationsSupported(const Aws::Vector<ModelCustomization>& value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported = value; }

    /**
     * <p>Whether the model supports fine-tuning or continual pre-training.</p>
     */
    inline void SetCustomizationsSupported(Aws::Vector<ModelCustomization>&& value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported = std::move(value); }

    /**
     * <p>Whether the model supports fine-tuning or continual pre-training.</p>
     */
    inline FoundationModelSummary& WithCustomizationsSupported(const Aws::Vector<ModelCustomization>& value) { SetCustomizationsSupported(value); return *this;}

    /**
     * <p>Whether the model supports fine-tuning or continual pre-training.</p>
     */
    inline FoundationModelSummary& WithCustomizationsSupported(Aws::Vector<ModelCustomization>&& value) { SetCustomizationsSupported(std::move(value)); return *this;}

    /**
     * <p>Whether the model supports fine-tuning or continual pre-training.</p>
     */
    inline FoundationModelSummary& AddCustomizationsSupported(const ModelCustomization& value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported.push_back(value); return *this; }

    /**
     * <p>Whether the model supports fine-tuning or continual pre-training.</p>
     */
    inline FoundationModelSummary& AddCustomizationsSupported(ModelCustomization&& value) { m_customizationsSupportedHasBeenSet = true; m_customizationsSupported.push_back(std::move(value)); return *this; }


    /**
     * <p>The inference types that the model supports.</p>
     */
    inline const Aws::Vector<InferenceType>& GetInferenceTypesSupported() const{ return m_inferenceTypesSupported; }

    /**
     * <p>The inference types that the model supports.</p>
     */
    inline bool InferenceTypesSupportedHasBeenSet() const { return m_inferenceTypesSupportedHasBeenSet; }

    /**
     * <p>The inference types that the model supports.</p>
     */
    inline void SetInferenceTypesSupported(const Aws::Vector<InferenceType>& value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported = value; }

    /**
     * <p>The inference types that the model supports.</p>
     */
    inline void SetInferenceTypesSupported(Aws::Vector<InferenceType>&& value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported = std::move(value); }

    /**
     * <p>The inference types that the model supports.</p>
     */
    inline FoundationModelSummary& WithInferenceTypesSupported(const Aws::Vector<InferenceType>& value) { SetInferenceTypesSupported(value); return *this;}

    /**
     * <p>The inference types that the model supports.</p>
     */
    inline FoundationModelSummary& WithInferenceTypesSupported(Aws::Vector<InferenceType>&& value) { SetInferenceTypesSupported(std::move(value)); return *this;}

    /**
     * <p>The inference types that the model supports.</p>
     */
    inline FoundationModelSummary& AddInferenceTypesSupported(const InferenceType& value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported.push_back(value); return *this; }

    /**
     * <p>The inference types that the model supports.</p>
     */
    inline FoundationModelSummary& AddInferenceTypesSupported(InferenceType&& value) { m_inferenceTypesSupportedHasBeenSet = true; m_inferenceTypesSupported.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::Vector<ModelModality> m_inputModalities;
    bool m_inputModalitiesHasBeenSet = false;

    Aws::Vector<ModelModality> m_outputModalities;
    bool m_outputModalitiesHasBeenSet = false;

    bool m_responseStreamingSupported;
    bool m_responseStreamingSupportedHasBeenSet = false;

    Aws::Vector<ModelCustomization> m_customizationsSupported;
    bool m_customizationsSupportedHasBeenSet = false;

    Aws::Vector<InferenceType> m_inferenceTypesSupported;
    bool m_inferenceTypesSupportedHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
