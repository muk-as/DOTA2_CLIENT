#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAttributeContainer.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/client/C_EconEntity_AttachedModelData_t.hpp"
#include "source2sdk/client/C_EconEntity_AttachedParticleInfo_t.hpp"
#include "source2sdk/client/EconEntityParticleDisableMode_t.hpp"
#include "source2sdk/client/style_index_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimatingActivity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd38
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        #pragma pack(push, 1)
        class C_EconEntity : public source2sdk::client::C_BaseFlex
        {
        public:
            uint8_t _pad0b98[0x10]; // 0xb98
            // metadata: MNetworkEnable
            source2sdk::client::CAttributeContainer m_AttributeManager; // 0xba8            
            bool m_bClientside; // 0xce8            
            uint8_t _pad0ce9[0x3]; // 0xce9
            source2sdk::client::EconEntityParticleDisableMode_t m_nDisableMode; // 0xcec            
            bool m_bParticleSystemsCreated; // 0xcf0            
            bool m_bForceDestroyAttachedParticlesImmediately; // 0xcf1            
            uint8_t _pad0cf2[0x6]; // 0xcf2
            // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconEntity_AttachedParticleInfo_t> m_vecAttachedParticles;
            char m_vecAttachedParticles[0x18]; // 0xcf8            
            // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimatingActivity> m_hViewmodelAttachment;
            char m_hViewmodelAttachment[0x4]; // 0xd10            
            std::int32_t m_iOldTeam; // 0xd14            
            bool m_bAttachmentDirty; // 0xd18            
            source2sdk::client::style_index_t m_iOldStyle; // 0xd19            
            uint8_t _pad0d1a[0x2]; // 0xd1a
            // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldProvidee;
            char m_hOldProvidee[0x4]; // 0xd1c            
            // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconEntity_AttachedModelData_t> m_vecAttachedModels;
            char m_vecAttachedModels[0x18]; // 0xd20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EconEntity) == 0xd38);
    };
};
