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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rattletrap_Hookshot_Barrier : public client::CDOTA_Buff
    {
    public:
        int32_t allied_armor_bonus; // 0x1708        
        client::ParticleIndex_t m_nFxIndex; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Hookshot_Barrier because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rattletrap_Hookshot_Barrier) == 0x1710);
};
