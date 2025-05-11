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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModelConfigElement_AttachedModel : public source2sdk::modellib::CModelConfigElement
        {
        public:
            CUtlString m_InstanceName; // 0x48            
            CUtlString m_EntityClass; // 0x50            
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x8]; // 0x58            
            Vector m_vOffset; // 0x60            
            QAngle m_aAngOffset; // 0x6c            
            CUtlString m_AttachmentName; // 0x78            
            CUtlString m_LocalAttachmentOffsetName; // 0x80            
            source2sdk::modellib::ModelConfigAttachmentType_t m_AttachmentType; // 0x88            
            bool m_bBoneMergeFlex; // 0x8c            
            bool m_bUserSpecifiedColor; // 0x8d            
            bool m_bUserSpecifiedMaterialGroup; // 0x8e            
            bool m_bAcceptParentMaterialDrivenDecals; // 0x8f            
            CUtlString m_BodygroupOnOtherModels; // 0x90            
            CUtlString m_MaterialGroupOnOtherModels; // 0x98            
            uint8_t _pad00a0[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModelConfigElement_AttachedModel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CModelConfigElement_AttachedModel) == 0xe8);
    };
};
