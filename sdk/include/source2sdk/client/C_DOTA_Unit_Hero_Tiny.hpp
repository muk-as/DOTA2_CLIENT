#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b98
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC> m_hIllusionOwner"
    // static metadata: MNetworkVarNames "bool m_bIllusionHasTree"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Hero_Tiny : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        // m_hTreeWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTreeWearable;
        char m_hTreeWearable[0x4]; // 0x1b88        
        client::ParticleIndex_t m_nFXIndexScepterAmbient; // 0x1b8c        
        // metadata: MNetworkEnable
        // m_hIllusionOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hIllusionOwner;
        char m_hIllusionOwner[0x4]; // 0x1b90        
        // metadata: MNetworkEnable
        bool m_bIllusionHasTree; // 0x1b94        
        [[maybe_unused]] std::uint8_t pad_0x1b95[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Hero_Tiny because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Hero_Tiny) == 0x1b98);
};
