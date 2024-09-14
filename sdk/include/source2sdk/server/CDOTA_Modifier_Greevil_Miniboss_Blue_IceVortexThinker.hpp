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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Greevil_Miniboss_Blue_IceVortexThinker : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        int32_t movement_speed_pct; // 0x16ec        
        int32_t spell_resist_pct; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        // m_hChilledEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hChilledEntities;
        char m_hChilledEntities[0x18]; // 0x16f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Greevil_Miniboss_Blue_IceVortexThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Greevil_Miniboss_Blue_IceVortexThinker) == 0x1710);
};
