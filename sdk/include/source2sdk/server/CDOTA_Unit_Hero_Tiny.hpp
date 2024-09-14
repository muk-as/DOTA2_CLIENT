#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1e78
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC> m_hIllusionOwner"
    // static metadata: MNetworkVarNames "bool m_bIllusionHasTree"
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Tiny : public server::CDOTA_BaseNPC_Hero
    {
    public:
        // m_hTreeWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTreeWearable;
        char m_hTreeWearable[0x4]; // 0x1e68        
        client::ParticleIndex_t m_nFXIndexScepterAmbient; // 0x1e6c        
        // metadata: MNetworkEnable
        // m_hIllusionOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hIllusionOwner;
        char m_hIllusionOwner[0x4]; // 0x1e70        
        // metadata: MNetworkEnable
        bool m_bIllusionHasTree; // 0x1e74        
        [[maybe_unused]] std::uint8_t pad_0x1e75[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Tiny because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Tiny) == 0x1e78);
};
