#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_NagaSiren_SongOfTheSiren_Healing_Aura : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        int32_t m_nAffectedAllies; // 0x16ec        
        // m_vhAffectedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vhAffectedHeroes;
        char m_vhAffectedHeroes[0x18]; // 0x16f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_NagaSiren_SongOfTheSiren_Healing_Aura because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_NagaSiren_SongOfTheSiren_Healing_Aura) == 0x1708);
};
