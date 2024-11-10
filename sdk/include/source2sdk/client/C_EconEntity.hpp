#pragma once
#include "source2sdk/client/CAttributeContainer.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/client/C_EconEntity__AttachedModelData_t.hpp"
#include "source2sdk/client/C_EconEntity__AttachedParticleInfo_t.hpp"
#include "source2sdk/client/EconEntityParticleDisableMode_t.hpp"
#include "source2sdk/client/style_index_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBaseAnimatingActivity;
};

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb70
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
    #pragma pack(push, 1)
    class C_EconEntity : public client::C_BaseFlex
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9d0[0x10]; // 0x9d0
        // metadata: MNetworkEnable
        client::CAttributeContainer m_AttributeManager; // 0x9e0        
        bool m_bClientside; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb21[0x3]; // 0xb21
        client::EconEntityParticleDisableMode_t m_nDisableMode; // 0xb24        
        bool m_bParticleSystemsCreated; // 0xb28        
        bool m_bForceDestroyAttachedParticlesImmediately; // 0xb29        
        [[maybe_unused]] std::uint8_t pad_0xb2a[0x6]; // 0xb2a
        // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_EconEntity__AttachedParticleInfo_t> m_vecAttachedParticles;
        char m_vecAttachedParticles[0x18]; // 0xb30        
        // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseAnimatingActivity> m_hViewmodelAttachment;
        char m_hViewmodelAttachment[0x4]; // 0xb48        
        int32_t m_iOldTeam; // 0xb4c        
        bool m_bAttachmentDirty; // 0xb50        
        client::style_index_t m_iOldStyle; // 0xb51        
        [[maybe_unused]] std::uint8_t pad_0xb52[0x2]; // 0xb52
        // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldProvidee;
        char m_hOldProvidee[0x4]; // 0xb54        
        // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_EconEntity__AttachedModelData_t> m_vecAttachedModels;
        char m_vecAttachedModels[0x18]; // 0xb58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
    static_assert(sizeof(C_EconEntity) == 0xb70);
};
