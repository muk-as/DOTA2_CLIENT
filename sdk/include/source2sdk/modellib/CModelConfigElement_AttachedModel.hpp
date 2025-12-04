#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CModelConfigElement.hpp"
#include "source2sdk/modellib/ModelConfigAttachmentType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModelConfigElement_AttachedModel : public source2sdk::modellib::CModelConfigElement
        {
        public:
            CUtlString m_InstanceName; // 0x_            
            CUtlString m_EntityClass; // 0x_            
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x_]; // 0x_            
            Vector m_vOffset; // 0x_            
            QAngle m_aAngOffset; // 0x_            
            CUtlString m_AttachmentName; // 0x_            
            CUtlString m_LocalAttachmentOffsetName; // 0x_            
            source2sdk::modellib::ModelConfigAttachmentType_t m_AttachmentType; // 0x_            
            bool m_bBoneMergeFlex; // 0x_            
            bool m_bUserSpecifiedColor; // 0x_            
            bool m_bUserSpecifiedMaterialGroup; // 0x_            
            bool m_bAcceptParentMaterialDrivenDecals; // 0x_            
            CUtlString m_BodygroupOnOtherModels; // 0x_            
            CUtlString m_MaterialGroupOnOtherModels; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModelConfigElement_AttachedModel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CModelConfigElement_AttachedModel) == 0x_);
    };
};
