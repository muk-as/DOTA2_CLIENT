#pragma once
#include "source2sdk/server/CDOTA_Modifier_PersistentInvisibility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Oracle_FalsePromise_Invis : public server::CDOTA_Modifier_PersistentInvisibility
    {
    public:
        float shard_spell_amp_bonus; // 0x16f8        
        float shard_bat_bonus; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_FalsePromise_Invis because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Oracle_FalsePromise_Invis) == 0x1700);
};
