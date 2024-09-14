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
    // Size: 0xb10
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
    #pragma pack(push, 1)
    class C_EconEntity : public client::C_BaseFlex
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x988[0x10]; // 0x988
        // metadata: MNetworkEnable
        client::CAttributeContainer m_AttributeManager; // 0x998        
        bool m_bClientside; // 0xac0        
        [[maybe_unused]] std::uint8_t pad_0xac1[0x3]; // 0xac1
        client::EconEntityParticleDisableMode_t m_nDisableMode; // 0xac4        
        bool m_bParticleSystemsCreated; // 0xac8        
        bool m_bForceDestroyAttachedParticlesImmediately; // 0xac9        
        [[maybe_unused]] std::uint8_t pad_0xaca[0x6]; // 0xaca
        // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_EconEntity__AttachedParticleInfo_t> m_vecAttachedParticles;
        char m_vecAttachedParticles[0x18]; // 0xad0        
        // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseAnimatingActivity> m_hViewmodelAttachment;
        char m_hViewmodelAttachment[0x4]; // 0xae8        
        int32_t m_iOldTeam; // 0xaec        
        bool m_bAttachmentDirty; // 0xaf0        
        client::style_index_t m_iOldStyle; // 0xaf1        
        [[maybe_unused]] std::uint8_t pad_0xaf2[0x2]; // 0xaf2
        // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldProvidee;
        char m_hOldProvidee[0x4]; // 0xaf4        
        // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_EconEntity__AttachedModelData_t> m_vecAttachedModels;
        char m_vecAttachedModels[0x18]; // 0xaf8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
    static_assert(sizeof(C_EconEntity) == 0xb10);
};
