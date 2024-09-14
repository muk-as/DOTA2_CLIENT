#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Undying_Tombstone_Bunker : public client::CDOTA_Buff
    {
    public:
        float bunker_heal_pct; // 0x16e8        
        float tombstone_grab_radius; // 0x16ec        
        float tombstone_stun_penalty; // 0x16f0        
        // m_hLoadedUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLoadedUnit;
        char m_hLoadedUnit[0x4]; // 0x16f4        
        client::ParticleIndex_t m_nBunkerEnterFXIndex; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Undying_Tombstone_Bunker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Undying_Tombstone_Bunker) == 0x1700);
};
